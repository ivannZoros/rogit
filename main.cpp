#include "game.h"
#include "map.h"
int main()
{

    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    Game g;
    g.startGame();
    return 0;
}