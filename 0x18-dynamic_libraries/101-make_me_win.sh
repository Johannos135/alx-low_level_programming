#!/bin/bash
wget -P /tmp https://github.com/Johannos135/alx-low_level_programming/raw/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
