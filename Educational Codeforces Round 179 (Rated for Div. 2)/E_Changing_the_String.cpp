#include <bits/stdc++.h>
using namespace std;

// 2025-06-03 22:10:55
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
        ll n, q;
        cin >> n >> q;

        string s;
        cin >> s;
        map<string, ll> mp;
        for (ll i = 1; i <= q; i++)
        {
            string a, b;
            cin >> a >> b;
            string p = a + b;
            if (p == "ca" and mp["bc"])
                mp["bca"]++;
            if (p == "cb" and mp["ba"])
                mp["cba"]++;
            mp[p]++;
        }
        for (ll i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch == 'c')
            {
                if (mp["ca"])
                {
                    s[i] = 'a';
                    mp["ca"]--;
                }
                else if (mp["cb"] and mp["ba"])
                {
                    s[i] = 'a';
                    mp["cb"]--;
                    mp["ba"]--;
                }
                else if (mp["cb"])
                {
                    s[i] = 'b';
                    mp["cb"]--;
                }
            }
            else if (ch == 'b')
            {
                if (mp["ba"])
                {
                    s[i] = 'a';
                    mp["ba"]--;
                }
                else if (mp["bc"] and mp["ca"])
                {
                    s[i] = 'a';
                    mp["bc"]--;
                    mp["ca"]--;
                }
            }
        }
        cout << s << nl;
    }
    return SH;
}