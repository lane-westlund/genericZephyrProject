The goal of this repository is to show the most minimal project possible for Zephyr that includes the directory structure that I want.  Specifically multiple projects which can include one or more generic apps

Further improvements could be: Device specific configuration files/code which are read by "configurators" that configure and start the apps based on project configuration

This has been tested on Ubuntu 24.04

1. Create a directory: **zephyrproject**
2. Go into the zephyrproject directory and do: **git clone git@github.com:lane-westlund/genericZephyrProject.git**
3. Follow the "getting started" instructions here (adjusting for location of your zephyrproject directory created above): https://docs.zephyrproject.org/latest/develop/getting_started/index.html
4. Go into the zephyrproject director and build using: **west build -p always -b qemu_x86 genericZephyrProject/project_1/**
5. Test using: **west build -t run**

