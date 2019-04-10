//
//  Game.hpp
//  C++ start
//
//  Created by Vo Phi Hung   on 2019/03/24.
//  Copyright © 2019 Vo Phi Hung  . All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
#include <SDL2/SDL.h>
#include "Player.hpp"
#include "Ball.hpp"

class Game{
public:
    Game();
    ~Game();
    
    void init();
    void update();
    void render();
    void clean();
    void handleEvents();
    bool isRunning(){return m_isRunning;};
    Player* player1;
    Player* player2;
    Ball* ball;
    static const int SCREEN_WIDTH = 800;
    static const int SCREEN_HEIGHT = 600;
private:
    int fps = 60;
    SDL_Window* m_window;
    SDL_Renderer* m_renderer;
    bool m_isRunning;
    
};

#endif /* Game_hpp */
