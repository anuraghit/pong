#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;

class bat {
private:
	Vector2f m_position;

	//rectangular shaped object
	RectangleShape m_shape;

	float m_speed = 1000.0f;

	bool m_movingRight = false;
	bool m_movingLeft = false;

public:
	bat(float startx, float starty);

	FloatRect getposition();
	RectangleShape getshape();

	void moveleft();
	void moveright();
	void stopleft();
	void stopright();

	void update(Time dt);
};