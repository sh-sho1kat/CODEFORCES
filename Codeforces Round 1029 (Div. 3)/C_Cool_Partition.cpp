#include <bits/stdc++.h>
using namespace std;

// 2025-06-08 20:56:00
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
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        map<ll, bool> mp1, mp2;
        ll cnt1 = 0, cnt2 = 0;
        mp1[a[1]] = 1;
        cnt1 = 1;
        res = 1;
        for (ll i = 2; i <= n; i++)
        {
            if (flag)
            {
                if (mp1[a[i]])
                {
                    mp1[a[i]] = 0;
                    cnt1--;
                }
                if (cnt1 == 0)
                {
                    res++;
                    flag = false;
                }
                if (!mp2[a[i]])
                {
                    mp2[a[i]] = 1;
                    cnt2++;
                }
            }
            else
            {
                if (mp2[a[i]])
                {
                    mp2[a[i]] = 0;
                    cnt2--;
                }
                if (cnt2 == 0)
                {
                    res++;
                    flag = true;
                }
                if (!mp1[a[i]])
                {
                    mp1[a[i]] = 1;
                    cnt1++;
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}