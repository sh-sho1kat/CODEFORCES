#include <bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define vread(n, v)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sorta(v) sort(v.begin(), v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define pb push_back
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a1 > a2)
            swap(a1, a2);
        if (a1 <= 3 && a2 <= 3)
        {
            if (b1 > 3 && b2 > 3)
                yes;
            else
                no;
        }
        else if (a1 >= 4 && a1 <= 6 && a2 >= 4 && a2 <= 6)
        {
            if ((b1 < 4 || b1 > 6) && (b1 < 4 || b1 > 6))
                yes;
            else
                no;
        }
        else if (a1 >= 7 && a1 <= 9 && a2 >= 7 && a2 <= 9)
        {
            if ((b1 < 7 && b2 < 7))
                yes;
            else
                no;
        }
        else if (a1 + 3 == a2 || a1 + 6 == a2)
        {
            if ((a1 + 3 == b1 || a1 - 3 == b1 || a1 + 6 == b1 || a1 - 6 == b1) || (a1 + 3 == b2 || a1 - 3 == b2 || a1 + 6 == b2 || a1 - 6 == b2))
                no;
            else
                yes;
        }
        else if (a1 == 1)
        {
            if (a2 == 5 || a2 == 9)
            {
                if (b1 == 5 || b1 == 9 || b2 == 5 || b2 == 9)
                    no;
                else
                    yes;
            }
            else
                no;
        }
        else if (a1 == 3)
        {
            if (a2 == 5 || a2 == 7)
            {
                if (b1 == 5 || b1 == 7 || b2 == 5 || b2 == 7)
                    no;
                else
                    yes;
            }
            else
                no;
        }
        else if (a1 == 5)
        {
            if (a2 == 3 || a2 == 7)
            {
                if (b1 == 3 || b1 == 7 || b2 == 3 || b2 == 7)
                    no;
                else
                    yes;
            }
            else if (a2 == 1 || a2 == 9)
            {
                if (b1 == 1 || b1 == 9 || b2 == 1 || b2 == 9)
                    no;
                else
                    yes;
            }
            else
                no;
        }
        else
            no;
    }
    return 0;
}