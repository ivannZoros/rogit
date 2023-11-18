#ifndef MAP_HPP
#define MAP_HPP

#include <vector>
#include <iostream>

class Map
{
public:
    Map();
    ~Map() = default;

public:
    void printMap(int, int, int);

private:
    void fillMap();

private:
    std::vector<std::vector<std::vector<char>>> m_map;
};

#endif // MAP_HPP
