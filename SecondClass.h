#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include "FirstClass.h"

class SecondClass {
    
public:
    void increase(void);
    void print(void) const;
    FirstClass *pFC;
};

#endif
