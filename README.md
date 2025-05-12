# Flight Software Workshop 25

## Building this Project

```
    $ cmake -Bbuild . -DLF_MAIN=SensorTest
    $ cmake --build build
    $ sudo picotool load -x build/LF_MAIN.elf
```

