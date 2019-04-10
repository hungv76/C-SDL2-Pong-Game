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

class Ball{
public:
    Ball(int, int);
    Ball();
    void getSpeed();
    void setSpeed();
    SDL_Rect* getHitbox();
    void resetPosition();
    static const int BALL_WIDTH = 16;
    static const int BALL_HEIGHT = 16;
private:
    int m_movingSpeed;
    int m_movingAngle;
    SDL_Rect m_hitBox;
};

#endif /* Ball_hpp */
