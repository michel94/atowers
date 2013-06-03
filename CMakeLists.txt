project (atowers)
cmake_minimum_required (VERSION 2.8)

find_package (SDL REQUIRED)
#find_package (SDL_image REQUIRED)

link_libraries (
  ${SDL_LIBRARY}
  #${SDLIMAGE_LIBRARY} # if using SDL_image, obviously
  SDLmain # Sadly not included in SDL_LIBRARY variable
)

#add_library (Tilemap.o src/Tilemap.cpp)
#add_library (State.o src/State.cpp)
#add_library (TitleState.o src/TitleState.cpp)
#add_library (PlayState.o src/PlayState.cpp)
#add_library (Player.o src/Player.cpp)

#link_libraries (Player.o PlayState.o Tilemap.o State.o TitleState.o)

add_executable (atowers src/Game.cpp)
#target_link_libraries (atowers Player.o PlayState.o Tilemap.o State.o TitleState.o)
