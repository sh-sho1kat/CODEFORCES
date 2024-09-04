///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-23 21:47:57
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
        vl interval, c(n);
        vector<pair<ll, char>> v;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v.push_back({p, 'l'});
        }
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v.push_back({p, 'r'});
        }
        for (ll i = 0; i < n; i++)
            cin >> c[i];
        sort(all(c));
        sort(v.begin(), v.end());
        stack<ll> st;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i].ss == 'l')
                st.push(v[i].ff);
            else
            {
                interval.eb(v[i].ff - st.top());
                st.pop();
            }
        }
        sort(interval.begin(), interval.end(), greater<ll>());
        for (ll i = 0; i < n; i++)
            ans += c[i] * interval[i];
        cout << ans << nl;
    }
    return SH;
}