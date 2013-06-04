#ifndef WRAPPER_HPP
#define WRAPPER_HPP

#include <SDL/SDL.h>

using namespace std;

class Wrapper
{
  public:
    static void set_pixel(SDL_Surface *screen, int x, int y, Uint8 color);
    static void clear_screen(SDL_Surface *screen, int r, int g, int b);
    static void draw_line(SDL_Surface *screen, int x1, int y1, int x2, int y2, Uint8 color);
};

#endif
