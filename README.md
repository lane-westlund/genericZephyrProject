The goal of this repository is to show the most minimal project possible for Zephyr that includes the directory structure that I want.  Specifically multiple projects which can include one or more generic apps

Further improvements could be: Device specific configuration files/code which are read by "configurators" that configure and start the apps based on project configuration

This has been tested on Ubuntu 24.04

1. Create a directory: **zephyrproject**
2. Follow the "getting started" instructions here but stop before executing **west init** (adjusting for location of your zephyrproject directory created above): https://docs.zephyrproject.org/latest/develop/getting_started/index.html
3. In the **zephyrproject** directory, perform **west init -m https://github.com/your-org/your-manifest-repo.git** followed by **west update**
4. Continue with the getting started guide above, following the steps immediately after **west update**
5. Go into the zephyrproject director and build using: **west build -p always -b qemu_x86 genericZephyrProject/project_1/**
6. Test using: **west build -t run**

