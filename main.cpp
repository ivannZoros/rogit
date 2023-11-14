#include "Header.h"
int main()
{

    while (!isGameover) {
        PrintMap();
        int i_input;
        i_input = _getch();

        switch (i_input)
        {
            case 72:
            {
                if (heroY - 1 >= 0 && map[heroY - 1][heroX] != '#')
                {
                    heroY--;
                    --lives;
                }
                if (map[heroY][heroX] == '$')
                {
                    map[heroY][heroX] = '.';
                    lives += 2;
                }

                break;
            }
            case 80:
            {
                if (heroY + 1 < 7 && map[heroY + 1][heroX] != '#')
                {
                    heroY++;
                    --lives;
                }
                if (map[heroY][heroX] == '$')
                {
                    map[heroY][heroX] = '.';
                    lives += 2;
                }
                break;
            }
            case 75:
            {
                if (heroX - 1 >= 0 && map[heroY][heroX - 1] != '#')
                {
                    heroX--;
                    --lives;
                }
                if (map[heroY][heroX] == '$')
                {
                    map[heroY][heroX] = '.';
                    lives += 2;
                }
                break;
            }
            case 77:
            {
                if (heroX + 1 < 8 && map[heroY][heroX + 1] != '#')
                {
                    heroX++;
                    --lives;
                }
                if (map[heroY][heroX] == '$')
                {
                    map[heroY][heroX] = '.';
                    lives += 2;
                }
                break;
            }

        }

        if (lives == -1) {
            char choose;
            cout << "GAME OVER\n";
            PrintMap;
            isGameover = true;
            cout << "continue game ? y / n" << endl;
            cin >> choose;
            if (choose == 'y') {
                isGameover = false;

                lives = 10;
            }
            else if (choose == 'n') {
                break;
            }



        }



        system("cls");
    }


    return 0;
}