#include <string>
#include <iostream>
int main()
{
    int n, digit, count, num, oldnum;
    std::cin >> n;
    int* arr_count = new int[n];
    for (int i = 0; i < n; i++)
    {
        count = 0;
        std::cin >> num;
        oldnum = num;
        while (num > 0)
        {
            digit = num % 10;
            if (digit != 0 && oldnum % digit == 0)
            {
                count++;
            }
            num /= 10;
        }
        arr_count[i] = count;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr_count[i] << "\n";
    }
    delete[] arr_count;
}
