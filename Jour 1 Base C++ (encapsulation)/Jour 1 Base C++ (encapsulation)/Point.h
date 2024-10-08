#ifndef _POINT_H__
#define _POINT_H__

#include <iostream>

class Point {
public:
    int NbPoint = 6;

    float v;
    float w;
    float x;
    float y;
    float z;
    
    Point();

    std::string ToString();

};


#endif