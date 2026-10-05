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
