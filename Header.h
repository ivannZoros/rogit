
#ifndef UNTITLED2_HEADER_H
#define UNTITLED2_HEADER_H
#include <vector>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

static bool isGameover = false;

int heroX = 1;
int heroY = 1;
int lives = 10;
int money = 0;
char  map[7][8] = {
        {'#','#','#','#','#','#','#','#'},
        {'#','.','$','.','.','.','.','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','.','.','.','$','.','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','$','.','.','.','>','#'},
        {'#','#','#','#','#','#','#','#'}
};
char PrintMap()
{

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++) {

            if (i == heroY && j == heroX) {
                cout << " " << "@";
            }
            else {
                cout << " " << map[i][j];
            }
        }

        cout << endl;

    }
    cout << "Max lives - " << lives << endl;
    return 0;
}

#endif //UNTITLED2_HEADER_H
