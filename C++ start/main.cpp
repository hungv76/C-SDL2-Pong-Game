#include <iostream>
#include <SDL2/SDL.h>

#include "GameObject/Game.hpp"


int main( int argc, char *argv[] )
{
    Game *mainGame = new Game();
    mainGame->init();
    while(mainGame->isRunning()){
        mainGame->handleEvents();
        mainGame->update();
        mainGame->render();
    }
//    SDL_Init( SDL_INIT_EVERYTHING );
//
//    SDL_Window *window = SDL_CreateWindow( "Ping Pong", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );
//
//    // Check that the window was successfully created
//    if ( NULL == window )
//    {
//        // In the case that the window could not be made...
//        std::cout << "Could not create window: " << SDL_GetError( ) << std::endl;
//        return 1;
//    }
//
//    SDL_Event windowEvent;
//
//    while ( true )
//    {
//        SDL_PollEvent(&windowEvent);
//        if ( SDL_QUIT == windowEvent.type )
//                        {
//                            break;
//                        }
//    }
//
//    SDL_DestroyWindow( window );
//    SDL_Quit( );
    
    return EXIT_SUCCESS;
}
