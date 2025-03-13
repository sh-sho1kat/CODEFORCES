#include <bits/stdc++.h>
using namespace std;

// 2024-12-18 15:50:37
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
    string s;
    cin >> s;
    vl v;
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            if (cnt)
                v.eb(cnt);
            cnt = 0;
        }
        else if (s[i] == 'a')
            cnt++;
    }
    if (cnt)
        v.eb(cnt);
    ll res = 0;
    ll fact = 1;
    for (auto u : v)
    {
        res += u * (fact);
        res %= mod;
        fact *= (u + 1);
        fact %= mod;
    }
    cout << res << nl;
    return SH;
}