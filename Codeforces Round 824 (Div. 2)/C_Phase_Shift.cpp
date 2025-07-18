#include <bits/stdc++.h>
using namespace std;

// 2025-04-11 11:55:44
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
ll parent[N];
ll Size[N];

void make(int n)
{
    for (ll v = 1; v <= n; v++)
        parent[v] = v, Size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        parent[b] = a;
        Size[a] += Size[b];
    }
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<ll, ll> mp;
        for (ll i = 1; i <= 26; i++)
            make(i);
        for (ll i = 0; i < n; i++)
        {
            ll p = s[i] - 'a' + 1;
            if (!mp[p])
            {
                for (ll j = 1; j <= 26; j++)
                {
                    ll par = find(j);
                    if (par == j)
                    {
                        if (par != find(p))
                        {
                            Union(p, j);
                            mp[p] = j;
                            break;
                        }
                        else
                        {
                            if (Size[par] == 26)
                            {
                                mp[p] = par;
                                break;
                            }
                        }
                    }
                }
            }
            cout << (char)(mp[p] + 'a' - 1);
        }
        cout << nl;
    }
    return SH;
}