# Build Notes

* Resource: https://edgetx.org/edgetx/latest/building/

```bash

conda create -n edgetx python=3.10
conda activate edgetx
pip install lz4 libclang jinja2 pydantic pillow

# for converting images
pip install rich
sudo apt-get install librsvg2-bin


```


```bash
# because i have multiple arm-none-eabi version
# select preset
cmake --preset tx16s -DARM_TOOLCHAIN_DIR=/opt/arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi/bin #-DTRANSLATIONS=VI

# Then build to the folder
cmake --build build/tx16s --target firmware
```

## Custom ELRS transmitter on the internal RF connection

The TX16S target supports internal CRSF already. The model's Internal RF menu
uses the module type selected in the radio's hardware settings; when that type
is Multi, the model menu only offers Multi (and Off).

After connecting your ELRS transmitter to the internal module interface:

1. Hold **SYS**, open **Hardware**, and find **Internal RF**.
2. Change **Type** from **Multi** to **CRSF**.
3. In each model's **Model Setup**, set **Internal RF / Mode** to **CRSF**.
   Set **External RF** to **Off** if you are using only the internal connection.
4. Open the ExpressLRS Lua script to check communication with the module.

The current `build/tx16s/CMakeCache.txt` has `INTERNAL_MODULE_CRSF=ON` and
`INTERNAL_MODULES=PXX1;PXX2;MULTI;CRSF`, so no source changes are needed to
expose CRSF. If you want CRSF as the default for newly initialized radio
settings, configure and build with:

```bash
cmake --preset tx16s \
  -DARM_TOOLCHAIN_DIR=/opt/arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi/bin \
  -DINTERNAL_MODULE_CRSF=ON \
  -DCROSSFIRE=ON \
  -DDEFAULT_INTERNAL_MODULE=CROSSFIRE
cmake --build build/tx16s --target firmware
```

`CROSSFIRE` is the code's name for the CRSF module type used by ELRS too.
Changing this default does not overwrite saved hardware settings; select CRSF
in the Hardware menu on the existing radio.

Verify the custom module's wiring before connecting it: the internal interface
and an external module bay can use different signal arrangements. Match UART
signals, polarity, supply voltage, and current requirements to your module;
selecting CRSF does not adapt the electrical interface.

Reference: [EdgeTX Hardware settings](https://manual.edgetx.org/v2.10/color-radios/radio-settings/hardware).


## Flashing

Flash the TX16S STM32F429 using an ST-Link probe over SWD. Connect SWDIO,
SWCLK, GND, and the probe's target voltage reference to 3.3 V; power the board.

```bash
# Flash and verify the complete image, then reset and exit.
# firmware.bin already contains the bootloader.
openocd -f openocd-stm32f429.cfg -c flash_edgetx

# Alternatively, update only the bootloader.
openocd -f openocd-stm32f429.cfg -c flash_bootloader
```

Both binaries are written at `0x08000000`. The application inside the combined
firmware image begins at `0x08020000`. Paths are resolved relative to the config.
