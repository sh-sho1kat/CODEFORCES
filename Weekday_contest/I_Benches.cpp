    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
    #define mod 1000000007
    #define all(x) x.begin(), x.end()
    #define eb emplace_back
    #define pf push_front
    #define mp make_pair
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
        ll n;
        cin >> n;
        ll m;
        cin >> m;
        ll a[n + 5];
        fr(0, n) cin >> a[i];

        sort(a, a + n);
        ll tmp = a[n - 1] * n;
        ll maax = a[n - 1] + m;

        ll sum = 0;
        fr(0, n)
        {
            sum += a[i];
        }
        ll p;
        ll ans = a[n - 1];
        p = (sum + m) / n;
        // cout << p << nl;
        // ok;
        if ((sum + m) % n != 0)
        {
            p += 1;
        }
        ans = max(ans, p);
        cout << ans << " " << maax << nl;

        return SH;
    }