///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-06 21:18:28
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll b[m + 5];
        for (ll i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);

        map<ll, ll> mp1, mp2;
        for (ll i = 0; i < n; i++)
        {
            mp1[a[i]]++;
        }
        for (ll i = 0; i < m; i++)
        {
            mp2[b[i]]++;
        }
        ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (ll i = 1; i <= k; i++)
        {
            if (mp1[i])
            {
                cnt1++;
                if (mp2[i])
                    cnt2++;
            }
            if (mp2[i])
                cnt3++;
        }
        //cout << cnt1 << " " << cnt2 << " " << cnt3 << nl;
        if (cnt1 - cnt2 + cnt3 < k)
        {
            flag = false;
        }
        else
        {
            k /= 2;
            cnt1 -= cnt2;
            cnt3 -= cnt2;
            if (cnt1 > k || cnt3 > k)
                flag = false;
        }
        flag ? yes : no;
    }
    return SH;
}