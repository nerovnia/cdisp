#include <locale>
#include <ncurses.h>

void screen_init() {
  setlocale(LC_ALL, "");
  initscr();                   // Переход в curses-режим
}

void screen_close() {
  endwin();      
}