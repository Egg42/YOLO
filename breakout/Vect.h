#ifndef Vec_h
#define Vec_h
#include <iostream>
#include "GlutApp.h"

using namespace std;


class Vect
{
private:
	GLfloat x,y;

public:
	Vect();
	Vect(double, double);
	~Vect();
	
	


	void print(){
		cout << "(" << x << ", " << y << ")" << endl;
	}

	double getX()const{
		return this->x;
	}
	double getY()const{
		return this->y;
	}

	void add(Vect v){

		this->x += v.getX();
		this->y += v.getY();

		
	}


};


	

	

#endif
