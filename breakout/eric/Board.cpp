//
//  board.cpp
//  glutapp
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Board.h"
#include "Vect.h"
#include "Rect.h"
#include "GlutApp.h"
#include "Bricks.h"

#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
void Board::init(vector<vector<int>> tileData, int lvlWidth, int lvlHeight)
{
    // Calculate dimensions
    long height = tileData.size();
    long width = tileData[0].size();
    float unit_width = lvlWidth / static_cast<float>(width);
    float unit_height = lvlHeight / static_cast<float>(height);
    Color color = Color();
    // Initialize level tiles based on tileData
    for (GLuint y = 0; y < height; ++y)
    {
        for (GLuint x = 0; x < width; ++x)
        {
            // Check block type from level data (2D level array)
            if (tileData[y][x] == 1) // Solid
            {
                Vect pos(unit_width * x, unit_height * y);
                Rect size(pos, unit_width, unit_height);
                
                class Bricks obj(pos, size, color);
                obj.isSolid = GL_TRUE;
                this->bricks.push_back(obj);
            }
            else if (tileData[y][x] > 1)
            {
                
                if (tileData[y][x] == 2){
                    
                    
                }else if (tileData[y][x] == 3){
                    
                }else if (tileData[y][x] == 4){
                    
                    
                }else if (tileData[y][x] == 5){
                    
                    
                }
                Vect pos(unit_width * x, unit_height * y);
                Rect size(pos, unit_width, unit_height);
                this->bricks.push_back(
                                       Bricks(pos, size, color)
                                       );
            }
        }
    }
}

void Board::Load(const GLchar *file, GLuint levelWidth, GLuint levelHeight)
{
    // Clear old data
    this->bricks.clear();
    // Load from file
    GLuint tileCode;
    Board level;
    string line;
    ifstream fstream(file);
    vector<vector<int>> tileData;
    if (fstream)
    {
        while (std::getline(fstream, line)) // Read each line from level file
        {
            std::istringstream sstream(line);
            std::vector<int> row;
            while (sstream >> tileCode) // Read each word seperated by spaces
                row.push_back(tileCode);
            tileData.push_back(row);
        }
        if (tileData.size() > 0)
            this->init(tileData, levelWidth, levelHeight);
    }
}
Board::Board(){
}


