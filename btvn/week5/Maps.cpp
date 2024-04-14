#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    std::map<std::string, double> map;
    int query;
    std::cin >> query;
    int x, grade;
    std::string name;
    for (int i = 0; i < query; i++)
    {
        std::cin >> x;
        if (x == 1)
        {
            std::cin >> name >> grade;
            map[name] += grade;
        }
        else if (x == 2)
        {
            std::cin >> name;
            map.erase(name);
        }
        else if (x == 3)
        {
            std::cin >> name;
            std::cout << map[name] << "\n";
        }
    }
    return 0;
}



