/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/*
 * Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */

// Main menu
#define TR_QM_MANAGE_MODELS             "Quản lý\nMô hình"
#define TR_QM_MODEL_SETUP               "Mô hình\nThiết lập"
#define TR_QM_RADIO_SETUP               "Radio\nThiết lập"
#define TR_QM_UI_SETUP                  "Thiết lập\nGiao diện"
#define TR_QM_TOOLS                     "Công cụ"
#define TR_QM_MODEL_SETTINGS            "Mẫu\nCài đặt"
#define TR_QM_RADIO_SETTINGS            "Radio\nCài đặt"
#define TR_QM_FLIGHT_MODES              TR_SFC_AIR("DriveChế độ \n", "Các chế độ chuyến bay\n")
#define TR_QM_INPUTS                    "Đầu vào"
#define TR_QM_MIXES                     "Kết hợp"
#define TR_QM_OUTPUTS                   "Đầu ra"
#define TR_QM_CURVES                    "Đường cong"
#define TR_QM_GLOBAL_VARS               "Toàn cầu\nBiến"
#define TR_QM_LOGICAL_SW                "Logic\nCông tắc"
#define TR_QM_SPEC_FUNC                 "Chức năng\nĐặc biệt"
#define TR_QM_CUSTOM_LUA                "Bộ trộn\nTập lệnh"
#define TR_QM_TELEM                     "Đo từ xa"
#define TR_QM_GLOB_FUNC                 "Toàn cầu\nChức năng"
#define TR_QM_TRAINER                   "Huấn luyện"
#define TR_QM_HARDWARE                  "Phần cứng"
#define TR_QM_ABOUT                     "Giới thiệu\nHệ Thống Rồng Vàng"
#define TR_QM_THEMES                    "Chủ đề"
#define TR_QM_TOP_BAR                   "Thanh trên"
#define TR_QM_SCREEN_1                  "Màn hình 1"
#define TR_QM_SCREEN_2                  "Màn hình 2"
#define TR_QM_SCREEN_3                  "Màn hình 3"
#define TR_QM_SCREEN_4                  "Màn hình 4"
#define TR_QM_SCREEN_5                  "Màn hình 5"
#define TR_QM_SCREEN_6                  "Màn hình 6"
#define TR_QM_SCREEN_7                  "Màn hình 7"
#define TR_QM_SCREEN_8                  "Màn hình 8"
#define TR_QM_SCREEN_9                  "Màn hình 9"
#define TR_QM_SCREEN_10                 "Màn hình 10"
#define TR_QM_ADD_SCREEN                "Thêm\nMàn hình"
#define TR_QM_APPS                      "Ứng dụng"
#define TR_QM_STORAGE                   "Bộ lưu trữ"
#define TR_QM_RESET                     TR_SFC_AIR("Drive\nĐặt lại", "Chuyến bay\nĐặt lại")
#define TR_QM_CHAN_MON                  "Kênh\nMàn hình"
#define TR_QM_LS_MON                    "LS\nGiám sát"
#define TR_QM_STATS                     "Thống kê"
#define TR_QM_DEBUG                     "Gỡ lỗi"
#define TR_MAIN_MODEL_SETTINGS          "Cài đặt mẫu"
#define TR_MAIN_RADIO_SETTINGS          "Cài đặt radio"
#define TR_MAIN_MENU_MANAGE_MODELS      "Quản lý mô hình"
#define TR_MAIN_MENU_MODEL_NOTES        "Ghi chú mẫu"
#define TR_MAIN_MENU_CHANNEL_MONITOR    "Giám sát kênh"
#define TR_MONITOR_SWITCHES             "Giám sát chuyển mạch logic"
#define TR_MAIN_MENU_MODEL_SETTINGS     "Thiết lập mô hình"
#define TR_MAIN_MENU_RADIO_SETTINGS     "Thiết lập Radio"
#define TR_MAIN_MENU_SCREEN_SETTINGS    "Thiết lập giao diện người dùng"
#define TR_MAIN_MENU_STATISTICS         "Thống kê"
#define TR_MAIN_MENU_ABOUT_EDGETX       "Giới thiệu về Hệ Thống Rồng Vàng"
#define TR_MAIN_VIEW_X                  "Màn hình "
#define TR_MAIN_MENU_THEMES             "Chủ đề"
#define TR_MAIN_MENU_APPS               "Ứng dụng"
#define TR_MENUHELISETUP                TR_BW_COL("THIẾT LẬP HELI", "Cài đặt Heli")
#define TR_MENUFLIGHTMODES              TR_SFC_AIR(TR_BW_COL("CHẾ ĐỘ LÁI XE", "Chế độ lái"), TR_BW_COL("PHƯƠNG THỨC BAY", "Chế độ bay"))
#define TR_MENUFLIGHTMODE               TR_SFC_AIR("CHẾ ĐỘ LÁI XE", "CHẾ ĐỘ BAY")
#define TR_MENUINPUTS                   TR_BW_COL("ĐẦU VÀO", "Đầu vào")
#define TR_MENULIMITS                   TR_BW_COL("ĐẦU RA", "Đầu ra")
#define TR_MENUCURVES                   TR_BW_COL("ĐƯỜNG CONG", "Đường cong")
#define TR_MIXES                        TR_BW_COL("HỖN HỢP", "Kết hợp")
#define TR_MENU_GLOBAL_VARS             "Biến toàn cục"
#define TR_MENULOGICALSWITCHES          TR_BW_COL("CHUYỂN ĐỔI LOGIC", "Công tắc logic")
#define TR_MENUCUSTOMFUNC               TR_BW_COL("CHỨC NĂNG ĐẶC BIỆT", "Các chức năng đặc biệt")
#define TR_MENUCUSTOMSCRIPTS            TR_BW_COL("Các tập lệnh trộn", "Các tập lệnh trộn")
#define TR_MENUTELEMETRY                TR_BW_COL("ĐO LƯỜNG TỪ XA", "Đo từ xa")
#define TR_MENUSPECIALFUNCS             TR_BW_COL("CHỨC NĂNG TOÀN CẦU", "Các chức năng toàn cầu")
#define TR_MENUTRAINER                  TR_BW_COL("HUẤN LUYỆN", "Huấn luyện")
#define TR_HARDWARE                     TR_BW_COL("PHẦN CỨNG", "Phần cứng")
#define TR_USER_INTERFACE               "Thanh trên"
#define TR_SD_CARD                      TR_BW_COL("THẺ SD", "Bộ lưu trữ")
#define TR_DEBUG                        "Gỡ lỗi"
#define TR_MENU_RADIO_SWITCHES          TR_BW_COL("CHUYỂN ĐỔI", "Kiểm tra công tắc")
#define TR_MENUCALIBRATION              TR_BW_COL("Hiệu chỉnh", "Hiệu chỉnh")
#define TR_FUNCTION_SWITCHES            "Công tắc có thể tùy chỉnh"
// End Main menu

#define TR_MINUTE_SINGULAR            "phút"
#define TR_MINUTE_PLURAL1             "phút"
#define TR_MINUTE_PLURAL2             "phút"

#define TR_OFFON_1                     "TẮT"
#define TR_OFFON_2                     "BẬT"
#define TR_MMMINV_1                    "---"
#define TR_MMMINV_2                    "INV"
#define TR_VBEEPMODE_1                 "Yên lặng"
#define TR_VBEEPMODE_2                 "Báo động"
#define TR_VBEEPMODE_3                 "Không phím"
#define TR_VBEEPMODE_4                 "Tất cả"
#define TR_VBLMODE_1                   "TẮT"
#define TR_VBLMODE_2                   "Phím"
#define TR_VBLMODE_3                   TR("Ctrl","Điều khiển")
#define TR_VBLMODE_4                   "Cả hai"
#define TR_VBLMODE_5                   "BẬT"
#define TR_TRNMODE_1                   "TẮT"
#define TR_TRNMODE_2                   TR("+=","Thêm")
#define TR_TRNMODE_3                   TR(":=","Thay thế")
#define TR_TRNCHN_1                    "CH1"
#define TR_TRNCHN_2                    "CH2"
#define TR_TRNCHN_3                    "CH3"
#define TR_TRNCHN_4                    "CH4"

#define TR_AUX_SERIAL_MODES_1          "TẮT"
#define TR_AUX_SERIAL_MODES_2          "Telem Mirror"
#define TR_AUX_SERIAL_MODES_3          "Đo từ xa trong"
#define TR_AUX_SERIAL_MODES_4          TR("SBUS Trn Inv.",TR("SBUS Trn Inv.","SBUS Trainer Đầu tư"))
#define TR_AUX_SERIAL_MODES_5          "SBUS Trainer"
#define TR_AUX_SERIAL_MODES_6          "LUA"
#define TR_AUX_SERIAL_MODES_7          "CLI"
#define TR_AUX_SERIAL_MODES_8          "GPS"
#define TR_AUX_SERIAL_MODES_9          "Gỡ lỗi"
#define TR_AUX_SERIAL_MODES_10         "SpaceMouse"
#define TR_AUX_SERIAL_MODES_11         "Mô-đun bên ngoài"
#define TR_SWTYPES_1                   "Không"
#define TR_SWTYPES_2                   "Chuyển đổi"
#define TR_SWTYPES_3                   "2POS"
#define TR_SWTYPES_4                   "3POS"
#define TR_SWTYPES_5                   "Toàn cầu"
#define TR_POTTYPES_1                  "Không"
#define TR_POTTYPES_2                  "Pot"
#define TR_POTTYPES_3                  TR("Nồi w. phát hiện","Nồi có chốt chặn")
#define TR_POTTYPES_4                  "Thanh trượt"
#define TR_POTTYPES_5                  TR("Đa cổng","Công tắc đa cổng")
#define TR_POTTYPES_6                  "Trục X"
#define TR_POTTYPES_7                  "Trục Y"
#define TR_POTTYPES_8                  "Công tắc"
#define TR_VPERSISTENT_1               "TẮT"
#define TR_VPERSISTENT_2               "Chuyến bay"
#define TR_VPERSISTENT_3               "Đặt lại thủ công"
#define TR_COUNTRY_CODES_1             TR("Hoa Kỳ","Mỹ")
#define TR_COUNTRY_CODES_2             TR("JP","Nhật Bản")
#define TR_COUNTRY_CODES_3             TR("EU","Châu Âu")
#define TR_USBMODES_1                  "Hỏi"
#define TR_USBMODES_2                  TR("Joyst","Cần điều khiển")
#define TR_USBMODES_3                  TR("SDCard","Thẻ nhớ")
#define TR_USBMODES_4                  "Nối tiếp"
#define TR_JACK_MODES_1                "Hỏi"
#define TR_JACK_MODES_2                "Âm thanh"
#define TR_JACK_MODES_3                "Huấn luyện"

#define TR_SBUS_INVERSION_VALUES_1     "bình thường"
#define TR_SBUS_INVERSION_VALUES_2     "không đảo ngược"
#define TR_MULTI_CUSTOM                "Tùy chỉnh"
#define TR_VTRIMINC_1                  TR("Expo","Expoential")
#define TR_VTRIMINC_2                  TR("Siêu mịn","Siêu mịn")
#define TR_VTRIMINC_3                  "Tốt"
#define TR_VTRIMINC_4                  "Trung bình"
#define TR_VTRIMINC_5                  "Thô"
#define TR_VDISPLAYTRIMS_1             "Không"
#define TR_VDISPLAYTRIMS_2             "Thay đổi"
#define TR_VDISPLAYTRIMS_3             "Có"
#define TR_VBEEPCOUNTDOWN_1            "Im lặng"
#define TR_VBEEPCOUNTDOWN_2            "Tiếng bíp"
#define TR_VBEEPCOUNTDOWN_3            "Giọng nói"
#define TR_VBEEPCOUNTDOWN_4            "Rung"
#define TR_VBEEPCOUNTDOWN_5            TR("B & H","Tiếng bíp & Haptic")
#define TR_VBEEPCOUNTDOWN_6            TR("V & H","Giọng nói và xúc giác")
#define TR_COUNTDOWNVALUES_1           "5 giây"
#define TR_COUNTDOWNVALUES_2           "10 giây"
#define TR_COUNTDOWNVALUES_3           "20 giây"
#define TR_COUNTDOWNVALUES_4           "30 giây"
#define TR_VVARIOCENTER_1              "Giai điệu"
#define TR_VVARIOCENTER_2              "Im lặng"
#define TR_CURVE_TYPES_1               "Tiêu chuẩn"
#define TR_CURVE_TYPES_2               "Tùy chỉnh"

