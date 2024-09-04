#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        ll n;
        bool flag = true;
        cin >> n;
        string s;
        cin >> s;
        // if ((n == 1) && s[0] != 'W')
        // {
        //     flag = false;
        // }
        // else if ((s[0] != 'W' && s[1] == 'W') || (s[n - 2] == 'W' && s[n - 1] != 'W'))
        // {
        //     flag = false;
        // }
        // else
        // {
        //     for (ll i = 1; i < n - 1; i++)
        //     {
        //         if (s[i] != 'W')
        //         {
        //             if (s[i - 1] == 'W' && s[i + 1] == 'W')
        //             {
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //     }
        // }

        // for (ll i = 0; i < s.size() - 1; i++)
        // {
        //     if (s[i] == 'W' && s[i + 1] != 'W')
        //     // if (s[i] == s[i + 1])
        //     {
        //         ll j = i + 1;
        //         while (s[j] == s[j + 1])
        //         {
        //             j++;
        //         }
        //         if (s[j + 1] == 'W')
        //         {
        //             flag = false;
        //         }
        //         i = j;
        //     }
        // }
        // ll p = 0;
        // if (s[0] == s[1])
        // {
        //     while (s[p] == s[p + 1])
        //     {
        //         p++;
        //     }
        //     if (s[p + 1] == 'W')
        //     {
        //         flag = false;
        //     }
        // }
        // p = n - 1;
        // if (s[n - 1] == s[n - 2])
        // {
        //     while (s[p] == s[p - 1])
        //     {
        //         p--;
        //     }
        //     if (s[p - 1] == 'W')
        //     {
        //         flag = false;
        //     }
        // }

        // if (flag)
        //     yes;
        // else
        //     no;
        ll i, j;
        ll count1 = 0, count2 = 0;
        ll tt, ttt;
        for (i = 0; i < n; i++)
        {
            for (j = i; s[j] != 'W'; j++)
            {
                if (s[j] == 'B')
                {
                    count1++;
                }
                if (s[j] == 'R')
                {
                    count2++;
                }
                if (j == n)
                    break;
            }
            if (count1 == 0 && count2 != 0 || count2 == 0 && count1 != 0)
            {
                flag = false;
                break;
            }
            // if (count1 == 0 && count2 == 0)
            // {
            //     flag = true;
            // }
            tt = count1;
            ttt = count2;
            count1 = 0, count2 = 0;
            i = j;
        }

        if (tt == 0 && ttt != 0 || ttt == 0 && tt != 0)
        {
            flag = false;
        }
        // if (tt == 0 && ttt == 0)
        // {
        //     flag = true;
        // }

        flag ? yes : no;
    }
    return SH;
}