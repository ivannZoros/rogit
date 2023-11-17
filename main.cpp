#include "Header.h"
int main()
{

    while (!isGameover) {

        if (lvl == 0) {
            PrintMap();
        }
        if (lvl == 1){
            PrintMap1();
        }
        if (lvl == 2){
            PrintMap2();
        }
        if (lvl == 3){
            cout << "You are WIN!!!"<< endl;
        }
        int i_input;
        i_input = _getch();
        switch (i_input)
        {
            case 72:
            {
                if (heroY - 1 >= 0 && (map[heroY - 1][heroX] != '#' || map1[heroY - 1][heroX] != '#' || map2[heroY - 1][heroX]  != '#'))
                {
                    heroY--;
                    --lives;
                }
                break;
            }
            case 80:
            {
                if (heroY + 1 < 7 && (map[heroY + 1][heroX] != '#' || map1[heroY + 1][heroX] != '#' || map2[heroY + 1][heroX] != '#'))
                {
                    heroY++;
                    --lives;
                }
                break;
            }
            case 75:
            {
                if (heroX - 1 >= 0 && (map[heroY][heroX - 1] != '#' || map1[heroY][heroX - 1] != '#' || map2[heroY][heroX - 1] != '#' ))
                {
                    heroX--;
                    --lives;
                }
                break;
            }
            case 77:
            {
                if (heroX + 1 < 8 && (map[heroY][heroX + 1] != '#' || map1[heroY][heroX + 1] != '#' || map2[heroY][heroX + 1] != '#'))
                {
                    heroX++;
                    --lives;
                }
                break;
            }

        }
        if (map[heroY][heroX] == '$' && lvl == 0 )
        {
            map[heroY][heroX] = '.';
            lives += 5;
        }
        if (map1[heroY][heroX] == '$' && lvl == 1 )
        {
            map1[heroY][heroX] = '.';
            lives += 5;
        }
        if (map2[heroY][heroX] == '$' && lvl == 2 )
        {
            map2[heroY][heroX] = '.';
            lives += 5;
        }
        if (map[heroY][heroX] == '>' || map1[heroY][heroX] == '>' || map2[heroY][heroX] == '>' )
        {
            lvl += 1;
            heroX = 1;
            heroY = 1;

        }
        if (lives == 0) {
            char choose;
            cout << "GAME OVER\n";
            isGameover = true;
            cout << "continue game ? y / n" << endl;
            cin >> choose;
            if (choose == 'y') {
                isGameover = false;
                heroX = 1;
                heroY = 1;
                lives = 10;
                lvl = 0;
            }
            else if (choose == 'n') {
                break;
            }

        }
        system("cls");
    }

    return 0;
}