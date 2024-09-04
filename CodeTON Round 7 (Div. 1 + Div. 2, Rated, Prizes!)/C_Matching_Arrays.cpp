///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-25 21:20:07
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

bool cmp(const pair<ll, ll> &p1, const pair<ll, ll> &p2)
{
    return p1.second < p2.second;
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
        ll n, x;
        cin >> n >> x;
        vpll v;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v.push_back({p, i});
        }
        ll b[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        sort(v.begin(), v.end());
        sort(b, b + n);
        for (ll i = 0; i < x; i++)
        {
            if (v[n - x + i].ff > b[i])
                cnt++;
            v[n - x + i].ff = b[i];
        }
        for (ll i = x; i < n; i++)
        {
            if (v[i - x].ff > b[i])
                cnt++;
            v[i - x].ff = b[i];
        }
        if (cnt == x)
        {
            yes;
            sort(v.begin(), v.end(), cmp);
            for (ll i = 0; i < n; i++)
                cout << v[i].ff << " ";
            cout << nl;
        }
        else
            no;
    }
    return SH;
}