#define TR_ADCFILTERVALUES_1           "Toàn cầu"
#define TR_ADCFILTERVALUES_2           "Tắt"
#define TR_ADCFILTERVALUES_3           "Bật"

#define TR_VCURVETYPE_1                "Diff"
#define TR_VCURVETYPE_2                "Expo"
#define TR_VCURVETYPE_3                "Func"
#define TR_VCURVETYPE_4                "Cstm"
#define TR_VMLTPX_1                    "Thêm"
#define TR_VMLTPX_2                    "Nhân"
#define TR_VMLTPX_3                    "Thay thế"

#define TR_CSWTIMER                    TR("Tim", "Bộ hẹn giờ")
#define TR_CSWSTICKY                   TR("Stky", "Dính")
#define TR_CSWSTAY                     "Cạnh"

#define TR_SF_TRAINER                  "Huấn luyện"
#define TR_SF_INST_TRIM                "Cắt ngay lập tức"
#define TR_SF_RESET                    "Đặt lại"
#define TR_SF_SET_TIMER                "Đặt"
#define TR_SF_VOLUME                   "Âm lượng"
#define TR_SF_FAILSAFE                 "Đặt Failsafe"
#define TR_SF_RANGE_CHECK              "Kiểm tra phạm vi"
#define TR_SF_MOD_BIND                 "Ràng buộc mô-đun"
#define TR_SF_RGBLEDS                  "Đèn led RGB"

#define TR_SOUND                       "Phát âm thanh"
#define TR_PLAY_TRACK                  TR("Phát tệp", "Phát bản nhạc")
#define TR_PLAY_VALUE                  TR("Đọc GT","Đọc giá trị")
#define TR_SF_HAPTIC                   "Rung"
#define TR_SF_PLAY_SCRIPT              TR("Lua", "Lua Tập lệnh")
#define TR_SF_BG_MUSIC                 "BgMusic"
#define TR_SF_BG_MUSIC_PAUSE           "BgMusic ||"
#define TR_SF_LOGS                     "Nhật ký SD"
#define TR_ADJUST_GVAR                 "Điều chỉnh"
#define TR_SF_BACKLIGHT                "Đèn nền"
#define TR_SF_VARIO                    "Vario"
#define TR_SF_TEST                     "Kiểm tra"

#define TR_SF_SAFETY                   TR("Overr.", "Ghi đè")

#define TR_SF_SCREENSHOT               "Ảnh chụp màn hình"
#define TR_SF_RACING_MODE              "Chế độ đua"
#define TR_SF_DISABLE_TOUCH            "Không chạm"
#define TR_SF_DISABLE_KEYS             "Không phím"
#define TR_SF_DISABLE_AUDIO_AMP        "Tắt bộ khuếch đại âm thanh"
#define TR_SF_SET_SCREEN               TR_BW_COL("Đặt màn hình", "Đặt màn hình chính")
#define TR_SF_PUSH_CUST_SWITCH         "Đẩy CS"
#define TR_SF_LCD_TO_VIDEO             "LCD sang Video"

#define TR_FSW_RESET_TELEM             TR("Telm", "Đo từ xa")
#define TR_FSW_RESET_TRIMS             "Tinh chỉnh"
#define TR_FSW_RESET_TIMERS_1          "Tmr1"
#define TR_FSW_RESET_TIMERS_2          "Tmr2"
#define TR_FSW_RESET_TIMERS_3          "Tmr3"

#define TR_VFSWRESET_1                 TR_FSW_RESET_TIMERS_1
#define TR_VFSWRESET_2                 TR_FSW_RESET_TIMERS_2
#define TR_VFSWRESET_3                 TR_FSW_RESET_TIMERS_3
#define TR_VFSWRESET_4                 TR("Tất cả","Chuyến bay")
#define TR_VFSWRESET_5                 TR_FSW_RESET_TELEM
#define TR_VFSWRESET_6                 TR_FSW_RESET_TRIMS

#define TR_FUNCSOUNDS_1                TR("Bp1","Beep1")
#define TR_FUNCSOUNDS_2                TR("Bp2","Beep2")
#define TR_FUNCSOUNDS_3                TR("Bp3","Beep3")
#define TR_FUNCSOUNDS_4                TR("Wrn1","Warn1")
#define TR_FUNCSOUNDS_5                TR("Wrn2","Cảnh báo2")
#define TR_FUNCSOUNDS_6                TR("Chee","Cheep")
#define TR_FUNCSOUNDS_7                TR("Tỷ lệ","Ratata")
#define TR_FUNCSOUNDS_8                "Tick"
#define TR_FUNCSOUNDS_9                TR("Sirn","Còi báo động")
#define TR_FUNCSOUNDS_10               "Rung chuông"
#define TR_FUNCSOUNDS_11               TR("SciF","SciFi")
#define TR_FUNCSOUNDS_12               TR("Robt","Robot")
#define TR_FUNCSOUNDS_13               TR("Chrp","Chirp")
#define TR_FUNCSOUNDS_14               "Tada"
#define TR_FUNCSOUNDS_15               TR("Crck","Crickt")
#define TR_FUNCSOUNDS_16               TR("Alrm","AlmClk")

#define TR_VUNITSSYSTEM_1              "Số liệu"
#define TR_VUNITSSYSTEM_2              TR("Anh","Hệ Anh")
#define TR_VTELEMUNIT_1                "-"
#define TR_VTELEMUNIT_2                "V"
#define TR_VTELEMUNIT_3                "A"
#define TR_VTELEMUNIT_4                "mA"
#define TR_VTELEMUNIT_5                "kts"
#define TR_VTELEMUNIT_6                "m/s"
#define TR_VTELEMUNIT_7                "f/s"
#define TR_VTELEMUNIT_8                "kmh"
#define TR_VTELEMUNIT_9                "mph"
#define TR_VTELEMUNIT_10               "m"
#define TR_VTELEMUNIT_11               "ft"
#define TR_VTELEMUNIT_12               "°C"
#define TR_VTELEMUNIT_13               "°F"
#define TR_VTELEMUNIT_14               "%"
#define TR_VTELEMUNIT_15               "mAh"
#define TR_VTELEMUNIT_16               "W"
#define TR_VTELEMUNIT_17               "mW"
#define TR_VTELEMUNIT_18               "dB"
#define TR_VTELEMUNIT_19               "rpm"
#define TR_VTELEMUNIT_20               "g"
#define TR_VTELEMUNIT_21               "°"
#define TR_VTELEMUNIT_22               "rad"
#define TR_VTELEMUNIT_23               "ml"
#define TR_VTELEMUNIT_24               "fOz"
#define TR_VTELEMUNIT_25               "mlm"
#define TR_VTELEMUNIT_26               "Hz"
#define TR_VTELEMUNIT_27               "ms"
#define TR_VTELEMUNIT_28               "chúng tôi"
#define TR_VTELEMUNIT_29               "km"
#define TR_VTELEMUNIT_30               "dBm"

#define TR_VTELEMSCREENTYPE_1          "Không"
#define TR_VTELEMSCREENTYPE_2          "Số"
#define TR_VTELEMSCREENTYPE_3          "Thanh"
#define TR_VTELEMSCREENTYPE_4          "Kịch bản"
#define TR_GPSFORMAT_1                 "DMS"
#define TR_GPSFORMAT_2                 "NMEA"


#define TR_VSWASHTYPE_1                "---"
#define TR_VSWASHTYPE_2                "120"
#define TR_VSWASHTYPE_3                "120X"
#define TR_VSWASHTYPE_4                "140"
#define TR_VSWASHTYPE_5                "90"

#define TR_STICK_NAMES0                "Rud"
#define TR_STICK_NAMES1                "Ele"
#define TR_STICK_NAMES2                "Thr"
#define TR_STICK_NAMES3                "Ail"
#define TR_SURFACE_NAMES0              "ST"
#define TR_SURFACE_NAMES1              "TH"

#define TR_ON_ONE_SWITCHES_1           "BẬT"
#define TR_ON_ONE_SWITCHES_2           "Một"

#define TR_HATSMODE                    "Chế độ mũ"
#define TR_HATSOPT_1                   "Chỉ viền"
#define TR_HATSOPT_2                   "Chỉ phím"
#define TR_HATSOPT_3                   "Có thể chuyển đổi"
#define TR_HATSOPT_4                   "Toàn cầu"
#define TR_HATSMODE_TRIMS              "Chế độ mũ: Viền"
#define TR_HATSMODE_KEYS               "Chế độ mũ: Chìa khóa"
#define TR_HATSMODE_KEYS_HELP          "Bên trái:\n"\
                                       " Bên phải = MDL\n"\
                                       " Lên = SYS\n"\
                                       " Xuống = TELE\n"\
                                       "\n"\
                                       "Bên phải:\n"\
                                       " Bên trái = PAGE<\n"\
                                       " Bên phải = PAGE>\n"\
                                       " Lên = PREV/INC\n"\
                                       " Xuống = TIẾP THEO/DEC"

#define TR_ROTARY_ENC_OPT_1       "Bình thường"
#define TR_ROTARY_ENC_OPT_2       "Đảo ngược"
#define TR_ROTARY_ENC_OPT_3       "V-I H-N"
#define TR_ROTARY_ENC_OPT_4       "V-I H-A"
#define TR_ROTARY_ENC_OPT_5       "V-N E-I"

#define TR_IMU_VSRCRAW_1             "TltX"
#define TR_IMU_VSRCRAW_2             "TltY"

#define TR_CYC_VSRCRAW_1             "CYC1"
#define TR_CYC_VSRCRAW_2             "CYC2"
#define TR_CYC_VSRCRAW_3             "CYC3"

#define TR_SRC_BATT                    "Batt"
#define TR_SRC_TIME                    "Thời gian"
#define TR_SRC_GPS                     "GPS"
#define	TR_SRC_LIGHT                    "Ánh sáng xung quanh"
#define TR_SRC_TIMER                   "Tmr"

#define TR_VTMRMODES_1                 "TẮT"
#define TR_VTMRMODES_2                 "BẬT"
#define TR_VTMRMODES_3                 "Strt"
#define TR_VTMRMODES_4                 "THs"
#define TR_VTMRMODES_5                 "TH%"
#define TR_VTMRMODES_6                 "THt"
#define TR_VTRAINER_MASTER_OFF         "TẮT"
#define TR_VTRAINER_MASTER_JACK        "Mô-đun chính/Jack"
#define TR_VTRAINER_SLAVE_JACK         "Slave/Jack"
#define TR_VTRAINER_MASTER_SBUS_MODULE "Mô-đun chính/SBUS"
#define TR_VTRAINER_MASTER_CPPM_MODULE "Mô-đun chính/CPPM"
#define TR_VTRAINER_MASTER_BATTERY     "Chính/serial"
#define TR_VTRAINER_BLUETOOTH_1        "Chính/" TR("BT","Bluetooth")
#define TR_VTRAINER_BLUETOOTH_2        "Slave/" TR("BT","Bluetooth")
#define TR_VTRAINER_MULTI              "Master/Multi"
#define TR_VTRAINER_CRSF               "Master/CRSF"
#define TR_VFAILSAFE_1                 "Chưa được đặt"
#define TR_VFAILSAFE_2                 "Giữ"
#define TR_VFAILSAFE_3                 "Tùy chỉnh"
#define TR_VFAILSAFE_4                 "Không có xung"
#define TR_VFAILSAFE_5                 "Bộ thu"
#define TR_VSENSORTYPES_1              "Tùy chỉnh"
#define TR_VSENSORTYPES_2              "Đã tính"
#define TR_VFORMULAS_1                 "Thêm"
#define TR_VFORMULAS_2                 "Trung bình"
#define TR_VFORMULAS_3                 "Tối thiểu"
#define TR_VFORMULAS_4                 "Tối đa"
#define TR_VFORMULAS_5                 "Nhân"
#define TR_VFORMULAS_6                 "Tổng cộng"
#define TR_VFORMULAS_7                 "Ô"
#define TR_VFORMULAS_8                 "Tiêu thụ"
#define TR_VFORMULAS_9                 "Khoảng cách"
#define TR_VPREC_1                     "0.--"
#define TR_VPREC_2                     "0.0 "
#define TR_VPREC_3                     "0.00"
#define TR_VCELLINDEX_1                "Thấp nhất"
#define TR_VCELLINDEX_2                "1"
#define TR_VCELLINDEX_3                "2"
#define TR_VCELLINDEX_4                "3"
#define TR_VCELLINDEX_5                "4"
#define TR_VCELLINDEX_6                "5"
#define TR_VCELLINDEX_7                "6"
#define TR_VCELLINDEX_8                "7"
#define TR_VCELLINDEX_9                "8"
#define TR_VCELLINDEX_10               "Cao nhất"
#define TR_VCELLINDEX_11               "Delta"
#define TR_SUBTRIMMODES_1              CHAR_DELTA " (chỉ ở giữa)"
#define TR_SUBTRIMMODES_2              "= (đối xứng)"
#define TR_TIMER_DIR_1                 TR("Ở lại", "Hiển thị phần còn lại")
#define TR_TIMER_DIR_2                 TR("Đã trôi qua.", "Hiển thị đã qua")

