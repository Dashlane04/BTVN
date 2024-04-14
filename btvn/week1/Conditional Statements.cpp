#include <iostream>
int main()
{
    int n; std::cin >> n;
    std::string num_word[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i = 0; i < 9; i++)
    {
        if (n == i + 1)
        {
            std::cout << num_word[i];
            return 0;
        }
    }
    std::cout << "Greater than 9";
}
