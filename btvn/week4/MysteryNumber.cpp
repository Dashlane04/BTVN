#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int length_A;
    std::cin >> length_A;
    int number;
    std::vector <int> A;
    std::vector <int> B;
    for (int i = 0; i < length_A; i++)
    {
        std::cin >> number;
        A.push_back(number);
    }
    for (int i = 0; i < length_A + 1; i++)
    {
        std::cin >> number;
        B.push_back(number);
    }
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    for (int i = 0; i < length_A; i++)
    {
        if (A[i] != B[i])
        {
            std::cout << B[i];
            return 0;
        }
    }
    std::cout << B[length_A];
    return 0;
}
