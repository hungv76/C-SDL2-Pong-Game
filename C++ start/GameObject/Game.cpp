//
//  Game.cpp
//  C++ start
//
//  Created by Vo Phi Hung   on 2019/03/24.
//  Copyright © 2019 Vo Phi Hung  . All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "Game.hpp"
#include "Player.hpp"

Game::Game(){
    
}

Game::~Game(){
    
}

void Game::init(){
    m_isRunning = false;
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
        std::cout << "SDL Init failed: " << SDL_GetError() << std::endl;
        return;
    }
    
    m_window = SDL_CreateWindow("Ping Pong", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    
    if(!m_window){
        std::cout << "SDL create window failed" << SDL_GetError() << std::endl;;
        return;
    }
    
    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_SOFTWARE);
    player1 = new Player(SCREEN_WIDTH - Player::PLAYER_WIDTH, SCREEN_HEIGHT/2 );
    player2 = new Player(0, SCREEN_HEIGHT/2);
    m_isRunning = true;
}

void Game::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            m_isRunning = false;
            break;
            
        default:
            break;
    }
}

void Game::update(){
    SDL_Delay( 16 );
}

void Game::render(){
    SDL_RenderClear(m_renderer);
    
    SDL_SetRenderDrawColor( m_renderer, 255,255,255, 255 ); //white rect
    SDL_RenderFillRect(m_renderer, player1->getHitbox());

    SDL_SetRenderDrawColor( m_renderer, 0,255,255, 255 ); //blue rect
    SDL_RenderFillRect(m_renderer, player2->getHitbox());


    SDL_SetRenderDrawColor(m_renderer, 41, 41, 41, 255); //black windows
    SDL_RenderPresent(m_renderer);
}

void Game::clean(){
    SDL_DestroyWindow(m_window);
    SDL_DestroyRenderer(m_renderer);
    SDL_Quit();
    std::cout << "Game cleaned and exit!" << std::endl;
}
