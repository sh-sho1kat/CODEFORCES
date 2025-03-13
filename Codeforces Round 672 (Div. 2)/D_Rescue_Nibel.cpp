#include <bits/stdc++.h>
using namespace std;

// 2024-10-04 22:37:01
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define pb push_back
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

const ll MxN = 3e5 + 5;
ll Inv[MxN];
ll factorialInv[MxN];
ll factorial[MxN];

void PrecalcInverse()
{
    factorial[0] = 1;
    for (int i = 1; i < MxN; i++)
        factorial[i] = factorial[i - 1] * i % mod;

    Inv[0] = Inv[1] = 1;
    for (ll i = 2; i < MxN; i++)
        Inv[i] = mod - (mod / i) * Inv[mod % i] % mod;

    factorialInv[0] = factorialInv[1] = 1;
    for (ll i = 2; i < MxN; i++)
        factorialInv[i] = Inv[i] * factorialInv[i - 1] % mod;
}

ll nCr(ll n, ll r)
{
    return factorial[n] * factorialInv[r] % mod * factorialInv[n - r] % mod;
}

int main()
{
    fastio;
    PrecalcInverse();
    ll n, k;
    cin >> n >> k;
    set<ll> st;
    map<ll, ll> mp1, mp2;
    for (ll i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        st.insert(l);
        st.insert(r);
        mp1[l]++;
        mp2[r]++;
    }
    ll sum = 0;
    ll res = 0;
    for (auto u : st)
    {
        if (mp1[u] + sum >= k and mp1[u])
        {
            for (ll i = 1; i <= min(k, mp1[u]); i++)
            {
                ll p = k - i;
                if (p > sum)
                    continue;
                (res += nCr(mp1[u], i) * nCr(sum, p)) %= mod;
            }
        }
        sum += mp1[u];
        sum -= mp2[u];
    }
    cout << res << nl;
    return SH;
}