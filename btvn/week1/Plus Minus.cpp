#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
int main()
{
    std::cout << std::fixed << std::setprecision(6);
    int n; std::cin >> n;
    std::vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    double pos = 0;
    double neg = 0;
    double zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    std::cout << pos / n << "\n" << neg / n << "\n" << zero / n;
}