#define TR_FONT_SIZES_1                "STD"
#define TR_FONT_SIZES_2                "BÓNG"
#define TR_FONT_SIZES_3                "XXS"
#define TR_FONT_SIZES_4                "XS"
#define TR_FONT_SIZES_5                "L"
#define TR_FONT_SIZES_6                "XL"
#define TR_FONT_SIZES_7                "XXL"
#define TR_FONT_SIZES_8                "LXL"

#define TR_ENTER                       "[ENTER]"
#define TR_OK                          TR_BW_COL(TR("\010\010\010[OK]", "\010\010\010\010\010[OK]"), "Ok")
#define TR_EXIT                        TR_BW_COL("EXIT", "RTN")

#define TR_YES                         "Có"
#define TR_NO                          "Không"
#define TR_DELETEMODEL                 "XÓA MÔ HÌNH"
#define TR_COPYINGMODEL                "Đang sao chép mô hình..."
#define TR_MOVINGMODEL                 "Đang di chuyển mô hình..."
#define TR_LOADINGMODEL                "Đang tải mô hình..."
#define TR_UNLABELEDMODEL              "Chưa gắn nhãn"
#define TR_NAME                        "Tên"
#define TR_MODELNAME                   "Tên mẫu"
#define TR_PHASENAME                   "Tên chế độ"
#define TR_MIXNAME                     "Tên hỗn hợp"
#define TR_INPUTNAME                   TR("Đầu vào", "Đầu vào tên")
#define TR_EXPONAME                    TR("Tên", "Tên dòng")
#define TR_BITMAP                      "Hình ảnh mẫu"
#define TR_NO_PICTURE                  "Không có hình ảnh"
#define TR_TIMER                       TR("Bộ hẹn giờ", "Bộ hẹn giờ ")
#define TR_NO_TIMERS                   "Không có bộ hẹn giờ"
#define TR_START                       "Bắt đầu"
#define TR_NEXT                        "Tiếp theo"
#define TR_ELIMITS                     TR("E.Limits", "Giới hạn mở rộng")
#define TR_ETRIMS                      TR("E.Trims", "Hiển thị các phần cắt mở rộng")
#define TR_TRIMINC                     "Bước cắt xén"
#define TR_DISPLAY_TRIMS               TR("Hiển thị các phần cắt bỏ", "Hiển thị các phần cắt xén")
#define TR_TTRACE                      TR("T-Source", "Nguồn")
#define TR_TTRIM                       TR("T-Trim-Idle", "Chỉ cắt xén khi không hoạt động")
#define TR_TTRIM_SW                    TR("T-Trim-Sw", "Công tắc cắt")
#define TR_BEEPCTR                     TR("Ctr Beep", "Bíp khi căn giữa")
#define TR_PROTOCOL                    TR("Proto", "Giao thức")
  #define TR_PPMFRAME                  "Khung PPM"
  #define TR_REFRESHRATE               TR("Làm mới", "Tốc độ làm mới")
  #define TR_WARN_BATTVOLTAGE         TR("Đầu ra là VBAT: ", "Cảnh báo: mức đầu ra là VBAT: ")
#define TR_WARN_5VOLTS                 "Cảnh báo: mức đầu ra là 5 volt"
#define TR_MS                          "ms"
#define TR_SWITCH                      "Công tắc"
#define TR_FS_COLOR_LIST_1             "Tùy chỉnh"
#define TR_FS_COLOR_LIST_2             "Tắt"
#define TR_FS_COLOR_LIST_3             "Trắng"
#define TR_FS_COLOR_LIST_4             "Đỏ"
#define TR_FS_COLOR_LIST_5             "Xanh lục"
#define TR_FS_COLOR_LIST_6             "Vàng"
#define TR_FS_COLOR_LIST_7             "Cam"
#define TR_FS_COLOR_LIST_8             "Xanh"
#define TR_FS_COLOR_LIST_9             "Hồng"
#define TR_GROUP                       "Nhóm"
#define TR_GROUP_ALWAYS_ON             "Luôn bật"
#define TR_LUA_OVERRIDE                "Cho phép Ghi đè Lua"
#define TR_LAST                        "Cuối cùng"
#define TR_MORE_INFO                   "Thông tin thêm"
#define TR_SWITCH_TYPE                 "Loại"
#define TR_SWITCH_STARTUP              "Khởi động"
#define TR_SWITCH_GROUP                "Nhóm"
#define TR_SF_SWITCH                   "Kích hoạt"
#define TR_TRIMS                       "Tinh chỉnh"
#define TR_FADEIN                      "Làm mờ dần"
#define TR_FADEOUT                     "Làm mờ"
#define TR_CHECKTRIMS                  TR("\006Kiểm tra\012trim", "Kiểm tra trim chế độ bay")
#define TR_SWASHTYPE                   "Loại swash"
#define TR_COLLECTIVE                  TR("Tập hợp", "Tập hợp. nguồn cao độ")
#define TR_AILERON                     TR("Cyc bên.", "Cyc bên. nguồn")
#define TR_ELEVATOR                    TR("Dài. cyc.", "Dài. cyc. nguồn")
#define TR_SWASHRING                   "Vòng Swash"
#define TR_MODE                        "Chế độ"
#define TR_LEFT_STICK                  "Trái"
#define TR_SUBTYPE                     "Loại phụ"
#define TR_NOFREEEXPO                  "Không có triển lãm miễn phí!"
#define TR_NOFREEMIXER                 "Không có bộ trộn miễn phí!"
#define TR_SOURCE                       "Nguồn"
#define TR_WEIGHT                      "Trọng lượng"
#define TR_SIDE                        "Bên"
#define TR_OFFSET                       "Độ bù"
#define TR_TRIM                        "Cắt"
#define TR_CURVE                       "Đường cong"
#define TR_FLMODE                      TR("Chế độ", "Chế độ")
#define TR_MIXWARNING                  "Cảnh báo"
#define TR_OFF                         "TẮT"
#define TR_ANTENNA                     "Ăng-ten"
#define TR_NO_INFORMATION              TR("Không có thông tin", "Không có thông tin")
#define TR_MULTPX                      "Đa kênh"
#define TR_DELAYDOWN                   TR("Hoãn dn", "Hoãn xuống")
#define TR_DELAYUP                     "Hoãn tăng lên"
#define TR_SLOWDOWN                    TR("Chậm dn", "Chậm lại")
#define TR_SLOWUP                      "Tăng chậm"
#define TR_CV                          "CV"
#define TR_GV                          TR("G", "GV")
#define TR_RANGE                       "Phạm vi"
#define TR_CENTER                      "Trung tâm"
#define TR_ALARM                       "Báo động"
#define TR_BLADES                      "Lưỡi dao/Cực"
#define TR_SCREEN                      "Màn hình\001"
#define TR_SOUND_LABEL                 "Âm thanh"
#define TR_LENGTH                      "Độ dài"
#define TR_BEEP_LENGTH                 "Bíp length"
#define TR_BEEP_PITCH                  "Âm lượng tiếng bíp"
#define TR_HAPTIC_LABEL                "Rung"
#define TR_STRENGTH                    "Sức mạnh"
#define TR_IMU_LABEL                   "IMU"
#define TR_IMU_OFFSET                  "Độ bù"
#define TR_IMU_MAX                     "Tối đa"
#define TR_CONTRAST                    "Độ tương phản"
#define TR_ALARMS_LABEL                "Báo động"
#define TR_BATTERY_RANGE               TR("Batt. phạm vi", "Phạm vi điện áp pin")
#define TR_BATTERYCHARGING             "Đang sạc..."
#define TR_BATTERYFULL                 "Pin đầy"
#define TR_BATTERYNONE                 "Không có!"
#define TR_BATTERYWARNING              "Pin yếu"
#define TR_INACTIVITYALARM             "Không hoạt động"
#define TR_MEMORYWARNING               "Bộ nhớ thấp"
#define TR_ALARMWARNING                "Tắt âm thanh"
#define TR_RSSI_SHUTDOWN_ALARM         TR("RSSI tắt máy", "Kiểm tra RSSI khi tắt máy")
#define TR_TRAINER_SHUTDOWN_ALARM      TR("Trainer tắt máy", "Kiểm tra huấn luyện viên khi tắt máy")
#define TR_MODEL_STILL_POWERED         "Mô hình vẫn được cấp nguồn"
#define TR_TRAINER_STILL_CONNECTED     TR("Trainer vẫn bật","Trainer vẫn được kết nối")
#define TR_USB_STILL_CONNECTED         "USB vẫn được kết nối"
#define TR_MODEL_SHUTDOWN              "Tắt máy?"
#define TR_PRESS_ENTER_TO_CONFIRM      "Nhấn enter để xác nhận"
#define TR_THROTTLE_LABEL              "Ga"
#define TR_THROTTLE_START              "Bắt đầu ga"
#define TR_THROTTLEREVERSE             TR("T-Reverse", "Đảo ngược")
#define TR_MINUTEBEEP                  TR("Phút", "Cuộc gọi phút")
#define TR_BEEPCOUNTDOWN               "Đếm ngược"
#define TR_PERSISTENT                  TR("Liên tục.", "Liên tục")
#define TR_BACKLIGHT_LABEL             "Đèn nền"
#define TR_STATUS                      "Trạng thái"
#define TR_BLONBRIGHTNESS              "BẬT độ sáng"
#define TR_BLOFFBRIGHTNESS             "TẮT độ sáng"
#define TR_KEYS_BACKLIGHT              "Đèn nền phím"
#define TR_BLCOLOR                     "Màu sắc"
#define TR_ONE_LOG_PER_DAY             "Một nhật ký mỗi ngày"
#define TR_KEY_LOCK_FMT                "Khóa phím (%s+%s giữ)"
#define TR_KEYS_LOCKED                 "Phím đã khóa"
#define TR_KEYS_LOCKED_FMT             TR_BW_COL("%s+%s để mở khóa", "Các phím đã bị khóa (%s+%s để mở khóa)")
#define TR_KEYS_UNLOCKED               "Các phím đã được mở khóa"
#define TR_TOUCH_ENABLED               "Chạm đã bật màn hình"
#define TR_TOUCH_DISABLED              "Đã tắt màn hình cảm ứng"
#define TR_SPLASHSCREEN                "Màn hình chờ"
#define TR_PLAY_HELLO                  "Âm thanh khởi động"
#define TR_PWR_ON_DELAY                "Độ trễ Pwr khi bật"
#define TR_PWR_OFF_DELAY               "Độ trễ khi tắt Pwr"
#define TR_PWR_AUTO_OFF                TR("Độ trễ Pwr tự động tắt","Tự động tắt nguồn")
#define TR_PWR_ON_OFF_HAPTIC           TR("Cảm ứng BẬT/TẮT nguồn","Cảm ứng BẬT/TẮT nguồn")
#define TR_THROTTLE_WARNING            TR("T-Warning", "Trạng thái ga")
#define TR_CUSTOM_THROTTLE_WARNING     TR("Cust-Pos", "Vị trí tùy chỉnh?")
#define TR_CUSTOM_THROTTLE_WARNING_VAL TR("Pos. %", "Vị trí %")
#define TR_SWITCHWARNING               TR("S-Cảnh báo", "Chuyển đổi vị trí")
#define TR_POTWARNINGSTATE             "Bình & thanh trượt"
#define TR_POTWARNING                  TR("Cảnh báo bình.", "Vị trí bình")
#define TR_TIMEZONE                    "Múi giờ"
#define TR_ADJUST_RTC                  "Điều chỉnh RTC"
#define TR_GPS                         "GPS"
#define TR_DEF_CHAN_ORD                TR("Thứ tự Def chan", "Thứ tự kênh mặc định")
#define TR_STICKS                      "Trục"
#define TR_POTS                        "Chậu"
#define TR_SWITCHES                    "Chuyển đổi"
#define TR_SWITCHES_DELAY              TR("Độ trễ phát", "Độ trễ phát (sw. mid pos)")
#define TR_SLAVE                       "Slave"
#define TR_MULTIPLIER                  "Hệ số nhân"
#define TR_CAL                         "Cal"
#define TR_CALIBRATION                 BUTTON("Hiệu chỉnh")
#define TR_VTRIM                       "Cắt - +"
#define TR_CALIB_DONE                  "Đã hoàn tất hiệu chỉnh"
#define TR_MENUTOSTART                 TR_ENTER " ĐỂ BẮT ĐẦU"
#define TR_MENUWHENDONE                TR_ENTER " KHI HOÀN THÀNH"
#define TR_AXISDIR                     "TRỤC TRỤC"
#define TR_MENUAXISDIR                 "[ENTER LONG] " TR_AXISDIR
#define TR_SETMIDPOINT                 TR_BW_COL(TR_SFC_AIR("THIẾT LẬP POTS MIDPOINT", TR("THIẾT LẬP ĐIỂM TRUNG TÂM TRỤC", "TRỤC TRUNG TÂM/TRỤC")), "TRỤC TRUNG TÂM/TRỤC")
#define TR_MOVESTICKSPOTS              TR_BW_COL(TR_SFC_AIR("DI CHUYỂN ST/TH/POTS/AXIS", "DI CHUYỂN AXIS/POTS"), "DI CHUYỂN AXIS/POTS")
#define TR_NODATA                      "KHÔNG CÓ DỮ LIỆU"
#define TR_US                          "chúng tôi"
#define TR_HZ                          "Hz"
#define TR_TMIXMAXMS                   "Tmix max"
#define TR_FREE_STACK                  "Ngăn xếp miễn phí"
#define TR_INT_GPS_LABEL               "Tập lệnh GPS"
#define TR_HEARTBEAT_LABEL             "Heartbeat"
#define TR_LUA_SCRIPTS_LABEL           "Lua nội bộ"
#define TR_FREE_MEM_LABEL              "Bản ghi nhớ miễn phí"
#define TR_DURATION_MS             TR("<D]","Thời lượng (ms): ")
#define TR_INTERVAL_MS             TR("[I]","Khoảng(ms): ")
#define TR_MEM_USED_SCRIPT         "Tập lệnh(B): "
#define TR_MEM_USED_WIDGET         "Widget(B): "
#define TR_MEM_USED_EXTRA          "Thêm(B): "
#define TR_STACK_MIX                   "Kết hợp: "
#define TR_STACK_AUDIO                 "Âm thanh: "
#define TR_GPS_FIX_YES                 "Sửa: Có"
#define TR_GPS_FIX_NO                  "Sửa: Không"
#define TR_GPS_SATS                    "Sats: "
#define TR_GPS_HDOP                    "Hdop: "
#define TR_STACK_MENU                  "Menu: "
#define TR_TIMER_LABEL                 "Bộ hẹn giờ"
#define TR_THROTTLE_PERCENT_LABEL      "Điều tiết %"
#define TR_BATT_LABEL                  "Pin"
#define TR_SESSION                     "Phiên"
#define TR_MENUTORESET                 TR_ENTER " để đặt lại"
#define TR_PPM_TRAINER                 "TR"
#define TR_CH                          "CH"
#define TR_MODEL                       "MÔ HÌNH"
#define TR_FM                          TR_SFC_AIR("DM", "FM")
#define TR_PRESS_ANY_KEY_TO_SKIP       "Nhấn phím bất kỳ để bỏ qua"
#define TR_THROTTLE_NOT_IDLE           "Ga không hoạt động"
#define TR_ALARMSDISABLED              "Đã tắt báo thức"
#define TR_PRESSANYKEY                 TR("\010Nhấn phím bất kỳ", "Nhấn phím bất kỳ")
#define TR_BAD_RADIO_DATA              "Dữ liệu radio bị thiếu hoặc xấu"
#define TR_RADIO_DATA_RECOVERED        TR3("Sử dụng dữ liệu radio dự phòng","Sử dụng cài đặt radio dự phòng","Cài đặt radio được khôi phục từ bản sao lưu")
#define TR_RADIO_DATA_UNRECOVERABLE    TR3("Cài đặt radio không hợp lệ","Cài đặt radio không hợp lệ", "Không thể đọc cài đặt radio hợp lệ")
#define TR_STORAGE_FORMAT              "Chuẩn bị lưu trữ"
#define TR_RADIO_SETUP                 "THIẾT LẬP RADIO"
#define TR_MENUVERSION                 "PHIÊN BẢN"
#define TR_MENU_RADIO_ANALOGS_CALIB    "CÁC ANALOG ĐƯỢC HIỆU CHỈNH"
#define TR_MENU_RADIO_ANALOGS_RAWLOWFPS "SỰ PHÂN TÍCH RAW (5 Hz)"
#define TR_MENU_FSWITCH                "CHUYỂN ĐỔI CÓ THỂ TÙY CHỈNH"
#define   TR_TRIMS2OFFSETS              TR_BW_COL("\006Trim => Subtrim", "Tinh chỉnh => Tinh chỉnh phụ")
#define TR_CHANNELS2FAILSAFE           "Kênh=>Failsafe"
#define TR_CHANNEL2FAILSAFE            "Kênh=>Failsafe"
#define TR_MENUMODELSEL                TR("MÔ HÌNH", "CHỌN MÔ HÌNH")
#define TR_MENU_MODEL_SETUP            TR("THIẾT LẬP", "THIẾT LẬP MÔ HÌNH")

