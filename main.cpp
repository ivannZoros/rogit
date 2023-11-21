#include "Header.h"
#include "game.h"
int main()
{

    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    Game game;
    while (!isGameover) {

        game.run();
        int lvl;
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
                lives = 10;
                lvl = 0;

            }
            else if (choose == 'n') {
                break;
            }

        }
        system("cls");
    }
    game.startGame();
    return 0;
}