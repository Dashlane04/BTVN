#include <iostream>
#include <vector>
std::string balancedsum(const std::vector<int>& arr)
{
    int totalSum = 0;
    int leftSum = 0;

    for (int num : arr) {
        totalSum += num;
    }

    for (int num : arr) {
        if (leftSum == totalSum - leftSum - num) {
            return "YES";
        }
        leftSum += num;
    }

    return "NO";
}
int main()
{
    int cases;
    std::cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int length;
        std::cin >> length;
        std::vector <int> a(length);
        for (int j = 0; j < length; j++)
        {
            std::cin >> a[j];
        }
        std::cout << balancedsum(a) << "\n";
    }
}
