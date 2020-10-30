#include <iostream>
#include <string>
#include "../src/timeconv.h"

using namespace std;

int main() {
  string str_time1 = "1327";
  string str_time2 = "1343";
  int (*sti)(string);
  sti = &sti_time;
  cout << its_time((*sti)(str_time1)) << endl;
  //cout << (int)(1254%1000) << endl;
  return 0;
}