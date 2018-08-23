//
//  bricks.h
//  glutapp
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef bricks_h
#define bricks_h
#include "../GlutApp.h"
#include "Vect.h"
#include "Rect.h"
#include "color.h"

class Bricks {
public:
    // Object state
    GLfloat     Rotation;
    GLboolean   isSolid;
    GLboolean   Destroyed;
    GLboolean   canBreak;
    Vect objectPos;
    Rect rectangle;
    Color color;
    
    
    // Constructor(s)
    Bricks(){
        
    }
    Bricks(Vect vec, Rect rec, Color col){
        rectangle = rec;
        objectPos = vec;
        color = col;
        
    }
    ~Bricks(){
        
    }


    
    // Draw sprite
    void Draw(){
        
    }
};


#endif
