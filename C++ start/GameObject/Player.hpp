//
//  Player.hpp
//  C++ start
//
//  Created by Vo Phi Hung   on 2019/03/24.
//  Copyright © 2019 Vo Phi Hung  . All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#include <SDL2/SDL.h>

class Player {
public:
    Player(int, int);
    ~Player();
    void getSpeed();
    void setSpeed();
    SDL_Rect* getHitbox();
    void resetPosition();
    static const int PLAYER_WIDTH = 16;
    static const int PLAYER_HEIGHT = 16*5;
private:
    int m_movingSpeed;
    SDL_Rect m_hitBox;
    int m_score;
};

#endif /* Player_hpp */
