#include <bits/stdc++.h>
using namespace std;

// 2024-12-20 20:57:35
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
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'p')
                cnt++;
            if (s[i] == 's')
                ct++;
        }
        if (ct == 0 or cnt == 0)
            yes;
        else if (cnt == 1 and s[n - 1] == 'p')
            yes;
        else if (ct == 1 and s[0] == 's')
            yes;
        else
            no;
    }
    return SH;
}