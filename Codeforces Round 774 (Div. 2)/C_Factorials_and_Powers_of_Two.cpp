///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-21 15:10:39
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

vl v1, v2;

ll func(ll pos, ll sum)
{
    if (sum < 0)
        return inf;
    if (pos == v1.size())
    {
        ll res = 0;
        ll s = 0;
        for (ll i = 0; i < v2.size(); i++)
        {
            if (s + v2[i] <= sum)
            {
                s += v2[i];
                res++;
            }
        }
        return res;
    }
    ll res1 = 0, res2 = 0;
    res1 = func(pos + 1, sum);
    res2 = func(pos + 1, sum - v1[pos]) + 1;
    return min(res1, res2);
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    ll p = 3;
    ll fact = 2;
    while (fact <= 1e12)
    {
        fact *= p;
        v1.eb(fact);
        p++;
    }
    fact = 1;
    while (fact <= 1e12)
    {
        fact *= 2;
        v2.eb(fact);
    }
    v2.eb(1);
    sort(v2.begin(), v2.end(), greater<ll>());
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ans = func(0, n);
        cout << ans << nl;
    }
    return SH;
}