#define TR_MENULOGICALSWITCH           "CHUYỂN ĐỔI LOGIC"
#define TR_MENUSTAT                    "THỐNG KÊ"
#define TR_MENUDEBUG                   "GỠ LỖI"
#define TR_MONITOR_CHANNELS            "KÊNH %d-%d"
#define TR_MONITOR_OUTPUT_DESC         "Đầu ra"
#define TR_MONITOR_MIXER_DESC          "Bộ trộn"
  #define TR_RECEIVER_NUM              TR("RxNum", "Số bộ thu")
  #define TR_RECEIVER                  "Bộ thu"
#define TR_MULTI_RFTUNE                TR("Điều chỉnh tần số", "Tần số RF. tinh chỉnh")
#define TR_MULTI_RFPOWER               "Nguồn RF"
#define TR_MULTI_WBUS                  "Đầu ra"
#define TR_MULTI_TELEMETRY             "Đo từ xa"
#define TR_MULTI_VIDFREQ               TR("Vid. tần số.", "Tần số video")
#define TR_RF_POWER                    "Nguồn RF"
#define TR_MULTI_FIXEDID               TR("FixedID", "ID cố định")
#define TR_MULTI_OPTION                TR("Tùy chọn", "Giá trị tùy chọn")
#define TR_MULTI_AUTOBIND              TR("Ràng buộc Ch.", "Ràng buộc trên kênh")
#define TR_DISABLE_CH_MAP              TR("Không có Ch. bản đồ", "Tắt Ch. bản đồ")
#define TR_DSMP_ENABLE_AETR            TR("Enb. AETR", "Bật AETR")
#define TR_DISABLE_TELEM               TR("Không có Telem", "Tắt tính năng đo từ xa")
#define TR_MULTI_LOWPOWER              TR("Nguồn điện thấp", "Chế độ năng lượng thấp")
#define TR_MULTI_LNA_DISABLE           "Tắt LNA"
#define TR_MODULE_TELEMETRY            TR("S.Port", "Liên kết S.Port")
#define TR_MODULE_TELEM_ON             TR("BẬT", "Đã bật")
#define TR_DISABLE_INTERNAL            TR("Tắt int.", "Tắt RF nội bộ")
#define TR_MODULE_NO_SERIAL_MODE       TR("!chế độ nối tiếp", "Không ở chế độ nối tiếp")
#define TR_MODULE_NO_INPUT             TR("Không có đầu vào", "Không có đầu vào nối tiếp")
#define TR_MODULE_NO_TELEMETRY         TR3("Không có phép đo từ xa", "Không có MULTI_TELEMETRY", "Không phát hiện thấy MULTI_TELEMETRY")
#define TR_MODULE_WAITFORBIND          "Liên kết để tải giao thức"
#define TR_MODULE_BINDING              TR("Liên kết...","Liên kết")
#define TR_MODULE_UPGRADE_ALERT        TR3("Upg. cần thiết", "Cần nâng cấp mô-đun", "Mô-đun\nCần nâng cấp")
#define TR_MODULE_UPGRADE              TR("Nâng cấp. khuyên", "Nên cập nhật mô-đun")
#define TR_REBIND                      "Yêu cầu đóng lại"
#define TR_REG_OK                      "Đăng ký được"
#define TR_BIND_OK                     "Liên kết thành công"
#define TR_BINDING_CH1_8_TELEM_ON      "Ch1-8 Telem ON"
#define TR_BINDING_CH1_8_TELEM_OFF     "Ch1-8 Telem OFF"
#define TR_BINDING_CH9_16_TELEM_ON     "Ch9-16 Telem ON"
#define TR_BINDING_CH9_16_TELEM_OFF    "Ch9-16 Telem TẮT"
#define TR_PROTOCOL_INVALID            TR("Prot. không hợp lệ", "Giao thức không hợp lệ")
#define TR_MODULE_STATUS               TR("Trạng thái", "Trạng thái mô-đun")
#define TR_MODULE_SYNC                 TR("Đồng bộ hóa", "Trạng thái đồng bộ hóa Proto")
#define TR_MULTI_SERVOFREQ             TR("Tốc độ servo", "Tốc độ cập nhật servo")
#define TR_MULTI_MAX_THROW             TR("Tối đa. Ném", "Bật tối đa. ném")
#define TR_MULTI_RFCHAN                TR("Kênh RF", "Chọn kênh RF")
#define TR_AFHDS3_RX_FREQ              TR("Tần số RX.", "Tần số RX")
#define TR_AFHDS3_ONE_TO_ONE_TELEMETRY TR("Unicast/Tel.", "Unicast/Telemetry")
#define TR_AFHDS3_ONE_TO_MANY          "Đa tuyến"
#define TR_AFHDS3_ACTUAL_POWER         TR("Đạo luật. pow", "Nguồn điện thực tế")
#define TR_AFHDS3_POWER_SOURCE         TR("Nguồn điện.", "Nguồn điện")
#define TR_IBUS2_SENSORS_MODE_ONLY     "Chỉ có thể đặt cảm biến ở chế độ iBUS2."
#define TR_GPS_COORDS_FORMAT           TR("GPS Phối hợp", "Định dạng tọa độ")
#define TR_VARIO                       TR("Vario", "Biến kế")
#define TR_PITCH_AT_ZERO               "Cao độ 0"
#define TR_PITCH_AT_MAX                "Cao độ tối đa"
#define TR_REPEAT_AT_ZERO              "Số 0 lặp lại"
#define TR_BATT_CALIB                  TR("Batt. calib", "Hiệu chỉnh pin")
#define TR_VOLTAGE                     TR("Điện áp", "Nguồn điện áp")
#define TR_SELECT_MODEL                "Chọn mô hình"
#define TR_SELECT_MODE                 "Chọn chế độ"
#define TR_CREATE_MODEL                "Tạo mô hình"
#define TR_FAVORITE_LABEL              "Yêu thích"
#define TR_MODELS_MOVED                "Đã chuyển các mô hình không sử dụng sang"
#define TR_NEW_MODEL                   "Mẫu mới"
#define TR_LABEL_MODEL                 "Gắn nhãn mô hình"
#define TR_MOVE_UP                     "Di chuyển lên"
#define TR_MOVE_DOWN                   "Di chuyển xuống"
#define TR_ENTER_LABEL                 "Nhập Nhãn"
#define TR_LABELS                      "Nhãn"
#define TR_ACTIVE                      "Đang hoạt động"
#define TR_NEW                         "Mới"
#define TR_NEW_LABEL                   "Nhãn mới"
#define TR_RENAME_LABEL                "Đổi tên nhãn"
#define TR_DELETE_LABEL                "Xóa nhãn"
#define TR_DUPLICATE_MODEL             "Sao chép mô hình"
#define TR_COPY_MODEL                  "Sao chép mô hình"
#define TR_MOVE_MODEL                  "Di chuyển mô hình"
#define TR_BACKUP_MODEL                "Sao lưu người mẫu"
#define TR_DELETE_MODEL                "Xóa mô hình"
#define TR_RESTORE_MODEL               "Khôi phục mô hình"
#define TR_DELETE_INPUT_LINE           "Xóa dòng đầu vào"
#define TR_DELETE_MIX_LINE             "Xóa dòng kết hợp"
#define TR_SDCARD_ERROR                TR("Lỗi SD", "SD lỗi thẻ")
#define TR_SDCARD                      "Thẻ SD"
#define TR_NO_FILES_ON_SD              "Không có tệp trên thẻ SD!"
#define TR_NO_SDCARD                   "Không có thẻ SD"
#define TR_WAITING_FOR_RX              "Đang chờ RX..."
#define TR_WAITING_FOR_TX              "Đang chờ TX..."
#define TR_WAITING_FOR_MODULE          TR("Đang chờ mô-đun", "Đang chờ mô-đun...")
#define TR_NO_TOOLS                    "Không có công cụ nào"
#define TR_NORMAL                      "Bình thường"
#define TR_NOT_INVERTED                "Chưa có"
#define TR_NOT_CONNECTED               TR("!Đã kết nối", "Chưa kết nối")
#define TR_CONNECTED                   "Đã kết nối"
#define TR_FLEX_915                    "Flex 915 MHz"
#define TR_FLEX_868                    "Flex 868 MHz"
#define TR_16CH_WITHOUT_TELEMETRY      TR("16CH không có telem.", "16CH không có đo từ xa")
#define TR_16CH_WITH_TELEMETRY         TR("16CH có telem.", "16CH có đo từ xa")
#define TR_EXT_ANTENNA                 "Ext. ăng-ten"
#define TR_PIN                         "Pin"
#define TR_UPDATE_RX_OPTIONS           "Cập nhật tùy chọn RX?"
#define TR_UPDATE_TX_OPTIONS           "Cập nhật tùy chọn TX?"
#define TR_MODULES_RX_VERSION          BUTTON("Mô-đun / phiên bản RX")
#define TR_SHOW_MIXER_MONITORS         "Hiển thị màn hình bộ trộn"
#define TR_MENU_MODULES_RX_VERSION     "MÔ-ĐUN / PHIÊN BẢN RX"
#define TR_MENU_FIRM_OPTIONS           "TÙY CHỌN PHẦN MỀM"
#define TR_IMU                        "IMU"
#define TR_STICKS_POTS_SLIDERS         "Trục/Chậu/Thanh trượt"
#define TR_RF_PROTOCOL                 "Giao thức RF"
#define TR_MODULE_OPTIONS              "Tùy chọn mô-đun"
#define TR_POWER                       "Nguồn"
#define TR_NO_TX_OPTIONS               "Không có tùy chọn TX"
#define TR_RTC_BATT                    "RTC Batt"
#define TR_POWER_METER_EXT             "Đồng hồ đo điện (EXT)"
#define TR_POWER_METER_INT             "Đồng hồ đo điện (INT)"
#define TR_SPECTRUM_ANALYSER_EXT       "Phổ (ngoài)"
#define TR_SPECTRUM_ANALYSER_INT       "Phổ (trong)"
#define TR_GHOST_MODULE_CONFIG         "Cấu hình mô-đun ma"
#define TR_GPS_MODEL_LOCATOR           "Bộ định vị mô hình GPS"
#define TR_REFRESH                     "Làm mới"
#define TR_SDCARD_FULL                 "Thẻ SD đầy"
#define TR_SDCARD_FULL_EXT              TR_BW_COL(TR_SDCARD_FULL "\036Nhật ký và ảnh chụp màn hình" LCDW_128_LINEBREAK "đã tắt", TR_SDCARD_FULL "\nNhật ký và ảnh chụp màn hình đã bị tắt")
#define TR_NEEDS_FILE                  "CẦN TẬP TIN"
#define TR_EXT_MULTI_SPEC              "opentx-inv"
#define TR_INT_MULTI_SPEC              "stm-opentx-noinv"
#define TR_INCOMPATIBLE                "Không tương thích"
#define TR_WARNING                     "CẢNH BÁO"
#define TR_STORAGE_WARNING             "BỘ LƯU TRỮ"
#define TR_THROTTLE_UPPERCASE          "THROTTLE"
#define TR_ALARMSWARN                  "CẢNH BÁO"
#define TR_SWITCHWARN                  TR("CHUYỂN ĐỔI", "KIỂM SOÁT")
#define TR_FAILSAFEWARN                "AN TOÀN"
#define TR_TEST_WARNING                TR("ĐANG KIỂM TRA", "XÂY DỰNG KIỂM TRA")
#define TR_TEST_NOTSAFE                "Chỉ sử dụng cho các cuộc kiểm tra"
#define TR_WARN_RTC_BATTERY_LOW        "RTC Pin yếu"
#define TR_WARN_MULTI_LOWPOWER         "Chế độ năng lượng thấp"
#define TR_BATTERY                     "PIN"
#define TR_WRONG_PCBREV                "Đã phát hiện sai PCB"
#define TR_EMERGENCY_MODE              "CHẾ ĐỘ KHẨN CẤP"
#define TR_NO_FAILSAFE                 "Failsafe chưa được đặt"
#define TR_KEYSTUCK                    "Khóa bị kẹt"
#define TR_VOLUME                      "Âm lượng"
#define TR_BRIGHTNESS                  "Độ sáng"
#define TR_CONTROL                     "Kiểm soát"
#define TR_SF_OVERRIDDEN               "Bị ghi đè bởi SF/GF"
#define TR_TTL_WARNING                 "Cảnh báo: Không vượt quá 3,3V trên chân TX/RX!"
#define TR_FUNC                        "Chức năng"
#define TR_V1                          "V1"
#define TR_V2                          "V2"
#define TR_DURATION                    "Thời lượng"
#define TR_DELAY                       "Độ trễ"
#define TR_NO_SOUNDS_ON_SD             "Không có âm thanh trên SD"
#define TR_NO_MODELS_ON_SD             "Không có mô hình nào trên SD"
#define TR_NO_BITMAPS_ON_SD            "Không có mô hình nào trên SD"
#define TR_NO_SCRIPTS_ON_SD            "Không có tập lệnh trên SD"
#define TR_SCRIPT_SYNTAX_ERROR         TR("Lỗi cú pháp", "Lỗi cú pháp tập lệnh")
#define TR_SCRIPT_PANIC                "Tập lệnh hoảng loạn"
#define TR_SCRIPT_ERROR                "Lỗi không xác định"
#define TR_PLAY_FILE                   "Phát"
#define TR_DELETE_FILE                 "Xóa"
#define TR_COPY_FILE                   "Sao chép"
#define TR_RENAME_FILE                 "Đổi tên"
#define TR_ASSIGN_BITMAP               "Gán bitmap"
#define TR_EXECUTE_FILE                "Thực thi"
#define TR_REMOVED                     " đã xóa"
#define TR_SD_INFO                     "Thông tin"
#define TR_NA                          "Không áp dụng"
#define TR_TIME                        "Thời gian"
#define TR_BAUDRATE                    "Baudrate"
#define TR_CRSF_ARMING_MODE            "Sử dụng cánh tay"
#define TR_CRSF_ARMING_MODES           TR_CH"5", TR_SWITCH
#define TR_SAMPLE_MODE                 TR("Lấy mẫu","Chế độ mẫu")
#define TR_SAMPLE_MODES_1              "Bình thường"
#define TR_SAMPLE_MODES_2              "OneBit"
#define TR_LOADING                     "Đang tải..."
#define TR_DELETE_THEME                "Xóa chủ đề?"
#define TR_SAVE_THEME                  "Lưu chủ đề?"
#define TR_EDIT_COLOR                  "Chỉnh sửa màu"
#define TR_NO_THEME_IMAGE              "Không có hình ảnh chủ đề"
#define TR_BACKLIGHT_TIMER             "Hết thời gian không hoạt động"

