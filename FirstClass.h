#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <iostream>
#include "structure.h"

using namespace std;

class FirstClass {

public:
	struct datatypes dt;
    void print(void) const;
    void loaddata(void);
    void printdata2(void);
    
    FirstClass* getpointer() {return this;}
};

#endif
