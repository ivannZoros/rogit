#include "player.h"
player::player() : player(5,5)
{
}

player::player(int x, int y)
      :x{x}
      ,y{y}
{}
int player::X() {
    return x;
}
int player::Y() {
    return y;
}
void player::setX(int nX) {
    x=nX;
}
void player::setY(int nY) {
    y=nY;
}