#include "game.h"
Game::Game()
        : m_gameMap{std::make_unique<Maps>()}
        , m_player{std::make_unique<player>(1,1)}
        , m_lvl{0}
        , m_isGameEnd {false}
{}
void Game::startGame()
{

    while(!m_isGameEnd) {
        if(lives == 0){
            cout << "GAME OVER" << endl;
            m_isGameEnd = true;
        }
        if(m_lvl == 4){
            cout << "WINS" << endl;
            m_isGameEnd = true;
        }
        m_gameMap->printMap(m_lvl,m_player->X(),m_player->Y());
        cout << lives << endl;
        cout << m_lvl << endl;
        move();
        if(m_gameMap->replace(m_lvl,m_player->Y(),m_player->X())) {
            lives += 5;
        }
        if(m_gameMap->checklvl(m_lvl,m_player->X(),m_player->Y())){
            m_lvl++;
            m_player->setY(1);
            m_player->setX(1);
        }
        system("cls");
    }

}

void Game::move() {
    i_input = _getch();
    switch (i_input)
    {
        case 72: { // up
            if(m_gameMap->at(m_lvl, m_player->Y() - 1, m_player->X()) != '#') {
                m_player->setY(m_player->Y() - 1);
                lives--;
            }
            break;
        }
        case 80: { // down
            if(m_gameMap->at(m_lvl, m_player->Y() + 1 , m_player->X()) != '#'){
                m_player->setY(m_player->Y() + 1);
                lives--;
            }
            break;
        }
        case 75: {   // left
            if(m_gameMap->at(m_lvl, m_player->Y() , m_player->X() - 1) != '#') {
                m_player->setX(m_player->X() - 1);
                lives--;
            }
            break;
        }
        case 77: { // right
            if(m_gameMap->at(m_lvl, m_player->Y() , m_player->X() + 1) != '#') {
                m_player->setX(m_player->X() + 1);
                lives--;
            }
            break;
        }

    }
}