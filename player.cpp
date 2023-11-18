#include "player.hpp"

Player::Player()
{}


Player::Player(int x, int y)
    : x(x)
    , y(y)
{}

int Player::X() const
{
    return x;
}

void Player::setX(int newX)
{
    x = newX;
}

int Player::Y() const
{
    return y;
}

void Player::setY(int newY)
{
    y = newY;
}

