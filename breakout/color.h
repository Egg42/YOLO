//
//  color.h
//  BreakOut
//
//  Created by Eric Gambetta-Guglielmana on 4/17/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef color_h
#define color_h

class Color{
    float red,blue,green;
public:
    Color (){
        red = 0;
        blue = 0;
        green = 0;
    }
    Color(float r, float b, float g){
        red = r;
        blue = b;
        green = g;
    }
    ~Color(){
        
    }
    void setColor (float r, float b, float g){
        red = r;
        blue = b;
        green = g;
    }
    float getRed(){
        return red;
    }
    float getBlue(){
        return blue;
    }
    float getGreen(){
        return green;
    }
};
#endif /* color_h */
