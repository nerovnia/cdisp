#include <iostream>
#include <string>
#include "timeconv.h"

using namespace std;

int main() {
  string str_time1 = "182h";
  string str_time2 = "l343";
  string res_time = its_time(sti_time(str_time2) - sti_time(str_time1));  
  cout << "Result time: " << res_time << endl;        

  return 0;
}
