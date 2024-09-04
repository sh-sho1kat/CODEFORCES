///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-24 10:05:31
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
        bool flag = false, fun = false, f = false;
        string s;
        cin >> s;
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll len = s.size();
        for (ll i = 0; i < n; i++)
        {
            cnt = 0;
            for (char j = a[i]; j <= b[i]; j++)
            {
                ct = len;
                for (ll k = tmp; k < len; k++)
                {
                    if (s[k] == j)
                    {
                        ct = k;
                        break;
                    }
                }
                if (ct == len)
                    flag = true;
                cnt = max(ct, cnt);
            }
            tmp = cnt + 1;
        }
        flag ? yes : no;
    }
    return SH;
}