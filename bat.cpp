#include"bat.h"

// This the constructor and it is called when we create an object
bat::bat(float startx, float starty)
{
	m_position.x = startx;
	m_position.y = starty;

	m_shape.setSize(sf::Vector2f(50, 5));
	m_shape.setPosition(m_position);

}

FloatRect bat::getposition() 
{
	return m_shape.getGlobalBounds();
}
RectangleShape bat::getshape()
{
	return m_shape;
}
void bat::moveleft()
{
	m_movingLeft = true;
}
void bat::moveright()
{
	m_movingRight = true;
}
void bat::stopleft()
{
	m_movingLeft = false;
}
void bat::stopright()
{
	m_movingRight = false;
}
void bat::update(Time dt) 
{
	if (m_movingLeft) {
		m_position.x -= m_speed * dt.asSeconds();
	}
	if (m_movingRight) {
		m_position.x += m_speed * dt.asSeconds();
	}
	m_shape.setPosition(m_position);
}
