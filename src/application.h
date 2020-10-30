// app.h
#ifndef APP_H // include guard
#define APP_H

class Application {
int month, day, year;
public:
void set(int, int, int);
void get(int*, int*, int*);
void next();
void print()
};

#endif /* APP_H */

