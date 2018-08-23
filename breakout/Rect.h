#ifndef Rect_h
#define Rect_h
#include <iostream>
#include "Vect.h"
#include "GlutApp.h"

using namespace std;

class Rect {
	double h,w;
    Vect pos;

public:
	Rect();
	Rect(Vect,double,double);
	~Rect();
	
};


#endif 
