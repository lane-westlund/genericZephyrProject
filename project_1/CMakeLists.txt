cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(app LANGUAGES C)

target_sources(app PRIVATE src/main.c)

file(GLOB APP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../apps/*/src/*.c")
target_sources(app PRIVATE ${APP_SOURCES})
file(GLOB APP_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/../apps/*/src")
target_include_directories(app PUBLIC ${APP_INCLUDES})
