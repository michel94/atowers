/*
  Starts the game loop and loads the state machine
 */

#include "Game.hpp"

void Game::setup(){
  //SDL_Event event;
  running = true;

  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_WM_SetCaption("atowers", NULL);
  SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
}

void Game::run(){
  while (running){
    SDL_WaitEvent(&event);
    
    if (event.type == SDL_QUIT){
      running = false;
    }
  }
}

int main(int argc, char *argv[]){
  Game game;
  game.setup();
  game.run();

  return 0;
}
