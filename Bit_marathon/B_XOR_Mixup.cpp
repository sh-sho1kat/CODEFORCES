///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-12 15:45:23
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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            string s = dtob(8, a[i]);
            for (ll j = 0; j < s.size(); j++)
            {
                if (s[j] == '1')
                {
                    mp[j]++;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            string s = dtob(8, a[i]);
            flag = true;
            for (ll j = 0; j < s.size(); j++)
            {
                if (s[j] == '1')
                {
                    mp[j]--;
                    if (mp[j] == 0)
                        flag = false;
                    mp[j]++;
                }
            }
            if (flag)
            {
                cout << a[i] << nl;
                break;
            }
        }
    }
    return SH;
}