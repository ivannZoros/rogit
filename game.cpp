#include "game.h"
#include "Header.h"
Game::Game()
        : m_gameMap{std::make_unique<Maps>()}
        , heroY{1}
        , heroX{1}
        , m_lvl{0}
        , m_isGameEnd {false}
{}
void Game::startGame()
{
    while(!m_isGameEnd) {
        m_gameMap->printMap(m_lvl,heroX,heroY);
        Move();
        lives = 10;
        system("cls");
    }
}