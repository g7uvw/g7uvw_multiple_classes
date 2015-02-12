//
//  main.cpp

#include "FirstClass.h"


int main(int argc, const char * argv[]) {
    
    FirstClass fc;
    FirstClass fc2;
    
    fc.loaddata();
    fc.print();
    fc.printdata2();
    
    fc2.loaddata();
    fc2.dt.xsize *= 2;
    fc2.dt.voltage /= 2.1;
    fc2.print();
    fc2.printdata2();
    
    
    return 0;
}