#define TR_MODEL_QUICK_SELECT        "Chọn nhanh mô hình"
#define TR_LABELS_SELECT             "Chọn nhãn"
#define TR_LABELS_MATCH              "Đối sánh nhãn"
#define TR_FAV_MATCH                 "Đối sánh mục yêu thích"
#define TR_LABELS_SELECT_MODE_1      "Đa lựa chọn"
#define TR_LABELS_SELECT_MODE_2      "Chọn một lần"
#define TR_LABELS_MATCH_MODE_1       "Khớp tất cả"
#define TR_LABELS_MATCH_MODE_2       "Khớp bất kỳ"
#define TR_FAV_MATCH_MODE_1          "Phải khớp"
#define TR_FAV_MATCH_MODE_2          "Khớp tùy chọn"

#define TR_NO_TEMPLATES                "Không tìm thấy mẫu mô hình nào trong thư mục này"
#define TR_SAVE_TEMPLATE               "Lưu dưới dạng mẫu"
#define TR_BLANK_MODEL                 "Mô hình trống"
#define TR_BLANK_MODEL_INFO            "Tạo một khoảng trống mô hình"
#define TR_FILE_EXISTS                 "TẬP TIN ĐÃ TỒN TẠI"
#define TR_ASK_OVERWRITE               "Bạn có muốn ghi đè không?"

#define TR_BLUETOOTH                   "Bluetooth"
#define TR_BLUETOOTH_INIT              "Bắt đầu"
#define TR_BLUETOOTH_DIST_ADDR         "Địa chỉ cục bộ"
#define TR_BLUETOOTH_LOCAL_ADDR        "Địa chỉ cục bộ"
#define TR_BLUETOOTH_PIN_CODE          "Mã PIN"
#define TR_BLUETOOTH_NODEVICES         "Không tìm thấy thiết bị nào"
#define TR_BLUETOOTH_SCANNING          "Đang quét..."
#define TR_BLUETOOTH_MODES_1           "---"
#define TR_BLUETOOTH_MODES_2           "Đo từ xa"
#define TR_BLUETOOTH_MODES_3           "Huấn luyện"
#define TR_BLUETOOTH_MODES_4           "Đã bật"

