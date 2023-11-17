
#ifndef UNTITLED2_HEADER_H
#define UNTITLED2_HEADER_H
#include <vector>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

static bool isGameover = false;
int lvl = 0;
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
char  map1[7][8] = {
        {'#','#','#','#','#','#','#','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','.','.','.','$','.','#'},
        {'#','.','$','.','.','.','.','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','.','.','.','.','>','#'},
        {'#','#','#','#','#','#','#','#'}
};
char  map2[7][8] = {
        {'#','#','#','#','#','#','#','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','.','.','.','.','$','.','#'},
        {'#','.','.','.','.','.','.','#'},
        {'#','$','.','.','.','.','>','#'},
        {'#','#','#','#','#','#','#','#'}
};
char PrintMap()
{

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++) {

            if (i == heroY && j == heroX && lvl == 0) {
                cout << " " << "@";
            }
            else {
                cout << " " << map[i][j];
            }
        }

        cout << endl;

    }
    cout << "Max lives - " << lives << endl;
    cout << "level 1"  << endl;
    return 0;
}
char PrintMap1()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++) {

            if (i == heroY && j == heroX && lvl == 1) {
                cout << " " << "@";
            }
            else {
                cout << " " << map1[i][j];
            }
        }

        cout << endl;

    }
    cout << "Max lives - " << lives << endl;
    cout << "level 2"  << endl;
    return 0;
}
char PrintMap2()
{

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++) {

            if (i == heroY && j == heroX && lvl == 2) {
                cout << " " << "@";
            }
            else {
                cout << " " << map2[i][j];
            }
        }

        cout << endl;

    }
    cout << "Max lives - " << lives << endl;
    cout << "level 3"  << endl;

    return 0;
}

#endif //UNTITLED2_HEADER_H
