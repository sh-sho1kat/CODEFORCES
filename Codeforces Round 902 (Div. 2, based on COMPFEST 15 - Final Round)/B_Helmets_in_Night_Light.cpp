    ///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

    /**
     *     author: Shefat Hossen Shoikat
     *     date  : 2023-10-08 15:16:42
     **/

    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
    #define mod 1000000007
    #define inf 1e18
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

    bool cmp(const pair<ll, pair<ll, ll>> &p1, const pair<ll, pair<ll, ll>> &p2)
    {
        if (p1.ff == p2.ff)
            return p1.ss.ff > p2.ss.ff;
        return p1.ff < p2.ff;
    }

    int main()
    {
        fastio;
        ll t;
        cin >> t;
        while (t--)
        {
            ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
            bool flag = true, fun = false, f = false;
            ll n, p;
            cin >> n >> p;
            ll a[n + 5], b[n + 5];
            for (ll i = 0; i < n; i++)
                cin >> a[i];
            for (ll i = 0; i < n; i++)
                cin >> b[i];
            vector<pair<ll, pair<ll, ll>>> v;
            for (ll i = 1; i <= n; i++)
            {
                v.push_back({b[i - 1], {a[i - 1], i}});
            }
            sort(v.begin(), v.end(), cmp);
            // for (auto u : v)
            //     cout << u.ff << " " << u.ss.ff << " " << u.ss.ss << nl;
            // cout << nl;
            ll l = 0, i = 0;
            ans = p;
            i = 1;
            while (i < n)
            {
                if (v[l].ff >= p)
                {
                    // cout << i << " " << p << nl;
                    ans += ((n - i) * p);
                    break;
                }
                else
                {
                    tmp = v[l].ss.ff;
                    ll q = min(n - i, tmp);
                    ans += (q * v[l].ff);
                    i += q;
                    l++;
                }
            }
            cout << ans << nl;
        }
        return SH;
    }