#define TR_SD_INFO_TITLE               "SD THÔNG TIN"
#define TR_SD_SECTORS                  "Ngành:"
#define TR_SD_SIZE                     "Quy mô:"
#define TR_TYPE                        "Loại"
#define TR_GVARS                       "GVARS"
#define TR_GLOBAL_VAR                  "Biến toàn cục"
#define TR_OWN                         "Sở hữu"
#define TR_DATE                        "Ngày"
#define TR_MONTHS_1                    "Tháng 1"
#define TR_MONTHS_2                    "Tháng 2"
#define TR_MONTHS_3                    "Tháng 3"
#define TR_MONTHS_4                    "Tháng 4"
#define TR_MONTHS_5                    "Tháng 5"
#define TR_MONTHS_6                    "Tháng 6"
#define TR_MONTHS_7                    "Tháng 7"
#define TR_MONTHS_8                    "Tháng 8"
#define TR_MONTHS_9                    "Tháng 9"
#define TR_MONTHS_10                   "Tháng 10"
#define TR_MONTHS_11                   "Tháng 11"
#define TR_MONTHS_12                   "Tháng 12"
#define TR_ROTARY_ENCODER              "R.E."
#define TR_ROTARY_ENC_MODE             TR("Chế độ RotEnc","Chế độ bộ mã hóa quay")
#define TR_CHANNELS_MONITOR            "Giám sát KÊNH"
#define TR_MIXERS_MONITOR              "GIÁM SÁT BỘ TRỘN"
#define TR_PATH_TOO_LONG               "Đường dẫn quá dài"
#define TR_VIEW_TEXT                   "Xem văn bản"
#define TR_FLASH_BOOTLOADER            "Bộ tải khởi động flash"
#define TR_FLASH_DEVICE                TR("Thiết bị flash","Thiết bị flash")
#define TR_FLASH_EXTERNAL_DEVICE       TR("Flash S.Port", "Thiết bị Flash S.Port")
#define TR_FLASH_RECEIVER_BY_EXTERNAL_MODULE_OTA "Flash RX by ext. OTA"
#define TR_FLASH_RECEIVER_BY_INTERNAL_MODULE_OTA "Flash RX của int. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_EXTERNAL_MODULE_OTA "Flash FC theo máy lẻ. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_INTERNAL_MODULE_OTA "Flash FC bởi int. OTA"
#define TR_FLASH_BLUETOOTH_MODULE      TR("Mô-đun Flash BT", "Mô-đun Flash Bluetooth")
#define TR_DEVICE_NO_RESPONSE          TR("Thiết bị không phản hồi", "Thiết bị không phản hồi")
#define TR_DEVICE_FILE_ERROR           TR("Vấn đề tệp thiết bị.", "Vấn đề tệp thiết bị.")
#define TR_DEVICE_DATA_REFUSED         TR("Dữ liệu thiết bị bị từ chối", "Dữ liệu thiết bị bị từ chối")
#define TR_DEVICE_WRONG_REQUEST        TR("Sự cố truy cập thiết bị", "Sự cố truy cập thiết bị")
#define TR_DEVICE_FILE_REJECTED        TR("Tệp thiết bị bị từ chối", "Tệp thiết bị bị từ chối")
#define TR_DEVICE_FILE_WRONG_SIG       TR("Ký hiệu tệp thiết bị.", "Ký hiệu tệp thiết bị.")
#define TR_CURRENT_VERSION             TR("Phiên bản hiện tại: ", "Phiên bản hiện tại: ")
#define TR_FLASH_INTERNAL_MODULE       TR("Flash int. mô-đun", "Mô-đun flash nội bộ")
#define TR_FLASH_INTERNAL_MULTI        TR("Flash Int. Đa", "Flash nội bộ đa")
#define TR_FLASH_EXTERNAL_MODULE       TR("Flash ext. mô-đun", "Mô-đun flash bên ngoài")
#define TR_FLASH_EXTERNAL_MULTI        TR("Flash Ext. Đa", "Flash ngoài đa")
#define TR_FLASH_EXTERNAL_ELRS         TR("Flash Ext. ELRS", "Flash ELRS bên ngoài")
#define TR_FIRMWARE_UPDATE_ERROR       TR("Lỗi cập nhật FW", "Lỗi cập nhật chương trình cơ sở")
#define TR_FIRMWARE_UPDATE_SUCCESS     "Flash thành công"
#define TR_WRITING                     "Đang ghi..."
#define TR_INTERNALRF                  "RF nội bộ"
#define TR_INTERNAL_MODULE             TR("Int. mô-đun", "Mô-đun nội bộ")
#define TR_EXTERNAL_MODULE             TR("Ext. mô-đun", "Mô-đun bên ngoài")
#define TR_EDGETX_UPGRADE_REQUIRED     "Yêu cầu nâng cấp Hệ Thống Rồng Vàng"
#define TR_TELEMETRY_DISABLED          "Điện thoại. đã tắt"
#define TR_MORE_OPTIONS_AVAILABLE      "Có nhiều tùy chọn hơn"
#define TR_EXTERNALRF                  "RF bên ngoài"
#define TR_FAILSAFE                    TR("An toàn", "Chế độ an toàn")
#define TR_FAILSAFESET                 "CÀI ĐẶT AN TOÀN"
#define TR_REG_ID                      "Reg. ID"
#define TR_OWNER_ID                    "ID chủ sở hữu"
#define TR_HOLD                        "Giữ"
#define TR_HOLD_UPPERCASE              "GIỮ"
#define TR_NONE                        "Không"
#define TR_NONE_UPPERCASE              "KHÔNG"
#define TR_MENUSENSOR                  "CẢM BIẾN"
#define TR_POWERMETER_PEAK             "Đỉnh"
#define TR_POWERMETER_POWER            "Nguồn"
#define TR_POWERMETER_ATTN             "Attn"
#define TR_POWERMETER_FREQ             "Tần số."
#define TR_MENUTOOLS                   "CÔNG CỤ"
#define TR_MIC_RECORDER                "Máy ghi mic"
#define TR_PUSH_TO_RECORD              "Đẩy để ghi"
#define TR_RECORD                      "Ghi"
#define TR_STOP                        "Dừng"
#define TR_REC                         "GHI"
#define TR_STARTING_IN                 "Bắt đầu trong"
#define TR_GET_READY                   "Chuẩn bị sẵn sàng..."
#define TR_SAVED                       "Đã lưu:"
#define TR_SAVE_AS                     "Lưu dưới dạng"
#define TR_AUTO_TRIM                   "Tự động cắt bớt"
#define TR_TRIM_START                  "Cắt bắt đầu"
#define TR_TRIM_END                    "Cắt bỏ phần cuối"
#define TR_OPEN_ERROR                  "Lỗi mở"
#define TR_TURN_OFF_RECEIVER           "Tắt đầu thu"
#define TR_STOPPING                    "Đang dừng..."
#define TR_MENU_SPECTRUM_ANALYSER      "PHÂN TÍCH SPECTRUM"
#define TR_MENU_POWER_METER            "ĐỒNG HỒ ĐO CÔNG SUẤT"
#define TR_SENSOR                      "CẢM BIẾN"
#define TR_COUNTRY_CODE                "Mã quốc gia"
#define TR_USBMODE                     "Chế độ USB"
#define TR_USB_CHARGE                  "Sạc khi bật radio"
#define TR_JACK_MODE                   "Chế độ giắc cắm"
#define TR_VOICE_LANGUAGE              "Ngôn ngữ giọng nói"
#define TR_TEXT_LANGUAGE               "Ngôn ngữ hiển thị"
#define TR_UNITS_SYSTEM                "Hệ đơn vị"
#define TR_UNITS_PPM                   "PPM Đơn vị"
#define TR_EDIT                        "Chỉnh sửa"
#define TR_INSERT_BEFORE               "Chèn trước"
#define TR_INSERT_AFTER                "Chèn sau"
#define TR_COPY                        "Sao chép"
#define TR_MOVE                        "Di chuyển"
#define TR_PASTE                       "Dán"
#define TR_PASTE_AFTER                 "Dán sau"
#define TR_PASTE_BEFORE                "Dán trước"
#define TR_DELETE                      "Xóa"
#define TR_INSERT                      "Chèn"
#define TR_RESET_SESSION               "Đặt lại phiên"
#define TR_RESET_TIMER1                "Đặt lại hẹn giờ1"
#define TR_RESET_TIMER2                "Đặt lại bộ đếm thời gian2"
#define TR_RESET_TIMER3                "Đặt lại bộ đếm thời gian3"
#define TR_RESET_TELEMETRY             "Đặt lại phép đo từ xa"
#define TR_STATISTICS                  "Thống kê"
#define TR_ABOUT_US                    "Giới thiệu về"
#define TR_USB_JOYSTICK                "USB Cần điều khiển (HID)"
#define TR_USB_MASS_STORAGE            "Bộ nhớ USB (SD)"
#define TR_USB_SERIAL                  "USB Nối tiếp (VCP)"
#define TR_AND_SWITCH                  "VÀ chuyển đổi"
#define TR_SF                          "SF"
#define TR_GF                          "GF"
#define TR_ANADIAGS_CALIB              "Các chất tương tự thô đã được hiệu chỉnh"
#define TR_ANADIAGS_FILTRAWDEV         "Các chất tương tự thô đã được lọc có độ lệch"
#define TR_ANADIAGS_UNFILTRAW          "Các chất tương tự thô chưa được lọc"
#define TR_ANADIAGS_MINMAX             "Tối thiểu, tối đa. và phạm vi"
#define TR_ANADIAGS_MOVE               "Di chuyển các chất tương tự đến mức tối đa!"
#define TR_BYTES                       "byte"
#define TR_MODULE_BIND                 BUTTON(TR("Bnd", "Ràng buộc"))
#define TR_MODULE_UNBIND               BUTTON("Hủy liên kết")
#define TR_POWERMETER_ATTN_NEEDED     "Cần có bộ suy giảm"
#define TR_PXX2_SELECT_RX              "Chọn RX"
#define TR_PXX2_DEFAULT                "<default>"
#define TR_BT_SELECT_DEVICE            "Chọn thiết bị"
#define TR_DISCOVER                    BUTTON("Khám phá")
#define TR_BUTTON_INIT                 BUTTON("Bắt đầu")
#define TR_WAITING                     "Đang chờ..."
#define TR_RECEIVER_DELETE             "Xóa bộ thu?"
#define TR_RECEIVER_RESET              "Đặt lại bộ thu?"
#define TR_SHARE                       "Chia sẻ"
#define TR_BIND                        "Ràng buộc"
#define TR_PAIRING                     "Ghép nối"
#define TR_BTAUDIO                     "BT Audio"
#define TR_REGISTER                    BUTTON(TR("Đăng ký", "Đăng ký"))
#define TR_MODULE_RANGE                BUTTON(TR("Rng", "Phạm vi"))
#define TR_RANGE_TEST                  "Kiểm tra phạm vi"
#define TR_RECEIVER_OPTIONS            TR("TÙY CHỌN RX", "TÙY CHỌN BỘ THU")
#define TR_RESET_BTN                   BUTTON("Đặt lại")
#define TR_KEYS_BTN                    BUTTON("Phím")
#define TR_ANALOGS_BTN                 BUTTON(TR("Anas", "Tương tự"))
#define TR_FS_BTN                      BUTTON(TR("Sw tùy chỉnh", TR_FUNCTION_SWITCHES))
#define TR_SET                         BUTTON("Đặt")
#define TR_TRAINER                     "Huấn luyện"
#define TR_CHANS                       "Chans"
#define TR_ANTENNAPROBLEM              "Sự cố ăng-ten TX!"
#define TR_MODELIDUSED                 "ID được sử dụng trong:"
#define TR_MODELIDUNIQUE               "ID là duy nhất"
#define TR_MODULE                      "Mô-đun"
#define TR_RX_NAME                     "Tên Rx"
#define TR_TELEMETRY_TYPE              TR("Loại", "Loại đo từ xa")
#define TR_TELEMETRY_SENSORS           "Cảm biến"
#define TR_VALUE                       "Giá trị"
#define TR_PERIOD                      "Chu kỳ"
#define TR_INTERVAL                    "Khoảng thời gian"
#define TR_REPEAT                      "Lặp lại"
#define TR_ENABLE                      "Bật"
#define TR_DISABLE                     "Tắt"
#define TR_TOPLCDTIMER                 "Bộ hẹn giờ LCD trên cùng"
#define TR_UNIT                        "Đơn vị"
#define TR_TELEMETRY_NEWSENSOR         "Thêm mới"
#define TR_CHANNELRANGE                TR("Ch. Phạm vi", "Phạm vi kênh")
#define TR_ANTENNACONFIRM1             "ĂNG-TEN NGOÀI"
#define TR_ANTENNA_MODES_1           "Nội bộ"
#define TR_ANTENNA_MODES_2           "Hỏi"
#define TR_ANTENNA_MODES_3           "Mỗi mô hình"
#define TR_ANTENNA_MODES_4           "Nội bộ + Bên ngoài"
#define TR_ANTENNA_MODES_5           "Bên ngoài"
#define TR_USE_INTERNAL_ANTENNA        TR("Sử dụng int. ăng-ten", "Sử dụng ăng-ten bên trong")
#define TR_USE_EXTERNAL_ANTENNA        TR("Sử dụng ext. ăng-ten", "Sử dụng ăng-ten bên ngoài")
#define TR_ANTENNACONFIRM2             TR("Kiểm tra ăng-ten", "Đảm bảo ăng-ten đã được lắp đặt!")
#define TR_MODULE_PROTOCOL_FLEX_WARN_LINE1   "Yêu cầu FLEX non"
#define TR_MODULE_PROTOCOL_FCC_WARN_LINE1    "Yêu cầu FCC"
#define TR_MODULE_PROTOCOL_EU_WARN_LINE1     "Yêu cầu chương trình cơ sở được EU"
#define TR_MODULE_PROTOCOL_WARN_LINE2        "chứng nhận"
#define TR_LOWALARM                    "Cảnh báo mức thấp"
#define TR_CRITICALALARM               "Cảnh báo nghiêm trọng"
#define TR_DISABLE_ALARM               TR("Tắt cảnh báo", "Tắt cảnh báo đo từ xa")
#define TR_POPUP                       "Cửa sổ bật lên"
#define TR_MIN                         "Tối thiểu"
#define TR_MAX                         "Tối đa"
#define TR_CURVE_PRESET                "Đặt sẵn..."
#define TR_PRESET                      "Đặt trước"
#define TR_MIRROR                      "Gương"
#define TR_CLEAR                       "Xóa"
#define TR_CLEAR_BTN                   BUTTON("Xóa")
#define TR_RESET                       "Đặt lại"
#define TR_RESET_SUBMENU               "Đặt lại..."
#define TR_COUNT                       "Đếm"
#define TR_PT                          "pt"
#define TR_PTS                         "pts"
#define TR_SMOOTH                      "Mượt mà"
#define TR_COPY_STICKS_TO_OFS          TR("Cpy Stick->subtrim", "Sao chép trục sang subtrim")
#define TR_COPY_MIN_MAX_TO_OUTPUTS     TR("Sao chép tối thiểu/tối đa cho tất cả",  "Sao chép min/max/center sang tất cả đầu ra")
#define TR_COPY_TRIMS_TO_OFS           TR("Cpy Trim->subtrim", "Sao chép các phần cắt sang subtrim")
#define TR_INCDEC                      "Tăng/Giảm"
#define TR_GLOBALVAR                   "Biến toàn cục"
#define TR_MIXSOURCE                   "Nguồn (%)"
#define TR_MIXSOURCERAW                "Nguồn (giá trị)"
#define TR_CONSTANT                    "Liên tục"
#define TR_PREFLIGHT_POTSLIDER_CHECK_1 "TẮT"
#define TR_PREFLIGHT_POTSLIDER_CHECK_2 "BẬT"
#define TR_PREFLIGHT_POTSLIDER_CHECK_3 "TỰ ĐỘNG"
#define TR_PREFLIGHT                   "Kiểm tra trước khi bắt đầu"
#define TR_CHECKLIST                   TR("Danh sách kiểm tra", "Hiển thị danh sách kiểm tra")
#define TR_CHECKLIST_INTERACTIVE       TR3("C-Interact", "Tương tác. danh sách kiểm tra", "Danh sách kiểm tra tương tác")
#define TR_AUX_SERIAL_MODE             "Cổng nối tiếp"
#define TR_AUX_SERIAL_PORT_POWER       "Nguồn cổng"
#define TR_SCRIPT                      "Kịch bản"
#define TR_INPUTS                      "Đầu vào"
#define TR_OUTPUTS                     "Đầu ra"
#define TR_TOO_MANY_LUA_SCRIPTS        "Quá nhiều tập lệnh Lua!"
#define TR_SPORT_UPDATE_POWER_MODE     "SP Power"
#define TR_SPORT_UPDATE_POWER_MODES_1  "TỰ ĐỘNG"
#define TR_SPORT_UPDATE_POWER_MODES_2  "BẬT"
#define TR_NO_TELEMETRY_SCREENS        "Không có màn hình đo từ xa"
#define TR_TOUCH_PANEL                 "Bảng cảm ứng:"
#define TR_FILE_SIZE                   "Kích thước tệp"
#define TR_FILE_OPEN                   "Vẫn mở?"

