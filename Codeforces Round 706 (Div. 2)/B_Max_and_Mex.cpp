//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        ll p = 0;
        ll mx = 0;
        ll mex;
        for (auto u : st)
        {
            mx = max(u, mx);
        }
        for (auto u : st)
        {
            if (u != p)
            {
                mex = p;
                flag = false;
                break;
            }
            p++;
        }
        if (flag)
            mex = p;
        // cout << mx << " " << mex << nl;
        map<ll, bool> mp;
        for (auto u : st)
        {
            mp[u] = true;
        }
        ll tt = (mx + mex) / 2;
        if ((mx + mex) % 2)
            tt++;
        if (mx + 1 == mex)
        {
            cout << st.size() + k << nl;
        }
        else if (mp[tt] == true || k == 0)
        {
            cout << st.size() << nl;
        }
        else
            cout << st.size() + 1 << nl;
    }
    return SH;
}