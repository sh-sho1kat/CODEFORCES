#include <bits/stdc++.h>
using namespace std;

// 2025-03-13 10:05:43
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

const ll MxN = 1005;
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
    ll t;
    cin >> t;
    PrecalcInverse();
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<ll>());
        tmp = a[k - 1];
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == tmp)
            {
                if (i < k)
                    cnt++;
                ct++;
            }
        }
        res = nCr(ct, cnt);
        cout << res << nl;
    }
    return SH;
}