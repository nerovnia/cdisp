#include <iostream>
#include <string>
#include <ncurses.h>
#include "ctime.h"
#include "screen_init.h"

using namespace std;

int main() {
  screen_init();

  refresh();

  getch();
  screen_close();
  return 0;
}
