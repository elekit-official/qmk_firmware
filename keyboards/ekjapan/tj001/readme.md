# TJ-001

![TJ-001](imgur.com image replace me!)

This is 6 keys keyboard.
It is designed for beginners.

* Keyboard Maintainer: [ekjapan](https://github.com/elekit-official)
* Hardware Supported: TJ-001 PCBs, Pro Micro(ATmega32U4)
* Hardware Availability: [elekit](https://www.elekit.co.jp/product/TJ-001/)

Make example for this keyboard (after setting up your build environment):

    make ekjapan/tj001:default

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