// Horus and Taranis column headers
#define TR_PHASES_HEADERS_NAME         "Tên"
#define TR_PHASES_HEADERS_SW           "Công tắc"
#define TR_PHASES_HEADERS_RUD_TRIM     "Cắt bánh lái"
#define TR_PHASES_HEADERS_ELE_TRIM     "Cắt thang máy"
#define TR_PHASES_HEADERS_THT_TRIM     "Cắt ga"
#define TR_PHASES_HEADERS_AIL_TRIM     "Cắt cánh lái"
#define TR_PHASES_HEADERS_CH5_TRIM     "Cắt 5"
#define TR_PHASES_HEADERS_CH6_TRIM     "Cắt 6"
#define TR_PHASES_HEADERS_FAD_IN       "Làm mờ dần"
#define TR_PHASES_HEADERS_FAD_OUT      "Làm mờ dần"

#define TR_LIMITS_HEADERS_NAME         "Tên"
#define TR_LIMITS_HEADERS_SUBTRIM      "Subtrim"
#define TR_LIMITS_HEADERS_MIN          "Tối thiểu"
#define TR_LIMITS_HEADERS_MAX          "Tối đa"
#define TR_LIMITS_HEADERS_DIRECTION    "Chỉ đạo"
#define TR_LIMITS_HEADERS_CURVE        "Đường cong"
#define TR_LIMITS_HEADERS_PPMCENTER    "PPM Trung tâm"
#define TR_LIMITS_HEADERS_SUBTRIMMODE  "Chế độ subtrim"
#define TR_INVERTED                    "Đảo ngược"

// Horus layouts and widgets
#define TR_FIRST_CHANNEL             "Kênh đầu tiên"
#define TR_LAST_CHANNEL              "Kênh cuối cùng"
#define TR_FILL_BACKGROUND           "Điền vào nền?"
#define TR_BG_COLOR                  "Màu BG"
#define TR_SLIDERS                   "Thanh trượt"
#define TR_FLIGHT_MODE               "Chế độ bay"
#define TR_TIMER_SOURCE              "Nguồn hẹn giờ"
#define TR_SIZE                      "Kích thước"
#define TR_SHADOW                    "Bóng"
#define TR_ALIGNMENT                 "Căn chỉnh"
#define TR_ALIGN_LABEL               "Căn chỉnh nhãn"
#define TR_ALIGN_VALUE               "Căn chỉnh giá trị"
#define TR_ALIGN_OPTS_1              "Trái"
#define TR_ALIGN_OPTS_2              "Trung tâm"
#define TR_ALIGN_OPTS_3              "Phải"
#define TR_TEXT                      "Văn bản"
#define TR_COLOR                     "Màu sắc"
#define TR_PANEL1_BACKGROUND         "Nền bảng điều khiển1"
#define TR_PANEL2_BACKGROUND         "Nền bảng 2"
#define TR_PANEL_BACKGROUND          "Nền"
#define TR_PANEL_COLOR               " Màu sắc"
#define TR_WIDGET_GAUGE              "Thước đo"
#define TR_WIDGET_MODELBMP           "Thông tin mẫu"
#define TR_WIDGET_OUTPUTS            "Đầu ra"
#define TR_WIDGET_TEXT               "Văn bản"
#define TR_WIDGET_TIMER              "Bộ hẹn giờ"
#define TR_WIDGET_VALUE              "Giá trị"

// About screen
#define TR_ABOUTUS                     TR(" GIỚI THIỆU VỀ ", " GIỚI THIỆU")

#define TR_CHR_INPUT                   "I"   // Values between A-I will work

#define TR_BEEP_VOLUME                 "Âm lượng bíp"
#define TR_WAV_VOLUME                  "Âm lượng sóng"
#define TR_BG_VOLUME                   TR("Âm lượng Bg", "Âm lượng nền")

#define TR_TOP_BAR                     "Thanh trên cùng"
#define TR_FLASH_ERASE                 "Xóa flash..."
#define TR_FLASH_WRITE                 "Ghi flash..."
#define TR_OTA_UPDATE                  "Cập nhật OTA..."
#define TR_MODULE_RESET                "Đặt lại mô-đun..."
#define TR_UNSUPPORTED_RX              "RX không được hỗ trợ"
#define TR_OTA_UPDATE_ERROR            "Lỗi cập nhật OTA"
#define TR_DEVICE_RESET                "Đặt lại thiết bị..."
#define TR_ALTITUDE                    "Độ cao"
#define TR_SCALE                       "Tỷ lệ"
#define TR_VIEW_CHANNELS               "Xem kênh"
#define TR_VIEW_NOTES                  "Xem ghi chú"
#define TR_ID                          "ID"
#define TR_PRECISION                   "Độ chính xác"
#define TR_RATIO                       "Tỷ lệ"
#define TR_FORMULA                     "Công thức"
#define TR_CELLINDEX                   "Chỉ mục ô"
#define TR_LOGS                        "Nhật ký"
#define TR_OPTIONS                     "Tùy chọn"
#define TR_FIRMWARE_OPTIONS            BUTTON("Tùy chọn chương trình cơ sở")

#define TR_ALTSENSOR                   "Cảm biến Alt"
#define TR_CELLSENSOR                  "Cảm biến di động"
#define TR_GPSSENSOR                   "Cảm biến GPS"
#define TR_GYRO                        "Con quay hồi chuyển"
#define TR_CURRENTSENSOR               "Cảm biến"
#define TR_AUTOOFFSET                  "Tự động bù trừ"
#define TR_ONLYPOSITIVE                "Dương"
#define TR_FILTER                      "Bộ lọc"
#define TR_TELEMETRYFULL               TR("Tất cả các vị trí đã đầy!", "Tất cả các vị trí đo từ xa đã đầy!")
#define TR_IGNORE_INSTANCE             TR("Không có.", "Bỏ qua các phiên bản")
#define TR_SHOW_INSTANCE_ID            "Hiển thị ID phiên bản"
#define TR_DISCOVER_SENSORS            "Khám phá mới"
#define TR_STOP_DISCOVER_SENSORS       "Dừng"
#define TR_DELETE_ALL_SENSORS          "Xóa tất cả"
#define TR_CONFIRMDELETE               "Thực sự " LCDW_128_LINEBREAK "xóa tất cả ?"
#define TR_SELECT_WIDGET               "Chọn tiện ích"
#define TR_WIDGET_FULLSCREEN           "Toàn màn hình"
#define TR_REMOVE_WIDGET               "Xóa tiện ích"
#define TR_WIDGET_SETTINGS             "Cài đặt tiện ích"
#define TR_REMOVE_SCREEN               "Xóa màn hình"
#define TR_SETUP_WIDGETS               "Thiết lập tiện ích"
#define TR_THEME                       "Chủ đề"
#define TR_LAYOUT                      "Bố cục"
#define TR_TEXT_COLOR                  "Màu văn bản"
#define TR_MENU_INPUTS                 CHAR_INPUT "Đầu vào"
#define TR_MENU_LUA                    CHAR_LUA "Lua nội bộ"
#define TR_MENU_STICKS                 CHAR_STICK "Trục"
#define TR_MENU_POTS                   CHAR_POT "Chậu"
#define TR_MENU_MIN                    CHAR_FUNCTION "MIN"
#define TR_MENU_MAX                    CHAR_FUNCTION "MAX"
#define TR_MENU_HELI                   CHAR_CYC "Chu kỳ"
#define TR_MENU_TRIMS                  CHAR_TRIM "Tinh chỉnh"
#define TR_MENU_SWITCHES               CHAR_SWITCH "Chuyển đổi"
#define TR_MENU_LOGICAL_SWITCHES       CHAR_SWITCH "Công tắc logic"
#define TR_MENU_TRAINER                CHAR_TRAINER "Huấn luyện"
#define TR_MENU_CHANNELS               CHAR_CHANNEL "Kênh"
#define TR_MENU_GVARS                  CHAR_SLIDER "GVars"
#define TR_MENU_TELEMETRY              CHAR_TELEMETRY "Đo từ xa"
#define TR_MENU_DISPLAY                "HIỂN THỊ"
#define TR_MENU_OTHER                  "Khác"
#define TR_MENU_INVERT                 "Đảo ngược"
#define TR_AUDIO_MUTE                  TR("Tắt âm thanh","Tắt tiếng nếu không có âm thanh")
#define TR_PWM_OUTPUT                  "đầu ra PWM"
#define TR_JITTER_FILTER               "Bộ lọc ADC"
#define TR_DEAD_ZONE                   "Vùng chết"
#define TR_RTC_CHECK                   TR("Kiểm tra RTC", "Kiểm tra điện áp RTC")
#define TR_AUTH_FAILURE                "Lỗi xác thực"
#define TR_RACING_MODE                 "Chế độ đua"

