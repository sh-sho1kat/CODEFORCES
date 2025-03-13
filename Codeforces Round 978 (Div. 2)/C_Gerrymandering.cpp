#include <bits/stdc++.h>
using namespace std;

// 2024-10-14 03:02:22
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll a[5][100005];
ll n;
ll func(ll pos1, ll pos2)
{
    ll way1 = 0, way2 = 0, way3 = 0, way4 = 0, way5 = 0, way6 = 0, way7 = 0;
    if (pos1 >= n or pos2 >= n)
        return 0;
    if (pos1 == pos2)
    {
        way1 = func(pos1 + 1, pos2 + 1);
        if (a[1][pos1] + a[1][pos1 + 1] + a[1][pos1 + 2] > 1)
            way2 = 1 + func(pos1 + 3, pos2);
        else
            way2 = func(pos1 + 3, pos2);

        if (a[2][pos2] + a[2][pos2 + 1] + a[2][pos2 + 2] > 1)
            way3 = 1 + func(pos1, pos2 + 3);
        else
            way3 = func(pos1, pos2 + 3);

        if (a[1][pos1] + a[2][pos2] + a[2][pos2 + 1] > 1)
            way4 = 1 + func(pos1 + 1, pos2 + 2);
        else
            way4 = func(pos1 + 1, pos2 + 2);

        if (a[1][pos1 + 1] + a[2][pos2] + a[2][pos2 + 1] > 1)
            way5 = 1 + func(pos1 + 2, pos2 + 2);
        else
            way5 = func(pos1 + 2, pos2 + 2);

        if (a[1][pos1] + a[1][pos1 + 1] + a[2][pos2] > 1)
            way6 = 1 + func(pos1 + 2, pos2 + 1);
        else
            way6 = func(pos1 + 2, pos2 + 1);

        if (a[1][pos1] + a[1][pos1 + 1] + a[2][pos2 + 1] > 1)
            way7 = 1 + func(pos1 + 2, pos2 + 2);
        else
            way7 = func(pos1 + 2, pos2 + 2);
    }
    else
    {
        if (pos1 - pos2 == 1)
        {
            if (a[1][pos1 + 1] + a[2][pos2] + a[2][pos2 + 1] > 1)
                way5 = 1 + func(pos1 + 2, pos2 + 2);
            else
                way5 = func(pos1 + 2, pos2 + 2);
        }
        else if (pos2 - pos1 == 0)
        {
            if (a[1][pos1] + a[1][pos1 + 1] + a[2][pos2 + 1] > 1)
                way7 = 1 + func(pos1 + 2, pos2 + 2);
            else
                way7 = func(pos1 + 2, pos2 + 2);
        }
        else
        {
            way1 = func(pos1 + 1, pos2);
            way2 = func(pos1, pos2 + 1);
            if (a[1][pos1] + a[1][pos1 + 1] + a[1][pos1 + 2] > 1)
                way3 = 1 + func(pos1 + 3, pos2);
            else
                way3 = func(pos1 + 3, pos2);

            if (a[2][pos2] + a[2][pos2 + 1] + a[2][pos2 + 2] > 1)
                way4 = 1 + func(pos1, pos2 + 3);
            else
                way4 = func(pos1, pos2 + 3);
        }
    }
    ll way = max({way1, way2, way3, way4, way5, way6, way7});
    return way;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n;
        for (ll i = 1; i < n + 5; i++)
            a[1][i] = 0, a[2][i] = 0;
        for (ll i = 1; i <= 2; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'A')
                    a[i][j] = 1;
            }
        }
        res = func(0, 0);
        cout << res << nl;
    }
    return SH;
}