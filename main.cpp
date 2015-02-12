//
//  main.cpp

#include <iostream>
#include "FirstClass.h"
#include "SecondClass.h"


using namespace std;

int main(int argc, const char * argv[]) {
    
    FirstClass fc;
    SecondClass sc;
    
    fc.loaddata();
    fc.print();
    sc.pFC = fc.getpointer();
    
    sc.print();
    sc.increase();
    sc.print();
    
    return 0;
}
