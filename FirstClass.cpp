//
//  FirstClass.cpp
//  classtest

#include "FirstClass.h"
#include "SecondClass.h"

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

void FirstClass::printdata2()
{
    SecondClass sc;
    sc.pFC = getpointer();
    sc.print();
    sc.increase();
    sc.print();
    
}
