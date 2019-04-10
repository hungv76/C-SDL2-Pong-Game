//
//  Player.cpp
//  C++ start
//
//  Created by Vo Phi Hung   on 2019/03/24.
//  Copyright © 2019 Vo Phi Hung  . All rights reserved.
//

#include <SDL2/SDL.h>
#include "Player.hpp"

Player::Player(int positionX, int positionY) {
    m_movingSpeed = 0;
    m_hitBox.x = positionX;
    m_hitBox.y = positionY;
    m_hitBox.h = Player::PLAYER_HEIGHT;
    m_hitBox.w = Player::PLAYER_WIDTH;
}

Player::~Player() {
}

SDL_Rect* Player::getHitbox() {
    return &m_hitBox;
}
