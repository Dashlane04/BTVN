#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    std::vector <int> vector;
    int length, num;
    std::cin >> length;
    for (int i = 0; i < length; i++)
    {
        std::cin >> num;
        vector.push_back(num);
    }
    std::cin >> num;
    vector.erase(vector.begin() + num - 1);
    int first, last;
    std::cin >> first >> last;
    vector.erase(vector.begin() + first - 1, vector.begin() + last - 1);
    std::cout << vector.size() << "\n";
    for (int x : vector)
    {
        std::cout << x << " ";
    }
    return 0;
}
