#!/bin/bash

echo "Build t_convert"
g++ ./test/t_convert.cpp  ./src/timeconv.cpp -o ./temp/t_convert
echo "Build t_func"
g++ ./test/t_func.cpp  ./src/timeconv.cpp -o ./temp/t_func
echo "Build t_menu"
g++ ./test/t_menu.cpp  -o ./temp/t_menu -lncursesw
echo "Build t_screen_init"
g++ ./test/t_screen_init.cpp  -o ./temp/t_screen_init -lncursesw
# *************************************************************************
# Reload + / - operators
# *************************************************************************
echo "Build t_relop"
g++ ./test/t_relop.cpp ./src/ctime.cpp -o ./temp/t_relop -lncursesw
