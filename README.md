# Flight Software Workshop 25

## Building this Project

```
    $ cmake -Bbuild . -DLF_MAIN=SensorTest
    $ cmake --build build
    $ sudo picotool load -x build/LF_MAIN.elf
```


```
    $ cmake -Bbuild . -DLF_MAIN=FlightControllerReal -DFEDERATE=node_0
    $ cmake --build build
    $ sudo picotool load -x build/LF_MAIN.elf
```

