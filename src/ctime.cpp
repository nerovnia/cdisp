#include <iostream>
#include <string>
#include "ctime.h"

using namespace std;
/*
int CTime::operator+(CTime t1, CTime t2) {
  return t1.getTime() + t2.getTime();  
}

int CTime::operator-(CTime t1, CTime t2) {
  return t1.getTime() - t2.getTime();  
}  
*/
int CTime::getTime(void) {
    return this->time;
}

string CTime::toString(void) {
    return this->itsTime(this->time);
}

// Int to String time
string CTime::itsTime(int i_time) {
  string s_time="";
  if (i_time < 0) {
      i_time *= (-1);
  }
  int h1 = 0, h2 = 0, m1 = 0, m2 = 0; 
  if ( i_time < (24 * 60 * 60)) {
    h1 = i_time / (10 * 60 * 60);
    h2 = i_time / (60 * 60) - h1 * 10;
    m1 = (i_time / 60 - (h1 * 10 * 60) - (h2 * 60)) / 10;
    m2 = (i_time / 60 - (h1 * 10 * 60) - (h2 * 60) - (m1 * 10));
    s_time.push_back(h1 + 48);
    s_time.push_back(h2 + 48);
    s_time.push_back(m1 + 48);
    s_time.push_back(m2 + 48);
  } else {
      string err = "Time is very big!";
      cout << "Error: " << err << endl;
  }
  return s_time;
}

CTime::CTime(int x, int y, string s_time = "") {
  if ( this->checkTime(s_time) ) {
      this->time = stiTime(s_time);
  } else {
      this->time = 0;
  }
  this->x = x;
  this->y = y;
}

//CTime::CTime(int x, int y) {
//  this->CTime("", x, y);
//}

// String to int time
int CTime::stiTime(string s_time) {
  char h1 = 0, h2 = 0, m1 = 0, m2 = 0;
  int t_time = 0;  
  if ( s_time.length() == 4) {
      if (checkDigit(s_time[0]) && checkDigit(s_time[1]) && checkDigit(s_time[2]) && checkDigit(s_time[3])) {
        h1 = s_time[0] - 48;
        h2 = s_time[1] - 48;
        m1 = s_time[2] - 48;
        m2 = s_time[3] - 48;
        t_time = h1 * 10 * 60 * 60 + h2 * 60 * 60 + m1 * 10 * 60 + m2 * 60;
      }  else {
        string err = "Time string contain not digital char!";
        cout << "Error: " << err << endl;
      }
  } else {
    string err = "Time format is bad!";
    cout << "Error: " << err << endl;
  }
  return t_time;
}

bool CTime::checkTime(string str_time) {
  if (str_time.length() == 4) {
    for(int i = 0; i < 4; i++) {
      if ( !this->checkDigit(str_time[i]) )
        return false;
    }
    return true;
  }
  return false;
}

bool CTime::checkDigit(char digital) {
  if (( digital >= 48 ) && ( digital <= 57)) {
    return true;
  } 
  return false;
}
