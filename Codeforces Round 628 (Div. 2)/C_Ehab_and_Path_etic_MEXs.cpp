#include <bits/stdc++.h>
using namespace std;

// 2024-12-08 19:13:11
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

const ll N = 2e5 + 5;
vl adj[N];

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vec;
    for (ll i = 1; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        vec.push_back({u, v});
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    map<pair<ll, ll>, ll> mp;
    bool flag = false;
    for (ll i = 1; i <= n; i++)
    {
        if (adj[i].size() >= 3)
        {
            mp[{i, adj[i][0]}] = -1;
            mp[{adj[i][0], i}] = -1;

            mp[{i, adj[i][1]}] = 1;
            mp[{adj[i][1], i}] = 1;

            mp[{i, adj[i][2]}] = 2;
            mp[{adj[i][2], i}] = 2;
            flag = true;
            break;
        }
    }
    ll val = 0;
    if (flag)
        val = 3;
    for (auto u : vec)
    {
        if (mp[{u.ff, u.ss}])
        {
            if (mp[{u.ff, u.ss}] == -1)
                cout << 0 << nl;
            else
                cout << mp[{u.ff, u.ss}] << nl;
        }
        else
        {
            cout << val << nl;
            val++;
        }
    }

    return SH;
}