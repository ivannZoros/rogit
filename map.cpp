#include "map.h"
#include "game.h"
void Maps::printMap(int lvl, int playerX ,int playerY) {
    Maps::fillMap();
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 8; j++) {

            if (i == playerY && j == playerX) {
                cout << " " << "@";
            } else {
                cout << " " << m_map[lvl][i][j];
            }

        }

        cout << endl;

    }
}
bool Maps::replace(int lvl,int playerX,int playerY) {
    if (m_map[lvl][playerX][playerY] == '$') {
        m_map[lvl][playerX][playerY] = '.';
        return true;
    }

    return false;
};
bool Maps::checklvl(int lvl, int playerX,int playerY ) {
        if (m_map[lvl][playerY][playerX] == '>') {
            return true;
        }
        return false;

}

char Maps::at(int lvl, int x, int y) {
    return m_map.at(lvl).at(x).at(y);
}
