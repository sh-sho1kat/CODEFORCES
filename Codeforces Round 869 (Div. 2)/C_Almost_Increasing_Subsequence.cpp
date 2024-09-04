///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-02 00:09:40
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
    t = 1;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        a[0] = 0;
        ll b[n + 5];
        memset(b, -1, sizeof(b));
        for (ll i = 1; i <= n; i++)
        {
            if (a[i - 1] >= a[i] && a[i] >= a[i + 1])
                b[i] = 0;
        }
        for (ll i = 1; i <= n; i++)
        {
            a[i] = a[i - 1];
            if (b[i] == 0)
                a[i]++;
        }
        while (k--)
        {
            ll l, r;
            cin >> l >> r;
            if ((r - l + 1) < 3)
                cout << r - l + 1 << nl;
            else
                cout << (r - l + 1) - (a[r - 1] - a[l]) << nl;
        }
    }
    return SH;
}
/*
1 2 4 3 3 5 6 2 1
1 2 4 0 3 5 6 0 1
0 0 0 1 1 1 1 2 2
1 2 3 4 5 6 7 8 9
*/