#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; std::cin >> n;
    int num;
    std::vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        arr.push_back(num);
    }
    std::reverse(std::begin(arr), std::end(arr));
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
