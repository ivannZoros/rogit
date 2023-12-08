#pragma once
#include <memory>
#include "map.h"
#include "player.h"
using namespace std;


class Game {
public:
    void startGame();
    int lives = 10;

public:
    Game();
public:
    void move() ;
private:
    std::unique_ptr<Maps> m_gameMap;
    std::unique_ptr<player> m_player;
    int m_lvl;
    bool m_isGameEnd;

private:
    int i_input;
};