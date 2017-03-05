#pragma once
#include <SDL/SDL.h>
#include <GL\glew.h>
#include <iostream>
#include <string>
using namespace std;

class Display
{
public:
	Display();
	~Display();
	void initialiseDisplay();
	void swapBuffer();
	void ClearDisplay();

private:

	void returnError(std::string eString);
	SDL_Window* window; //holds pointer window
	SDL_GLContext context;
	int screenW;
	int screenH;


};

