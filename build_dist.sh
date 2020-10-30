#!/bin/bash

g++  ./src/cdisp.cpp  ./src/screen_init.cpp ./src/ctime.cpp -o cdisp -lncursesw

# -std=c++11