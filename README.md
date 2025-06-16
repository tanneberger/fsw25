# Flight Software Workshop 25

## Building this Project

First, build and flash a simple sensor test.

```
    $ cmake -Bbuild . -DLF_MAIN=SensorTest
    $ cmake --build build
    $ sudo picotool load -x build/LF_MAIN.elf
```

The first `cmake` command may need to be run twice because it complains about a missing file that it creates.

Before the third step, which flashes the binary onto the Pico, hold the white button on the Pico and plug it into your USB port.
This puts it in BOOTSEL mode, ready to be flashed.

To build and flash the main demo:


```
    $ cmake -Bbuild . -DLF_MAIN=FlightControllerReal -DFEDERATE=node_0
    $ cmake --build build
    $ sudo picotool load -x build/LF_MAIN.elf
```

