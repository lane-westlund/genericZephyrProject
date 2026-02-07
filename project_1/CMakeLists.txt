cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(app LANGUAGES C)

target_sources(app PRIVATE src/main.c)

#Headers
file(GLOB APP_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/../apps/*/src")
file(GLOB APP_INCLUDES_NESTED
    "${CMAKE_CURRENT_SOURCE_DIR}/../apps/*/*/src"
)
list(APPEND APP_INCLUDES ${APP_INCLUDES_NESTED})
list(REMOVE_DUPLICATES APP_INCLUDES)

target_include_directories(app PUBLIC ${APP_INCLUDES})

#Source
file(GLOB_RECURSE APP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../apps/*.c"
)

target_sources(app PRIVATE ${APP_SOURCES})
