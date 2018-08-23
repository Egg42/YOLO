//
//  Rect.cpp
//  BreakOut
//
//  Created by Eric Gambetta-Guglielmana on 4/17/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Rect.h"
#include "GlutApp.h"
#include "Vect.h"

Rect::Rect(){
    Vect pos;
    this->pos = pos;
    this->h = 0.0;
    this->w = 0.0;
}
Rect::Rect(Vect pos, double w, double h){
    this->pos = pos;
    this->h = h;
    this->w = w;
}
Rect::~Rect(){
    
}
