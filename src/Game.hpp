#ifndef GAME_HPP
#define GAME_HPP

#include <SDL/SDL.h>

#include "State.hpp"

using namespace std;

class Game
{
  private:
    bool running;
    SDL_Event event;

  public:
    State *currentState;

    void setup();
    void run();
};

#endif
