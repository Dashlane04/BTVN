#include <iostream>
int main()
{
    int n, k; std::cin >> n >> k;
    int* arr = new int[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i < j && (arr[i] + arr[j]) % k == 0) count++;
        }
    }
    std::cout << count;
}
