# IRremote Signals Lasko Heater 6350

[![Build Status](https://travis-ci.org/phillipgreenii/irremote-signals-lasko-heater-6350.svg?branch=master)](https://travis-ci.org/phillipgreenii/irremote-signals-lasko-heater-6350)

This library contains signals used to control the [Lasko 6350 Heater](http://www.laskoproducts.com/30-digital-ceramic-pedestal-heater-model-6350/).

See [IRremote](http://z3t0.github.io/Arduino-IRremote/) for information about sending IR signals with Arduino.

## Installation
1. Navigate to the [Releases](https://github.com/phillipgreenii/irremote-signals-lasko-heater-6350/releases) page.
2. Download the latest release.
3. Extract the zip file
4. Move the "irremote-signals-lasko-heater-6350" folder that has been extracted to your libraries directory.

## Usage
See [examples](examples)

## Explaination
The codes found in this project were determined with the help of [IRrecvDumpV2](https://github.com/z3t0/Arduino-IRremote/tree/master/examples/IRrecvDumpV2).  
Due to the long pauses used in the signal, the source code for `Arduino-IRremote` was modified by increasing `_GAP` from `5000` to `50000`.

## Copyright
Copyright 2015 Phillip Green II
