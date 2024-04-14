#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int biggest(int a, int b, int c, int d)
{
    int temp = a;
    if (b > temp) temp = b;
    if (c > temp) temp = c;
    if (d > temp) temp = d;
    return temp;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << biggest(a, b, c, d);
    return 0;
}
