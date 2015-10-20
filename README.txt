This prognram, for an ATmega328 based Arduino Nano outputs a 1 MHz
square wave from PB1 (D9 in Arduino Terminology)

To build, from this directory:

  $ mkdir ../clock-gen-nano-build
  $ cd ../clock-gen-nano-build
  $ cmake ../clock-gen-nano
  $ make clock-gen-nano
  $ make upload_clock-gen-nano
