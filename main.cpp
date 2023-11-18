#include "Header.h"

int main()
{

    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    Game game;
    while (!isGameover) {

        game.run();

        if (lives == 0 || lvl == 3 ) {
            char choose;
            if (lives ==0) {
                cout << "GAME OVER\n";
            }
            if (lvl == 3){
                cout << name << " is wins" << endl;
            }
            isGameover = true;
            cout << "continue game ? y / n" << endl;
            cin >> choose;
            if (choose == 'y') {
                isGameover = false;
                heroX = 1;
                heroY = 1;
                lives = 10;
                lvl = 1;
                game.reset();
            }
            else if (choose == 'n') {
                break;
            }

        }
        system("cls");
    }

    return 0;
}