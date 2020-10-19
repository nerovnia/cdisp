#include <iostream>
#include <string>

using namespace std;

string its_time(int i_time);
int sti_time(string s_time);

int main() {
  string str_time1 = "1320";
  string str_time2 = "1340";
  string res_time = its_time(sti_time(str_time2) - sti_time(str_time1));  
  cout << "Result time: " << res_time << endl;        
//    cout << "Time is: " << s_time << " length: " <<  s_time.length() << endl;
//    cout << (int)h1 << " " << (int)h2 << " " << (int)m1 << " " << (int)m2 << endl;      
//    cout << h1 << h2 << m1 << m2 << endl;      
//    cout << t_time << endl;      

  return 0;
}

// Int to String time
string its_time(int i_time) {
  string s_time = ""; 
  int h1 = 0, h2 = 0, m1 = 0, m2 = 0; 
  if ( i_time < (24 * 60 * 60)) {
    h1 = i_time % (10 * 60 * 60);
    h2 = (i_time - (h1 * 10 * 60 * 60)) % (60 * 60);
    m1 = (i_time - (h1 * 10 * 60 * 60) + (h2 * 60 * 60)) % (10 * 60);
    m2 = (i_time - (h1 * 10 * 60 * 60) + (h2 * 60 * 60) + (10 * 60)) % 60;
    s_time += (char)(h1+48) + (char)(h2+48) + (char)(m1+48) + (char)(m2+48);
  } else {
      string err = "Time is very big!";
      cout << "Error: " << err << endl;
  }
  return s_time;
}


// String to int time
int sti_time(string s_time) {
  char h1 = 0, h2 = 0, m1 = 0, m2 = 0;
  int t_time = 0;  
  if ( s_time.length() == 4) {
    h1 = s_time[0] - 48;
    h2 = s_time[1] - 48;
    m1 = s_time[2] - 48;
    m2 = s_time[3] - 48;
    t_time = h1 * 10 * 60 * 60 + h2 * 60 * 60 + m1 * 10 * 60 + m2 * 60;
  } else {
    string err = "Time format is bad!";
    cout << "Error: " << err << endl;
  }
  return t_time;
}

char checkDigit(char digital) {
  if (( digital >= 48 ) && ( digital <= 57)) {

  } else {

  }
  return digital;
}
