///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-27 20:47:42
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll fastpow(ll a, ll b, ll l)
{
    long long res = 1;
    while (b)
    {
        if (a > l)
            return -1;
        if (b & 1)
        {
            res *= a;
            if (res > l)
                return -1;
        }
        b >>= 1;
        {
            a *= a;
        }
    }
    return res;
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
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> st;
        for (ll i = 0; i <= 30; i++)
        {
            for (ll j = 0; j <= 30; j++)
            {
                ll p = fastpow(a, i, l);
                ll q = fastpow(b, j, l);
                if (p == -1 || q == -1)
                    continue;
                if (l % (p * q) == 0)
                    st.insert(l / (p * q));
            }
        }
        cout << st.size() << nl;
    }
    return SH;
}