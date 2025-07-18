#include <bits/stdc++.h>
using namespace std;

// 2025-04-12 00:18:22
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
    ll n, k;
    cin >> n >> k;
    string a[n + 5];
    map<string, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        string s;
        for (ll i = 1; i <= k; i++)
        {
            ll p;
            cin >> p;
            s.eb(p + '0');
        }
        a[i] = s;
        mp[s]++;
    }
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll cnt = 0;
        for (ll j = 1; j <= n; j++)
        {
            if (i != j)
            {
                string s;
                for (ll l = 0; l < k; l++)
                {
                    if ((a[i][l] == '0' and a[j][l] == '1') or (a[i][l] == '1' and a[j][l] == '0') or (a[i][l] == '2' and a[j][l] == '2'))
                        s.eb('2');
                    else if ((a[i][l] == '0' and a[j][l] == '2') or (a[i][l] == '2' and a[j][l] == '0') or (a[i][l] == '1' and a[j][l] == '1'))
                        s.eb('1');
                    if ((a[i][l] == '2' and a[j][l] == '1') or (a[i][l] == '1' and a[j][l] == '2') or (a[i][l] == '0' and a[j][l] == '0'))
                        s.eb('0');
                }
                if (mp[s])
                    cnt++;
            }
        }
        cnt /= 2;
        res += (cnt * (cnt - 1)) / 2;
    }
    cout << res << nl;
    return SH;
}