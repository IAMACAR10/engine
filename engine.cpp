#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <string>

bool quit = false;
SDL_Event event;

void init(){
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);
}

SDL_Renderer* initRender(char* windowname){
	SDL_Window * win = SDL_CreateWindow(windowname, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	return SDL_CreateRenderer(win, -1, 0);
}


void loadImage(int name, char* path, SDL_Renderer * rend){
	SDL_Surface * image = IMG_Load(path); 
	SDL_Texture * texture = SDL_CreateTextureFromSurface(rend, image);
}
