FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive
SHELL ["/bin/bash", "-o", "pipefail", "-c"]

ARG WORKSPACE=/workspace
ARG ZEPHYR_DIR=${WORKSPACE}/zephyrproject

RUN apt-get update && apt-get install -y --no-install-recommends \
      ca-certificates git \
 && update-ca-certificates \
 && rm -rf /var/lib/apt/lists/*

RUN mkdir -p "${ZEPHYR_DIR}"
WORKDIR ${ZEPHYR_DIR}

RUN git clone https://github.com/lane-westlund/genericZephyrProject.git

# Now we start the getting started guide
RUN apt update
RUN apt upgrade -y

RUN apt install -y --no-install-recommends git cmake ninja-build gperf \
  ccache dfu-util device-tree-compiler wget python3-dev python3-venv python3-tk \
  xz-utils file make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1 python3-pip

RUN python3 -m venv .venv

RUN .venv/bin/pip install west

RUN .venv/bin/west init .
RUN .venv/bin/west update
RUN .venv/bin/west zephyr-export
RUN .venv/bin/west packages pip --install

RUN .venv/bin/west sdk install