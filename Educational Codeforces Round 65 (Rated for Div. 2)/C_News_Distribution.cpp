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

vl adj[1000005];
vl v;
vector<bool> visited(1000005);
vl cnt(1000005);

ll ct;

void dfs(ll s)
{
    if (visited[s])
        return;
    visited[s] = true;
    ct++;
    v.push_back(s);
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main()
{
    fastio;
    ll n, t;
    cin >> n >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        k--;
        if (k >= 0)

        {
            ll p;
            cin >> p;
            --p;
            while (k--)
            {
                ll q;
                cin >> q;
                --q;
                adj[p].push_back(q);
                adj[q].push_back(p);
            }
        }
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << i << " --> ";
    //     for (auto u : adj[i])
    //     {
    //         cout << u << " ";
    //     }
    //     cout << nl;
    // }
    for (ll i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
        for (ll j = 0; j < v.size(); j++)
        {
            cnt[v[j]] = ct;
        }
        ct = 0;
        v.clear();
    }
    for (ll i = 0; i < n; i++)
    {
        cout << cnt[i] << " ";
    }
    cout << nl;

    return SH;
}