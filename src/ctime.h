// timeconv.h
#ifndef CTIME_H // include guard
#define CTIME_H

#include <string>

using namespace std;

class CTime {
private:
  int x;
  int y;
  int time;
  //CTime(const CTime&); // prevent copying
  //CTime& operator=(const CTime& right);    
//  int operator+(CTime);    
public:
  friend int operator+(CTime t1, CTime t2) { return t1.getTime() + t2.getTime(); } 
  friend int operator-(CTime t1, CTime t2) { return t1.getTime() - t2.getTime(); }
/*
  friend const int operator+(const CTime& t);
  friend const int operator-(const CTime& t);
*/
  CTime(int x, int y, string s_time);
  //CTime(int x, int y);
  int getTime(void);
  string toString(void);
  void setTime(string time);
  void setTime(int time);
  static string itsTime(int i_time);
  static int stiTime(string s_time);
  static bool checkDigit(char digital);
  bool checkTime(string str_time);
};
/*
int operator+(CTime t1, CTime t2) {
  return t1.getTime() + t2.getTime();  
}

int operator-(CTime t1, CTime t2) {
  return t1.getTime() - t2.getTime();  
}  
*/


#endif /* CTIME_H */