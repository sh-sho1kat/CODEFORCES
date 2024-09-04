///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-22 20:14:42
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

void func(ll a[], ll n, bool f, ll n1)
{
    ll tmp;
    bool flag = false;
    for (ll i = 1; i <= n1; i++)
    {
        if (a[i] == n)
        {
            tmp = i;
            break;
        }
    }
    for (ll i = tmp; i <= n1; i++)
    {
        cout << a[i] << " ";
    }
    ll l, r;
    if (f)
    {
        l = 1;
        r = tmp - 1;
    }
    else
    {
        cout << a[tmp - 1] << " ";
        l = 1;
        r = tmp - 2;
    }
    while (l <= r)
    {
        if (a[r] >= a[l])
        {
            cout << a[r] << " ";
            r--;
        }
        else
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        for (ll i = 1; i <= r; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << nl;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        if (n == 1)
            cout << a[1] << nl;
        else if (a[1] == n)
        {
            if (a[n] == (n - 1))
                func(a, n - 1, 1, n);
            else
                func(a, n - 1, 0, n);
        }
        else
        {
            if (a[n] == n)
                func(a, n, 1, n);
            else
                func(a, n, 0, n);
        }
    }
    return SH;
}