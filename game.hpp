#ifndef GAME_HPP
#define GAME_HPP
#include <memory>

#include "map.hpp"
#include "player.hpp"

class Game
{
public:
    Game();

public:
    void startGame();
    void playerInput();

private:
    std::unique_ptr<Map> m_gameMap;
    std::unique_ptr<Player> m_player;
    int m_lvl;
    bool m_isGameEnd;
};

#endif // GAME_HPP
