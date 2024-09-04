#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0, cnt1 = 0, cnt2 = 0;
        bool fr = false, fb = false;
        bool flag = true;
        char s[10][10];
        for (ll i = 1; i <= 8; i++)
        {
            for (ll j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }

        for (ll i = 8; i >= 1; i--)
        {
            for (ll j = 8; j >= 1; j--)
            {
                if (s[j][i] == 'R')
                {
                    cnt1++;
                }
                if (s[j][i] == 'B')
                {
                    cnt2++;
                }
            }

            // if (cnt1 == 8)
            // {
            //     fr = true;
            //     cout << "R" << nl;
            //     break;
            // }
            if (cnt2 == 8)
            {
                fb = true;
                cout << "B" << nl;
                break;
            }
            cnt1 = 0;
            cnt2 = 0;
        }
        if (fb == false)
            cout << "R" << nl;
        // if (fr)
        // {
        //     continue;
        // }
        // else if (fb)
        // {

        //     continue;
        // }
        // for (ll i = 8; i >= 1; i--)
        // {
        //     for (ll j = 8; j >= 1; j--)
        //     {
        //         if (s[i][j] == 'R')
        //         {
        //             cnt1++;
        //         }
        //         if (s[i][j] == 'B')
        //         {
        //             cnt2++;
        //         }
        //     }

        //     if (cnt1 == 8)
        //     {
        //         fr = true;
        //         cout << "R" << nl;
        //         break;
        //     }
        //     if (cnt2 == 8)
        //     {
        //         fb = true;
        //         cout << "B" << nl;
        //         break;
        //     }
        //     cnt1 = 0;
        //     cnt2 = 0;
        // }
    }
    return SH;
}