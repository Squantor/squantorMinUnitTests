# Squantor Minimal unittest framework tests
This repository contains the tests for [my minimal unittest framework](https://github.com/Squantor/squantorMinUnit).
## Cloning
This repository makes extensive use of submodules, use ```git clone --recurse-submodules https://github.com/Squantor/generic_project_template.git``` to clone everything in one go.
## Building
This project uses GNU make to build, to build invoke this command:
```
make
```
Building can be done with various configurations that set up flags and other settings, this configuration is set with the ```CONFIG``` variable. Most projects have the ```release``` and ```debug``` where the ```debug``` configuration is default.
The ```release``` configuration has optimizations enabled (usually for size) and minimal included debugging information. The ```debug``` configuration has NO optimization and full debugging information. There might be specific configurations available per project. When no ```CONFIG``` is defined the default is the ```debug``` configuration.
For cleaning execute the following command:
```
make clean
```
### Depedencies
* [my minimal unittest framework](https://github.com/Squantor/squantorMinUnit).
