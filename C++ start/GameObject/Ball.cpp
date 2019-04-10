//
//  Ball.cpp
//  Pong Game
//
//  Created by vo.phi.hung on 3/25/19.
//  Copyright © 2019 vo.phi.hung. All rights reserved.
//

#include "Ball.hpp"
#include <SDL2/SDL.h>
#include "Game.hpp"

Ball::Ball() {
    
}

void Ball::resetPosition() {
    m_hitBox.x = Game::SCREEN_WIDTH/2;
    m_hitBox.y = Game::SCREEN_HEIGHT/2;
}
