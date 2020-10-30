#include <iostream>
#include <string>
#include <ncurses.h>
#include "../src/ctime.h"
#include "../src/screen_init.h"

using namespace std;

int main() {
  string str_time1 = "1821";
  string str_time2 = "2343";
  int res_time;
  CTime time1(0, 0, "1821");
  CTime time2(0, 0, "2315");
  res_time = time2 - time1;  
  //time1.itsTime(time.stiTime(str_time2) - time.stiTime(str_time1), res_time);  


  cout << "Результат:" << str_time1.c_str() << endl;
  cout << "Результат:" << CTime::itsTime((time2 - time1)).c_str() << endl;

  getch();
  return 0;
}
