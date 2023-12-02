#pragma once

class player {
public:
    player();
    player(int x,int y);

    int X();
    void setX(int nX);

    int Y();
    void setY(int nY);
private:
    int x;
    int y;
};
