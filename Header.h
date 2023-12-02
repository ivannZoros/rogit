
#ifndef UNTITLED2_HEADER_H
#define UNTITLED2_HEADER_H
//#include <vector>
//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <string>
//using namespace std;
//
//static bool isGameover = false;
//int lives = 10;
//class Maps {
//public:
//    Maps();
//    public:
//        void printMap(int lvl, int heroY,int heroX) {
//            fillMap();
//            for (int i = 0; i < 7; i++) {
//                for (int j = 0; j < 8; j++) {
//
//                    if (i == heroY && j == heroX) {
//                        cout << " " << "@";
//                    } else {
//                        cout << " " << m_map[lvl][i][j];
//                    }
//
//                }
//
//                cout << endl;
//
//            }
//        }
//
//        void replace() {
//            int lvl = 0;
//            int heroX = 1;
//            int heroY = 1;
//            if (m_map[lvl][heroY][heroX] == '$') {
//                m_map[lvl][heroY][heroX] = '.';
//                lives += 5;
//            }
//        };
//
//        void fillMap() {
//            m_map.push_back({
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'},
//                                    {'#', '.', '$', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '$', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '$', '.', '.', '.', '>', '#'},
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'}
//                            });
//
//            m_map.push_back({
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '$', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '$', '.', '.', '.', '.', '>', '#'},
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'}
//                            });
//
//            m_map.push_back({
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '$', '.', '#'},
//                                    {'#', '.', '.', '.', '.', '.', '.', '#'},
//                                    {'#', '$', '.', '.', '.', '.', '>', '#'},
//                                    {'#', '#', '#', '#', '#', '#', '#', '#'}
//                            });
//
//        }
//
//        void checklvl() {
//            int lvl = 0;
//            int heroX = 1;
//            int heroY = 1;
//            if (m_map[lvl][heroY][heroX] == '>') {
//                lvl += 1;
//                heroX = 1;
//                heroY = 1;
//
//            }
//        }
//    private:
//        std::vector<std::vector<std::vector<char>>> m_map;
//
//    };
//

#endif //UNTITLED2_HEADER_H