#define TR_USE_THEME_COLOR              "Sử dụng màu chủ đề"

#define TR_ADD_ALL_TRIMS_TO_SUBTRIMS    "Thêm tất cả các phần cắt vào phần phụ"
#define TR_DUPLICATE                    "Sao chép"
#define TR_ACTIVATE                     "Đặt hoạt động"
#define TR_COLOR_PICKER                 "Bộ chọn màu"
#define TR_FIXED                        "Đã sửa"
#define TR_EDIT_THEME_DETAILS           "Chỉnh sửa chi tiết chủ đề"
#define TR_THEME_COLOR_PRIMARY1        "PRIMARY1"
#define TR_THEME_COLOR_PRIMARY2        "PRIMARY2"
#define TR_THEME_COLOR_PRIMARY3        "PRIMARY3"
#define TR_THEME_COLOR_SECONDARY1      "THỨ HAI1"
#define TR_THEME_COLOR_SECONDARY2      "THỨ HAI2"
#define TR_THEME_COLOR_SECONDARY3      "THỨ HAI3"
#define TR_THEME_COLOR_FOCUS           "TẬP TRUNG"
#define TR_THEME_COLOR_EDIT            "CHỈNH SỬA"
#define TR_THEME_COLOR_ACTIVE          "HOẠT ĐỘNG"
#define TR_THEME_COLOR_WARNING         "CẢNH BÁO"
#define TR_THEME_COLOR_DISABLED        "BỊ TẮT"
#define TR_THEME_COLOR_QM_BG           "Menu nhanh BG"
#define TR_THEME_COLOR_QM_FG           "Menu nhanh FG"
#define TR_THEME_COLOR_CUSTOM          "TÙY CHỈNH"
#define TR_THEME_CHECKBOX              "Hộp kiểm"
#define TR_THEME_ACTIVE                "Đang hoạt động"
#define TR_THEME_REGULAR               "Thông thường"
#define TR_THEME_WARNING               "Cảnh báo"
#define TR_THEME_DISABLED              "Đã tắt"
#define TR_THEME_EDIT                  "Chỉnh sửa"
#define TR_THEME_FOCUS                 "Tiêu điểm"
#define TR_AUTHOR                       "Tác giả"
#define TR_DESCRIPTION                  "Mô tả"
#define TR_SAVE                         "Lưu"
#define TR_CANCEL                       "Hủy"
#define TR_EDIT_THEME                   "CHỈNH SỬA CHỦ ĐỀ"
#define TR_DETAILS                      "Chi tiết"

// Voice in native language
#define TR_VOICE_ENGLISH                "Tiếng Anh"
#define TR_VOICE_CHINESE                "Tiếng Trung"
#define TR_VOICE_CZECH                  "Tiếng Séc"
#define TR_VOICE_DANISH                 "Tiếng Đan Mạch"
#define TR_VOICE_DEUTSCH                "Tiếng Đức"
#define TR_VOICE_DUTCH                  "Tiếng Hà Lan"
#define TR_VOICE_ESPANOL                "Tiếng Tây Ban Nhà"
#define TR_VOICE_FINNISH                "Tiếng Phần Lan"
#define TR_VOICE_FRANCAIS               "Tiếng Pháp"
#define TR_VOICE_HUNGARIAN              "Tiếng Hungary"
#define TR_VOICE_ITALIANO               "Tiếng Ý"
#define TR_VOICE_POLISH                 "Tiếng Ba Lan"
#define TR_VOICE_PORTUGUES              "Tiếng Bồ Đào Nha"
#define TR_VOICE_RUSSIAN                "Tiếng Nga"
#define TR_VOICE_SLOVAK                 "Tiếng Slovakia"
#define TR_VOICE_SWEDISH                "Tiếng Thụy Điển"
#define TR_VOICE_TAIWANESE              "Tiếng Đài Loan"
#define TR_VOICE_JAPANESE               "Tiếng Nhật"
#define TR_VOICE_HEBREW                 "Tiếng Do Thái"
#define TR_VOICE_UKRAINIAN              "Tiếng Ukraina"
#define TR_VOICE_KOREAN                 "Tiếng Hàn"
#define TR_VOICE_VIETNAMESE             "Tiếng Việt"

#define TR_USBJOYSTICK_LABEL           "USB Cần điều khiển"
#define TR_USBJOYSTICK_EXTMODE         "Chế độ"
#define TR_VUSBJOYSTICK_EXTMODE_1      "Cổ điển"
#define TR_VUSBJOYSTICK_EXTMODE_2      "Nâng cao"
#define TR_USBJOYSTICK_SETTINGS        BUTTON("Cài đặt kênh")
#define TR_USBJOYSTICK_IF_MODE         TR("Nếu. chế độ","Chế độ giao diện")
#define TR_VUSBJOYSTICK_IF_MODE_1      "Cần điều khiển"
#define TR_VUSBJOYSTICK_IF_MODE_2      "Tay cầm chơi game"
#define TR_VUSBJOYSTICK_IF_MODE_3      "MultiAxis"
#define TR_USBJOYSTICK_CH_MODE         "Chế độ"
#define TR_VUSBJOYSTICK_CH_MODE_1      "Không"
#define TR_VUSBJOYSTICK_CH_MODE_2      "Btn"
#define TR_VUSBJOYSTICK_CH_MODE_3      "Trục"
#define TR_VUSBJOYSTICK_CH_MODE_4      "Sim"
#define TR_VUSBJOYSTICK_CH_MODE_S_1    "-"
#define TR_VUSBJOYSTICK_CH_MODE_S_2    "B"
#define TR_VUSBJOYSTICK_CH_MODE_S_3    "A"
#define TR_VUSBJOYSTICK_CH_MODE_S_4    "S"
#define TR_USBJOYSTICK_CH_BTNMODE      "Chế độ nút"
#define TR_VUSBJOYSTICK_CH_BTNMODE_1   "Bình thường"
#define TR_VUSBJOYSTICK_CH_BTNMODE_2   "Xung"
#define TR_VUSBJOYSTICK_CH_BTNMODE_3   "SWEmu"
#define TR_VUSBJOYSTICK_CH_BTNMODE_4   "Delta"
#define TR_VUSBJOYSTICK_CH_BTNMODE_5   "Đồng hành"
#define TR_VUSBJOYSTICK_CH_BTNMODE_S_1 TR("Norm","Bình thường")
#define TR_VUSBJOYSTICK_CH_BTNMODE_S_2 TR("Xung","Xung")
#define TR_VUSBJOYSTICK_CH_BTNMODE_S_3 TR("SWEm","SWEmul")
#define TR_VUSBJOYSTICK_CH_BTNMODE_S_4 TR("Delt","Delta")
#define TR_VUSBJOYSTICK_CH_BTNMODE_S_5 TR("CPN","Đồng hành")
#define TR_USBJOYSTICK_CH_SWPOS        "Vị trí"
#define TR_VUSBJOYSTICK_CH_SWPOS_1     "Đẩy"
#define TR_VUSBJOYSTICK_CH_SWPOS_2     "2POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_3     "3POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_4     "4POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_5     "5POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_6     "6POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_7     "7POS"
#define TR_VUSBJOYSTICK_CH_SWPOS_8     "8POS"
#define TR_USBJOYSTICK_CH_AXIS         "Trục"
#define TR_VUSBJOYSTICK_CH_AXIS_1      "X"
#define TR_VUSBJOYSTICK_CH_AXIS_2      "Y"
#define TR_VUSBJOYSTICK_CH_AXIS_3      "Z"
#define TR_VUSBJOYSTICK_CH_AXIS_4      "rotX"
#define TR_VUSBJOYSTICK_CH_AXIS_5      "rotY"
#define TR_VUSBJOYSTICK_CH_AXIS_6      "rotZ"
#define TR_VUSBJOYSTICK_CH_AXIS_7      "Thanh trượt"
#define TR_VUSBJOYSTICK_CH_AXIS_8      "Quay số"
#define TR_VUSBJOYSTICK_CH_AXIS_9      "Bánh xe"
#define TR_USBJOYSTICK_CH_SIM          "Trục Sim"
#define TR_VUSBJOYSTICK_CH_SIM_1       "Ail"
#define TR_VUSBJOYSTICK_CH_SIM_2       "Ele"
#define TR_VUSBJOYSTICK_CH_SIM_3       "Rud"
#define TR_VUSBJOYSTICK_CH_SIM_4       "Thr"
#define TR_VUSBJOYSTICK_CH_SIM_5       "Acc"
#define TR_VUSBJOYSTICK_CH_SIM_6       "Brk"
#define TR_VUSBJOYSTICK_CH_SIM_7       "Chỉ đạo"
#define TR_VUSBJOYSTICK_CH_SIM_8       "Dpad"
#define TR_USBJOYSTICK_CH_INVERSION    "Đảo ngược"
#define TR_USBJOYSTICK_CH_BTNNUM       "Nút số."
#define TR_USBJOYSTICK_BTN_COLLISION   "!Nút số. va chạm!"
#define TR_USBJOYSTICK_AXIS_COLLISION  "!Va chạm trục!"
#define TR_USBJOYSTICK_CIRC_COUTOUT    TR("Circ. cắt", "Cắt hình tròn")
#define TR_VUSBJOYSTICK_CIRC_COUTOUT_1 "Không"
#define TR_VUSBJOYSTICK_CIRC_COUTOUT_2 "X-Y, Z-rX"
#define TR_VUSBJOYSTICK_CIRC_COUTOUT_3 "X-Y, rX-rY"
#define TR_VUSBJOYSTICK_CIRC_COUTOUT_4 "X-Y, Z-rZ"
#define TR_USBJOYSTICK_APPLY_CHANGES   BUTTON("Áp dụng các thay đổi")

#define TR_DIGITAL_SERVO          "Servo333HZ"
#define TR_ANALOG_SERVO           "Phụ cấp 50HZ"
#define TR_SIGNAL_OUTPUT          "Đầu ra tín hiệu"
#define TR_SERIAL_BUS             "Buýt nối tiếp"
#define TR_SYNC                   "Đồng bộ hóa"

#define TR_ENABLED_FEATURES       "Các tính năng đã bật"
#define TR_RADIO_MENU_TABS        "Menu Đài"
#define TR_MODEL_MENU_TABS        "Menu mẫu"

#define TR_SELECT_MENU_ALL        "Tất cả"
#define TR_SELECT_MENU_CLR        "Xóa"
#define TR_SELECT_MENU_INV        "Đảo ngược"

#define TR_SORT_ORDERS_1          "Tên A-Z"
#define TR_SORT_ORDERS_2          "Tên Z-A"
#define TR_SORT_ORDERS_3          "Ít sử dụng nhất"
#define TR_SORT_ORDERS_4          "Được sử dụng nhiều nhất"
#define TR_SORT_MODELS_BY         "Sắp xếp mô hình theo"
#define TR_CREATE_NEW             "Tạo"

#define TR_MIX_SLOW_PREC          TR("C.xác chậm", "Độ chính xác chậm lên/xuống")
#define TR_MIX_DELAY_PREC         TR("C.xác trễ", "Độ chính xác trễ lên/xuống")

#define TR_THEME_EXISTS           "Đã tồn tại một thư mục chủ đề có cùng tên."

#define TR_DATE_TIME_WIDGET       "Ngày và giờ"
#define TR_RADIO_INFO_WIDGET      "Thông tin đài"
#define TR_LOW_BATT_COLOR         "Pin yếu"
#define TR_MID_BATT_COLOR         "Pin trung bình"
#define TR_HIGH_BATT_COLOR        "Pin cao"

#define TR_WIDGET_SIZE            "Kích thước tiện ích"

#define TR_DEL_DIR_NOT_EMPTY      "Thư mục phải trống trước khi xóa"

#define TR_KEY_SHORTCUTS          "Phím tắt"
#define TR_CURRENT_SCREEN         "Màn hình hiện tại"
#define TR_SHORT_PRESS            "Nhấn nhanh"
#define TR_LONG_PRESS             "Nhấn và giữ"
#define TR_OPEN_QUICK_MENU        "Mở Menu nhanh"
#define TR_QUICK_MENU_FAVORITES   "Menu yêu thích nhanh"
