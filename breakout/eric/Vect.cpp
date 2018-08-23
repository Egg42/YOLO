//
//  Vect.cpp
//  BreakOut
//
//  Created by Eric Gambetta-Guglielmana on 4/17/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Vect.h"
#include "GlutApp.h"

Vect::Vect (){
    this->x = 0;
    this->y = 0;
}
Vect::Vect(double x, double y){
    
    this->x = x;
    this->y = y;
    
}
Vect::~Vect(){
    
}
