#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            sum += i * i;
    }
    cout << sum << endl;
    return 0;
}