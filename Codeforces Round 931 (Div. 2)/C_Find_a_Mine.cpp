///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-03 03:08:41
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

ll ask(ll a, ll b)
{
    cout << "? " << a << " " << b << nl;
    ll p;
    cin >> p;
    return p;
}
void print(ll x, ll y)
{
    cout << "! " << x << " " << y << nl;
}

int main()
{
    // fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> m >> n;
        ll dst = ask(1, 1);
        ll x1 = min(m, dst + 1);
        ll y1 = dst + 1 - min(m - 1, dst);
        ll x2 = dst + 1 - min(n - 1, dst);
        ll y2 = min(n, dst + 1);
        ll dst1 = ask(x1, y1);
        ll dst2 = ask(x2, y2);

        ll x3 = x1 - dst1 / 2;
        ll y3 = y1 + dst1 / 2;
        ll x4 = x2 + dst2 / 2;
        ll y4 = y2 - dst2 / 2;
        ll dst3 = ask(x3, y3);
        if (dst1 & 1)
            print(x4, y4);
        else if (dst2 & 1)
            print(x3, y3);
        else if (dst3 == 0)
            print(x3, y3);
        else
            print(x4, y4);
    }
    return SH;
}