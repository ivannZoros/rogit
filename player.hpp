#ifndef PLAYER_HPP
#define PLAYER_HPP


class Player
{
public:
    Player();
    Player(int x, int y);


    int X() const;
    void setX(int newX);

    int Y() const;
    void setY(int newY);

private:
    int x;
    int y;
};

#endif // PLAYER_HPP
