project (atowers)
cmake_minimum_required (VERSION 2.8)

find_package (SDL REQUIRED)
#find_package (SDL_image REQUIRED)

link_libraries (
  ${SDL_LIBRARY}
  #${SDLIMAGE_LIBRARY}
  SDLmain
)

add_library (State.o src/State.cpp)
add_library (Wrapper.o src/Wrapper.cpp)

link_libraries (State.o Wrapper.o)

add_executable (atowers src/Game.cpp)
target_link_libraries (atowers State.o Wrapper.o)

#target_link_libraries (atowers Player.o PlayState.o Tilemap.o State.o TitleState.o)
