#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include <iostream>
#include "structure.h"
using namespace std;

class FirstClass {

public:
    void print(void) const;
    struct datatypes dt;
    void loaddata(void);
    FirstClass* getpointer() {return this;}
};

void FirstClass::print() const
{
    
    cout << endl;
    cout << "Xsize = " << dt.xsize << endl;
    cout << "Voltage = " << dt.voltage << endl;
    cout << "Duration = " << dt.duration << endl;
    
}

void FirstClass::loaddata()
{
    // will grab these from a file usually. For now just preload some values.
    
    dt.xsize = 20;
    dt.voltage = 3.1415926;
    strcpy(dt.duration, "2 days");
}


#endif
