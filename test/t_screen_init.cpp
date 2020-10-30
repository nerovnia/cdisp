#include <locale>
//#include <iostream>
#include <ncurses.h>

using namespace std;

void init_screen();

int main() {
    init_screen();
}

void init_screen() {
  setlocale(LC_ALL, "");
  initscr();                   // Переход в curses-режим
  printw("Привет всем!\n");    // Отображение приветствия в буфер
  refresh();                   // Вывод приветствия на настоящий экран
  getch();                     // Ожидание нажатия какой-либо клавиши пользователем
  endwin();      
}