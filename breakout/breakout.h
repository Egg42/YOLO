//
//  breakout.hpp
//  BreakOut
//
//  Created by Eric Gambetta-Guglielmana on 4/13/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef breakout_hpp
#define breakout_hpp

#include "GlutApp.h"

class Breakout {
public:
    // Game state
    enum GameState {
        GAME_ACTIVE,
        GAME_MENU,
        GAME_WIN
    };
    GameState  State;
    GLboolean  Keys[1024];
    GLuint       Width, Height;
    // Constructor/Destructor
    Breakout(GLuint width, GLuint height);
    ~Breakout();
    // Initialize game state (load all shaders/textures/levels)
    void Init();
    // GameLoop
    void ProcessInput(GLfloat dt);
    void Update(GLfloat dt);
    void Render();
    
};

#endif /* breakout_hpp */
