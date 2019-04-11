//
//  Ball.cpp
//  Pong Game
//
//  Created by vo.phi.hung on 3/25/19.
//  Copyright © 2019 vo.phi.hung. All rights reserved.
//

#include "Ball.hpp"
#include <SDL2/SDL.h>
#include <math.h>
#include "Game.hpp"

Ball::Ball() {
    m_hitBox.w = BALL_WIDTH;
    m_hitBox.h = BALL_HEIGHT;
    resetPosition();
    m_movingVector.x = 4;
    m_movingVector.y = 2;
}

void Ball::resetPosition() {
    this->x = Game::SCREEN_WIDTH/2 - BALL_WIDTH/2;
    this->y = Game::SCREEN_HEIGHT/2 - BALL_HEIGHT/2;
    updateHitboxPosition();
}

SDL_Rect* Ball::getHitbox() {
    return &m_hitBox;
}

void Ball::update() {
    this->x += m_movingVector.x;
    this->y += m_movingVector.y;
    updateHitboxPosition();
}

void Ball::reverseX(){
    m_movingVector.x = -m_movingVector.x;

}

void Ball::reverseY(){
    m_movingVector.y = -m_movingVector.y;
}

void Ball::updateHitboxPosition(){
    m_hitBox.x = round(this->x);
    m_hitBox.y = round(this->y);
}

