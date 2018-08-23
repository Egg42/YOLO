//
//  board.h
//  glutapp
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Eric Gambetta-Guglielmana. All rights reserved.
//

#ifndef board_h
#define board_h
#include "TexRect.h"
#include <vector>
using namespace std;

class Board
{
private:
    vector<TexRect*> bricks;
public:

    
    char *filename;
    Board(){
        char *file;
        file = (char*)"images/stone.png";
        bricks.push_back(new TexRect(file, 0, 0, 0.1, 0.05));
    }
    ~Board(){
        for (vector< TexRect* >::iterator it = bricks.begin() ; it != bricks.end(); ++it)
        {
            delete (*it);
        }
        bricks.clear();
    }


    // Render level
    void draw(){
        for(int i = 0; i < bricks.size(); i++)
            bricks[i]->draw();
        
    }
    //Intiate the board with random brick placement
    void init(){
        bricks.clear();
        
        
        
        for (float i = 0.95; i > 0.5; i = i - 0.05){
            
            for(float j = -(float)(rand()%10)/10 + 0.1, k = j * -1.0; j < k; j = j + 0.1) {
                int t = rand() % 6;
                if (t == 0 )
                    bricks.push_back(new TexRect((char*)"images/blue.png", j, i, 0.1, 0.05));
                else if (t == 1)
                    bricks.push_back(new TexRect((char*)"images/red.png", j, i, 0.1, 0.05));
                else if (t == 2)
                    bricks.push_back(new TexRect((char*)"images/orange.png", j, i, 0.1, 0.05));
                else if (t == 3)
                    bricks.push_back(new TexRect((char*)"images/green.png", j, i, 0.1, 0.05));
                else if (t == 4)
                    bricks.push_back(new TexRect((char*)"images/silver.png", j, i, 0.1, 0.05));
                else
                    bricks.push_back(new TexRect((char*)"images/stone.png", j, i, 0.1, 0.05));
            }
        }
    }
    bool contains(float mx, float my){
        char *file = (char*)"images/stone.png";
        for(int i = 0; i < bricks.size(); i++){
            if (bricks[i]->contains(mx,my)){
                filename = bricks[i]->getfile();
                if (bricks[i]->getfile() != file)
                    bricks.erase(bricks.begin() + i);
                return true;
            }
        }
        return false;
        
    }
    char * getfile(){
        return filename;
    }
};


#endif /* board_h */
