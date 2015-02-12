//
//  SecondClass.cpp
//  classtest


#include "SecondClass.h"


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
