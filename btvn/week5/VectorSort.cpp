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
    std::sort(vector.begin(), vector.end());
    for (int x : vector)
    {
        std::cout << x << " ";
    }
    return 0;
}
