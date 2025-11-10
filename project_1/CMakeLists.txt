cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(app LANGUAGES C)

target_sources(app PRIVATE src/main.c)

target_sources(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../apps/HelloWorld/src/HelloWorld.c)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../apps/HelloWorld/src)

target_sources(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../apps/DataSender/src/DataSender.c)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../apps/DataSender/src)
