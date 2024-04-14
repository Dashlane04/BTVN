#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number, length;
    std::vector <int> vector;
    std::cin >> length;
    for (int i = 0; i < length; i++)
    {
        std::cin >> number;
        vector.push_back(number);
    }
    int query;
    std::cin >> query;
    for (int i = 0; i < query; i++)
    {
        std::cin >> number;
        auto it = lower_bound(vector.begin(), vector.end(), number);
        if (it != vector.end() && *it == number)
        {
            std::cout << "Yes " << std::distance(vector.begin(), it) + 1 << "\n";
        }
        else if (it != vector.end())
        {
            std::cout << "No " << std::distance(vector.begin(), it) + 1 << "\n";
        }
    }
    return 0;
}
