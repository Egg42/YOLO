//
//  board.hpp
//  glutapp
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef board_h
#define board_h
#include "Bricks.h"
#include <vector>
using namespace std;

class Board
{
public:

    vector<Bricks> bricks;
    
    Board();
    // Loads level from file
    void Load(const GLchar *file, GLuint levelWidth, GLuint levelHeight);
    // Render level
    void Draw();
    // Check if the level is completed (all non-solid tiles are destroyed)
    GLboolean IsCompleted();
private:
    // Initialize level from tile data
    void init(vector<vector<int>> tileData, int levelWidth, int levelHeight);
};


#endif /* board_hpp */
