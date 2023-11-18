#include <conio.h>

#include "game.hpp"

enum KEYS {
    KEY_UP = 72,
    KEY_DOWN = 80,
    KEY_LEFT = 75,
    KEY_RIGHT = 77,
};

Game::Game()
    : m_gameMap{std::make_unique<Map>()}
    , m_player{std::make_unique<Player>(5, 5)}
    , m_lvl{0}
    , m_isGameEnd {false}
{}

void Game::startGame()
{
    while(!m_isGameEnd) {
        m_gameMap->printMap(m_lvl, m_player->X(), m_player->Y());
        playerInput();
        system("cls");
    }
}

void Game::playerInput()
{
    int input = _getch();
    switch (input) {
    case KEYS::KEY_UP: {
        m_player->setY(m_player->Y() - 1);
        break;
    }
    case KEYS::KEY_DOWN: {
        m_player->setY(m_player->Y() + 1);
        break;
    }
    case KEYS::KEY_RIGHT: {
        m_player->setX(m_player->X() + 1);
        break;
    }
    case KEYS::KEY_LEFT: {
        m_player->setX(m_player->X() - 1);
        break;
    }
    }
}
