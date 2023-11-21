#ifndef UNTITLED2_GAME_H
#define UNTITLED2_GAME_H
#include "Header.h"
#include <memory>
class Game {
public:
    void startGame();
public:
    Game();
public:
    void run(){
        p.printMap(m_lvl,heroX,heroY);
        p.replace();
        cout << "Lives - " << lives << endl;
        cout << "level - " << m_lvl << endl;
        m.move();
        p.checklvl();
    }
private:
    std::unique_ptr<Maps> m_gameMap;
    int m_lvl;
    bool m_isGameEnd;
    Maps p;
    Move m;
    int heroX = 1;
    int heroY = 1;
};

#endif //UNTITLED2_GAME_H
