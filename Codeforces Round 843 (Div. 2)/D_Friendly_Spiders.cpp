#include <bits/stdc++.h>
using namespace std;

// 2025-07-01 02:16:01
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

#define prime 300000
ll spf[prime + 5];

void factor_sieve()
{
    for (ll i = 1; i <= prime; i += 2)
        spf[i] = i;
    for (ll i = 2; i <= prime; i += 2)
        spf[i] = 2;
    for (ll i = 3; i * i <= prime; i += 2)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j <= prime; j += 2 * i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

set<ll> getFactorization(ll x)
{
    set<ll> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

vpll v[300005];
ll par[300005];
bool vis[300005];

int main()
{
    fastio;
    factor_sieve();
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll st, ed;
    cin >> st >> ed;
    for (ll i = 1; i <= n; i++)
    {
        set<ll> st = getFactorization(a[i]);
        for (auto u : st)
            v[u].eb({a[i], i});
    }
    queue<pll> q;
    q.push({a[st], st});
    bool fun = false;
    while (!q.empty())
    {
        ll val = q.front().ff;
        ll pos = q.front().ss;
        if (pos == ed)
        {
            fun = true;
            break;
        }
        q.pop();
        set<ll> vec = getFactorization(val);
        for (auto u : vec)
        {
            if (!vis[u])
            {
                vis[u] = true;
                for (auto uu : v[u])
                {
                    if (uu.ss == pos or par[uu.ss])
                        continue;
                    par[uu.ss] = pos;
                    q.push(uu);
                }
            }
        }
    }
    if (!fun)
        cout << -1 << nl;
    else
    {
    end:
        vl res;
        while (ed)
        {
            res.eb(ed);
            ed = par[ed];
        }
        cout << res.size() << nl;
        reverse(all(res));
        for (auto u : res)
            cout << u << " ";
    }

    return SH;
}