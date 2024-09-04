///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-19 18:01:11
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
    ll n;
    cin >> n;
    ll a[n + 5][n + 5], b[n + 5][n + 5] = {};
    map<ll, ll> mp;
    map<ll, bool> vis;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            a[i][j] = __gcd(i, j);
            mp[a[i][j]]++;
        }
    }
    // for (auto u : mp)
    // {
    //     cout << u.ff << " " << u.ss << nl;
    // }
    for (ll curr = n; curr >= 1; curr--)
    {
        if (mp[curr] >= 1)
        {
            ll required = 0;
            for (ll gc = 1;; gc++)
            {
                if (__gcd(curr, gc) == 1 && vis[gc] == false && gc >= mp[curr])
                {
                    required = gc;
                    vis[required] = true;
                    break;
                }
            }
            ll cnt = 0;
            for (ll i = 1; i <= n; i++)
            {
                for (ll j = 1; j <= n; j++)
                {
                    if (a[i][j] == curr && __gcd(required, i) == 1 && __gcd(required, j))
                    {
                        a[i][j] = -1;
                        mp[curr]--;
                        b[i][j] = required;
                        cnt++;
                    }
                }
            }
            // ok;
            // cout << curr << " ";
            // cout << cnt << " " << required << nl;
            // cout << nl;
            for (ll j = n - 1; j >= 1; j--)
            {
                if (__gcd(j, required) == 1)
                {
                    for (ll k = 1; k <= n; k++)
                    {
                        for (ll l = 1; l <= n; l++)
                        {
                            if (a[k][l] == j && cnt < required && mp[j] && __gcd(required, k) == 1 && __gcd(required, l))
                            {
                                b[k][l] = required;
                                a[k][l] = -1;
                                mp[j]--;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    map<ll, ll> new_map;
    bool flag = true;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            new_map[b[i][j]]++;
            if (__gcd(i, b[i][j]) != 1 || __gcd(i, b[i][j]))
                flag = false;
        }
    }
    for (auto u : new_map)
    {
        if (u.ff != u.ss)
            flag = false;
    }
    if (flag)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << nl;
        }
    }
    else
    {
        cout << -1 << nl;
    }

    return SH;
}