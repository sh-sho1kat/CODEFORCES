#include <bits/stdc++.h>
using namespace std;

// 2025-02-02 20:41:19
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
        set<ll> st1, st2;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            st1.insert(p);
        }
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            st2.insert(p);
        }
        if (st1.size() >= 1 and st2.size() >= 3)
            yes;
        else if (st1.size() >= 3 and st2.size() >= 1)
            yes;
        else if (st1.size() >= 2 and st2.size() >= 2)
            yes;
        else
            no;
    }
    return SH;
}