//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

int main()
{
    fastio;
    // ll n, q;
    // cin >> n >> q;
    // ll a[n + 5], b[q + 5];
    // for (ll i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    // }
    // for (ll i = 1; i <= q; i++)
    // {
    //     cin >> b[i];
    // }
    // map<ll, ll> mp;
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (mp[a[i]] == 0)
    //         mp[a[i]] = i;
    // }

    // // for (auto u : mp)
    // // {
    // //     v.push_back({u.ff, u.ss});
    // // }

    // //     for (auto u : v)
    // //     cout << u.ff << " " << u.ss << nl;
    // // for (auto u : v)
    // // {
    // //     mp[u.ff] = u.ss;
    // // }
    // // for (auto u : mp)
    // //     cout << u.ff << " " << u.ss << nl;
    // for (ll i = 1; i <= q; i++)
    // {
    //     vpll v;
    //     cout << mp[b[i]] << " ";
    //     for (auto u : mp)
    //     {
    //         v.push_back({u.ff, u.ss});
    //     }
    //     mp.clear();
    //     sort(v.begin(), v.end(), cmp);
    //     for (ll i = 0; i < v.size(); i++)
    //     {
    //         if (v[i].first == b[i + 1])
    //             break;
    //         v[i].second += 1;
    //     }
    //     // for (auto u : v)
    //     //     cout << u.ff << " " << u.ss << nl;
    //     for (auto u : v)
    //     {
    //         mp[u.ff] = u.ss;
    //     }
    //     mp[b[i]] = 1;
    // }
    // cout << nl;
    ll n, q;
    cin >> n >> q;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        ll x;
        cin >> x;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == x)
            {
                cout << i << " ";
                for (ll j = i - 1; j >= 1; j--)
                {
                    swap(a[j], a[j + 1]);
                }
                a[1] = x;
                break;
            }
        }
    }
    return SH;
}