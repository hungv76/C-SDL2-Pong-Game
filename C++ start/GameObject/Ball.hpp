//
//  Ball.hpp
//  Pong Game
//
//  Created by vo.phi.hung on 3/25/19.
//  Copyright © 2019 vo.phi.hung. All rights reserved.
//

#ifndef Ball_hpp
#define Ball_hpp
#include <SDL2/SDL.h>
#include "Vector.hpp"

class Ball{
public:
    Ball(int, int);
    Ball();
    float x;
    float y;

    SDL_Rect* getHitbox();
    void resetPosition();
    void update();
    void reverseX();
    void reverseY();
    void updateHitboxPosition();
    static const int BALL_WIDTH = 16;
    static const int BALL_HEIGHT = 16;
private:
    SDL_Rect m_hitBox;
    Vector m_movingVector;
};

#endif /* Ball_hpp */
