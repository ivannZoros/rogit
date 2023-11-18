#include <iostream>
#include "Header.h"
class game {
public:
 game();
public:
    void run(){
        p.printMap(0);
        m.move();
        p.replace();
        p.checklvl();


    }

private:
    Maps p;
    Move m;
};