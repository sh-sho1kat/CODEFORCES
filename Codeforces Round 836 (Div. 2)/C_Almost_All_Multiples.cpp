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
    // for (ll i = 1; i * i <= 200000; i++)
    // {
    //     for (ll j = 1; j * j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             v[i].insert(j);
    //             ll p = i / j;
    //             if (p != j)
    //                 v[i].insert(p);
    //         }
    //     }
    // }
    // for (ll i = 1; i <= 36; i++)
    // {
    //     cout << i << "--> ";
    //     for (auto u : v[i])
    //     {
    //         cout << u << " ";
    //     }
    //     cout << nl;
    // }
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = false;
        ll n, a;
        cin >> n >> a;
        vl v;
        for (ll j = 1; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                v.eb(j);
                ll p = n / j;
                if (p != j)
                    v.eb(p);
            }
        }
        sort(all(v));
        for (auto u : v)
        {
            if (u == a)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            ll tt = n;
            ll ttt;
            vl vv;
            for (ll i = 0; i <= n; i++)
            {
                vv.eb(i);
            }
            bool fla = false;
            ttt = a;
            vv[a] = n;
            for (auto u : v)
            {
                // cout << u << " ";
                if (__gcd(ttt, u) == ttt && u != a && u != n)
                {
                    swap(vv[u], vv[ttt]);
                    ttt = u;
                    fla = true;
                }
            }
            // cout << a << " ";
            // for (ll i = 2; i <= n - 1; i++)
            // {
            //     if (i == a)
            //     {
            //         if (fla)
            //         {
            //             cout << tt << " ";
            //         }
            //         else
            //         {
            //             cout << n << " ";
            //         }
            //     }
            //     else if (i == tt)
            //     {
            //         if (fla)
            //             cout << n << " ";
            //     }
            //     else
            //         cout << i << " ";
            // }
            // cout << "1";
            // cout << nl;
            vv[1] = a;
            vv[n] = 1;
            for (ll i = 1; i <= n; i++)
            {
                cout << vv[i] << " ";
            }
            cout << nl;
        }
        else
        {
            cout << "-1" << nl;
        }
    }
    return SH;
}