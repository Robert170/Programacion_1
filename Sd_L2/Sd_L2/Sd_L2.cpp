#include <SDL.h>
#include <iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

//coordenadas de inicio
const int X_POSITION = 100;
const int Y_POSITION = 100;

//tamaño de la pantalla
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 400;

int main(int argc, char *argv[])
{
	//inicializar SDL
	if (SDL_Init(SDL_INIT_VIDEO) !=0)
	{
		cout << "SDL_Init Error: " << SDL_GetError() << endl;
		return 1;
	}

	//ventana donde se mostrara las cosas
	SDL_Window *window = SDL_CreateWindow("Hello World! HOLA COMO ESTAN?",
											X_POSITION,
											Y_POSITION,
											SCREEN_WIDTH,
											SCREEN_HEIGHT,
											SDL_WINDOW_SHOWN);

	if (window == nullptr)
	{
		cout << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
		SDL_Quit();
		return 1;
	}

	//el renderer es aquel que mostrara las cosas en la pantalla
	SDL_Renderer *renderer = SDL_CreateRenderer(window,
												-1,
												SDL_RENDERER_ACCELERATED |
												SDL_RENDERER_PRESENTVSYNC);
	if (renderer == nullptr)
	{
		SDL_DestroyWindow(window);
		cout << "SDL_CreateRenderer Error: " << SDL_GetError << endl;
		SDL_Quit();
		return 1;
	}

	

	//un surface es un plano en donde se cargara la imagen 
	SDL_Surface *bmp = SDL_LoadBMP("hello.bmp");
	if (bmp == nullptr)
	{
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		cout << "SDL_LoadBMP Error: " << SDL_GetError() << endl;
		SDL_Quit();
		return 1;
	}

	//La textura es la informacion que usa la targeta de video para mostrar los pixeles
	//los pixeles, usa el surface como base para ello

	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, bmp);
	SDL_FreeSurface(bmp);
	if (texture == nullptr)
	{
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << endl;
		SDL_Quit();
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		//First clear the renderer
		SDL_RenderClear(renderer);
		//Draw the texture
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		//Update the screen
		SDL_RenderPresent(renderer);
		//take a quick break after all that hard work
		SDL_Delay(1000);
	}

	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}