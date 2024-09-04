///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-19 23:30:01
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
        ll cnt1 = 0, cnt2 = 0;
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
                cnt1++;
            if (s1[i] != s2[n - i - 1])
                cnt2++;
        }
        if (cnt1 == 0)
            ans = 0;
        else if (cnt2 == 0)
            ans = 2;
        else
        {
            ll a1, a2;
            a1 = cnt1 + cnt1;
            a2 = cnt2 + cnt2;
            if (cnt1 & 1)
                a1--;
            if (!(cnt2 & 1))
                a2--;
            ans = min(a1, a2);
        }
        cout << ans << nl;
    }
    return SH;
}