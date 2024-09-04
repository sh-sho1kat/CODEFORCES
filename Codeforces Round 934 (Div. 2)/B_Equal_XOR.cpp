///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-18 14:55:21
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        k *= 2;
        ll a[n + 5], b[n + 5];
        map<ll, ll> mp1, mp2;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            mp2[b[i]]++;
        }
        for (auto u : mp1)
        {
            if (cnt >= k)
                break;
            if (u.ss == 2)
            {
                cout << u.ff << " " << u.ff << " ";
                cnt += 2;
            }
        }
        for (auto u : mp1)
        {
            if (cnt >= k)
                break;
            if (u.ss == 1)
            {
                cout << u.ff << " ";
                cnt++;
            }
        }
        cout << nl;
        cnt = 0;
        for (auto u : mp2)
        {
            if (cnt >= k)
                break;
            if (u.ss == 2)
            {
                cout << u.ff << " " << u.ff << " ";
                cnt += 2;
            }
        }
        for (auto u : mp2)
        {
            if (cnt >= k)
                break;
            if (u.ss == 1)
            {
                cout << u.ff << " ";
                cnt++;
            }
        }
        cout << nl;
    }
    return SH;
}