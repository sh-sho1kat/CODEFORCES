///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-10 10:52:46
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
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n + 5];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    if (n == 1)
    {
        cout << 0 << nl;
        return 0;
    }
    for (ll t = 0; t < n - 1; t++)
    {
        ll sum = 0;
        bool flag = true;
        vl v;
        for (ll i = 0; i < n; i++)
        {
            if (i == t)
                v.eb(x);
            v.eb(a[i]);
        }
        if (v[t] == v[t + 1] && v[t] == v[t + 2])
        {
            ll left = t;
            ll right = t + 1;
            ll sl = 0;
            ll sr = 0;
            ll lv, rv;
            lv = v[t];
            rv = v[t];
            while (flag)
            {
                sl = 0;
                sr = 0;
                while (v[left] == lv && left >= 0)
                {
                    sl++;
                    left--;
                }
                while (v[right] == rv && right <= n)
                {
                    sr++;
                    right++;
                }
                if ((sl + sr) >= 3)
                {
                    sum += sl;
                    sum += sr;
                    lv = v[left];
                    rv = v[right];
                    if (lv != rv)
                        flag = false;
                }
                else
                    flag = false;
            }
        }
        ans = max(ans, sum);
    }
    ans--;
    if (ans < 0)
        ans = 0;
    cout << ans << nl;
    return SH;
}