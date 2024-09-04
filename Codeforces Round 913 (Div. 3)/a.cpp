#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int d;
    cin >> d;

    while (d--)
    {
        int n;
        cin >> n;

        vector<int> seeds(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            // Distribute seeds such that ai mod i = 0
            seeds[i] = i;
        }

        // Calculate the total sum of seeds
        int totalSum = n * (n + 1) / 2;

        // Calculate the correction value to make the sum mod n equal to 0
        int correction = totalSum % n;

        // Adjust the last element to ensure the sum is divisible by n
        seeds[n] += correction;

        // Output the distribution of seeds for the current day
        for (int i = 1; i <= n; i++)
        {
            cout << seeds[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
