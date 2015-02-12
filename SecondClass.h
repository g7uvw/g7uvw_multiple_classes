#ifndef SECONDCLASS_H
#define SECONDCLASS_H
#include <iostream>
#include "FirstClass.h"

using namespace std;

class SecondClass:public FirstClass {
    
public:
    void increase(void);
    void print(void) const;
    FirstClass *pFC;
    
};

void SecondClass::print() const
{
    
    cout << endl;
    cout << "Xsize = " << pFC->dt.xsize <<endl;
    cout << "Voltage = " << pFC->dt.voltage << endl;
    cout << "Duration = " << pFC->dt.duration << endl;
    
}

void SecondClass::increase()
{
    pFC->dt.xsize++;
    pFC->dt.voltage *= 2.0;
}



#endif
