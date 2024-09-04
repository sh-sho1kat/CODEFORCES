#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 2 * n + 1, m = (x / 2);
    for (int i = 1; i <= m; i++)
    {
        int y = x - 2 * (i - 1);
        for (int j = 1; j <= y - 1; j++)
        {
            cout << " ";
        }
        int r;
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            if (j == 1)
            {
                cout << "0 ";
            }
            else if (j == i * 2 - 1)
            {
                cout << "0";
            }
            else if (j > i)
            {
                r--;
                cout << r << " ";
            }
            else
            {
                cout << j - 1 << " ";
                r = j - 1;
            }
        }
        cout << "\n";
    }
    int r;
    for (int i = 1; i <= x; i++)
    {
        if (i == 1)
        {
            cout << "0 ";
        }
        else if (i == x)
        {
            cout << "0";
        }
        else if (i > n + 1)
        {
            r--;
            cout << r << " ";
        }
        else
        {
            cout << i - 1 << " ";
            r = i - 1;
        }
    }
    cout << "\n";
    for (int i = m; i >= 1; i--)
    {
        int y = x - 2 * (i - 1);
        for (int j = 1; j <= y - 1; j++)
        {
            cout << " ";
        }
        int r;
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            if (j == 1)
            {
                cout << "0 ";
            }
            else if (j == i * 2 - 1)
            {
                cout << "0";
            }
            else if (j > i)
            {
                r--;
                cout << r << " ";
            }
            else
            {
                cout << j - 1 << " ";
                r = j - 1;
            }
        }
        cout << "\n";
    }
}
