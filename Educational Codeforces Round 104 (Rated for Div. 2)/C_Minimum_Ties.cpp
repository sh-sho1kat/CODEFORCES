///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-08 01:33:08
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        if (n & 1)
        {
            ll p = (n - 1) / 2;
            map<ll, ll> mp1, mp2;
            for (ll i = 1; i < n; i++)
            {
                for (ll j = i + 1; j <= n; j++)
                {
                    if (mp1[i] < p)
                    {
                        mp1[i]++;
                        mp2[j]++;
                        cout << 1 << " ";
                    }
                    else
                    {
                        mp1[j]++;
                        mp2[i]++;
                        cout << -1 << " ";
                    }
                }
            }
            cout << nl;
        }
        else
        {
            ll p = (n - 1) / 2;
            map<ll, ll> mp1, mp2, mp3;
            for (ll i = 1; i < n; i++)
            {
                for (ll j = i + 1; j <= n; j++)
                {
                    if (mp1[i] < p)
                    {
                        mp1[i]++;
                        mp2[j]++;
                        cout << 1 << " ";
                    }
                    else if (!mp3[i])
                    {
                        mp3[i]++;
                        mp3[j]++;
                        cout << 0 << " ";
                    }
                    else
                    {
                        mp1[j]++;
                        mp2[i]++;
                        cout << -1 << " ";
                    }
                }
            }
            cout << nl;
        }
    }
    return SH;
}