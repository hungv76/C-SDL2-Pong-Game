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
    
    m_window = SDL_CreateWindow("Ping Pong", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_ALLOW_HIGHDPI);
    
    if(!m_window){
        std::cout << "SDL create window failed" << SDL_GetError() << std::endl;;
        return;
    }
    
    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_SOFTWARE);
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
    SDL_Rect player1;
    player1.x = 800/2;
    player1.y = 600/2;
    player1.w = 16;
    player1.h = 16;
    
    SDL_Rect player2;
    player2.x = 0;
    player2.y = 600/2;
    player2.w = 32;
    player2.h = 32;
    
    
    
    SDL_SetRenderDrawColor( m_renderer, 255,255,255, 255 ); //white rect
    SDL_RenderFillRect(m_renderer, &player1);

    SDL_SetRenderDrawColor( m_renderer, 255,255,255, 255 ); //white rect
    SDL_RenderFillRect(m_renderer, &player2);


    SDL_SetRenderDrawColor(m_renderer, 41, 41, 41, 255); //black windows
    SDL_RenderPresent(m_renderer);
    
}

void Game::clean(){
    SDL_DestroyWindow(m_window);
    SDL_DestroyRenderer(m_renderer);
    SDL_Quit();
    std::cout << "Game cleaned and exit!" << std::endl;
}
