#ifndef GAME_HPP
#define GAME_HPP

#include <SDL/SDL.h>

#include "State.hpp"
#include "Wrapper.hpp"

using namespace std;

class Game{
  private:
    bool running;
    SDL_Event event;

    SDL_Surface *screen;

  public:
    State *current_state;

    void setup();
    void run();
};

#endif
