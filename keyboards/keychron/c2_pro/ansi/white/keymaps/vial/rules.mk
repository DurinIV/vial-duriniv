MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR
BOOTLOADER = caterina

# Build Options
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = yes
RGBLIGHT_ENABLE = no

# Vial specific options
VIAL_ENABLE = yes
VIAL_TAP_DANCE_ENABLE = yes
VIAL_COMBO_ENABLE = yes

# the other stuff
#VIA_ENABLE = yes
#VIAL_ENABLE = yes
#VIALRGB_ENABLE = yes

VPATH += keyboards/keychron/common
SRC += keychron_common.c
