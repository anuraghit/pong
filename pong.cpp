#include "bat.h"
#include <sstream>
#include <cstdlib>
#include<SFML/Graphics.hpp>

int main()
{
	//create a video mode
	VideoMode vm(1920, 1080);

	//create and open a window for the game
	RenderWindow window(vm, "pong", Style::Fullscreen);

	int score = 0;
	int lives = 3;

	//create a bat at the bottom center of the screen
	bat bat(1920 / 2, 1080 - 20);

	//ball

	//create a text object called hud
	Text hud;

	Font font;
	font.loadFromFile("fonts/DS-DIGI.ttf");

	hud.setFont(font);
	//size of font
	hud.setCharacterSize(75);

	hud.setFillColor(Color::Red);
	hud.setPosition(20, 20);

	//clock
	Clock clock;

	while (window.isOpen())
	{
		/***************
		handle the player input
		***************/
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				
				//QUIT the game when the window is closd
				window.close();
		}
		//handle the player quitting
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		//handle the pressing and releasing of the arrow keys
		if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			bat.moveleft();
		}
		else
		{
			bat.stopleft();
		}
		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			bat.moveright();
		}
		else
		{
			bat.stopright();
		}
		
		/***************
		update the bat,the ball and the HUD
		***************/
		
		//update the delta ime
		Time dt = clock.restart();
		bat.update(dt);
		
		//updatethe HUD text
		std::stringstream ss;
		ss << "Score:" << score << " Lives:" << lives;
		hud.setString(ss.str());

		/***************
		Draw the bat,the ball and the HUD
		***************/
		window.clear();
		window.draw(hud);
		window.draw(bat.getshape());
		window.display();

	}
	return 0;
}