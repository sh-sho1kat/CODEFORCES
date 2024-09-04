///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-19 14:34:47
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
        ll a[n + 5] = {};
        ll b[n + 5] = {};
        s = "#" + s;
        ll zc = 0, oc = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i] == '0')
            {
                zc++;
                a[i] = 1;
            }
            else
            {
                oc++;
                b[i] = 1;
            }
        }
        for (ll i = 1; i <= n + 1; i++)
            a[i] += a[i - 1];
        for (ll i = n; i >= 0; i--)
            b[i] += b[i + 1];
        
        double chk = 1e9 * 1.0;
        for (ll i = 0; i <= n; i++)
        {
            
            if ((2 * a[i] >= i)&&(2*b[i+1]>=n-i))
            {
                if (chk > abs(n / 2.0 - i))
                {
                    chk = abs(n / 2.0 - i);
                    res = i;
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}