#include <bits/stdc++.h>
using namespace std;

// 2025-04-21 12:53:06
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

#define prime 100000
bitset<prime + 5> checker;
vector<ll> Primes;

void sieve()
{
    for (ll i = 3; i * i <= prime; i += 2)
    {
        if (!checker[i])
        {
            for (ll j = i * i; j <= prime; j += 2 * i)
            {
                checker[j] = 1;
            }
        }
    }
    Primes.eb(2);
    for (ll i = 3; i <= prime; i += 2)
    {
        if (!checker[i])
            Primes.eb(i);
    }
}

map<ll, ll> factor(ll n)
{
    map<ll, ll> factorization;
    for (auto p : Primes)
    {
        if (p * p > n)
            break;
        while (n % p == 0)
        {
            factorization[p]++;
            n /= p;
        }
    }
    if (n > 1)
        factorization[n] = 1;
    return factorization;
}

ll check(string ss)
{
    string s = ss;
    s = ss[ss.size() - 1] + s;
    s.pop_back();
    if (s == ss)
        return 0;
    ll cnt = 1;
    while (s != ss)
    {
        s = s[ss.size() - 1] + s;
        s.pop_back();
        cnt++;
    }
    return cnt;
}

int main()
{
    fastio;
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vl adj[n + 5];
        ll par[n + 5];
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            p--;
            par[p] = i;
        }
        ll vis[n + 5] = {};
        vl v;
        for (ll i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ll p = i;
                string ss;
                while (par[p] != i)
                {
                    ss.eb(s[p]);
                    p = par[p];
                    vis[p] = true;
                }
                ss.eb(s[p]);
                tmp = check(ss);
                if (tmp)
                    v.eb(tmp);
            }
        }
        ll pre[n + 5] = {};
        for (auto u : v)
        {
            map<ll, ll> mp = factor(u);
            for (auto uu : mp)
                pre[uu.ff] = max(pre[uu.ff], uu.ss);
        }
        res = 1;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= pre[i]; j++)
                res *= i;
        }
        cout << res << nl;
    }
    return SH;
}