//
//  GameObject.hpp
//  BreakOut
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp
#include "GlutApp.h"
#include "Vect.h"
#include "Rect.h"
class GameObject: public 
{
public:
    // Object state
    GLfloat     Rotation;
    GLboolean   isSolid;
    GLboolean   Destroyed;
    GLboolean   canBreak;
    Vect objectPos;
    Rect rectangle;
    
    
    // Constructor(s)
    GameObject();
    GameObject(Vect, Rect);
    
    // Draw sprite
    virtual void Draw();
};



#endif /* GameObject_hpp */
