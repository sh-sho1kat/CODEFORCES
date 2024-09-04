    ///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

    /**
     *     author: Shefat Hossen Shoikat
     *     date  : 2023-12-21 10:56:47
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
            vector<pair<ll, pair<ll, ll>>> v;
            ll a[n + 5], b[n + 5];
            for (ll i = 0; i < n; i++)
                cin >> a[i];
            for (ll i = 0; i < n; i++)
                cin >> b[i];
            for (ll i = 0; i < n; i++)
                v.push_back({a[i] + b[i], {a[i], b[i]}});
            sort(v.begin(), v.end(), greater<pair<ll, pair<ll, ll>>>());
            for (ll i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    sum -= v[i].ss.ss;
                    sum++;
                }
                else
                {
                    sum += v[i].ss.ff;
                    sum--;
                }
            }
            cout << sum << nl;
        }
        return SH;
    }