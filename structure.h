//
//  structure.h
//  ClassTest


#ifndef ClassTest_structure_h
#define ClassTest_structure_h

#include <stdint.h>

struct datatypes
{
    uint16_t xsize,ysize,zsize,spare_int[13]__attribute__((packed));
    float scale,offset,voltage,current,spare_float[2]__attribute__((packed));
    uint32_t z,theta __attribute__((packed));
    char time[26],duration[12];
};

#endif
