#include <iostream>
#include <vector>

void find_four_and_five(int n)
{
    // Initialize counts for 4s and 5s
    int count_four = 0;
    int count_five = 0;

    // Calculate the maximum number of 4s
    count_four = n / 4;

    // Check if the remaining number is divisible by 5
    if (n % 4 != 0 && (n % 4) % 5 == 0)
    {
        count_five = 1;
    }

    // If the remaining number is not divisible by 5, adjust the counts
    else if (n % 4 != 0)
    {
        count_five = 1;
        count_four -= 1;
    }

    // If the remaining number is neither divisible by 4 nor 5, it's not possible
    if (count_four < 0 || (n - count_four * 4) % 5 != 0)
    {
        std::cout << -1 << std::endl;
        return;
    }

    // Output the sequence in non-decreasing order
    for (int i = 0; i < count_four; ++i)
    {
        std::cout << 4 << " ";
    }
    for (int i = 0; i < count_five; ++i)
    {
        std::cout << 5 << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Read the number of test cases
    int t;
    std::cin >> t;

    // Process each test case
    for (int i = 0; i < t; ++i)
    {
        // Read the given number for each test case
        int n;
        std::cin >> n;

        // Find and print the sequence of 4s and 5s
        find_four_and_five(n);
    }

    return 0;
}
