    #include <bits/stdc++.h>
    using namespace std;

    // 2024-12-22 20:43:05
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
            ll n, a, b, c;
            cin >> n >> a >> b >> c;
            sum = a + b + c;
            res = n / sum;
            res *= 3;
            n = n % sum;
            if (n > 0)
                res++, n -= a;
            if (n > 0)
                res++, n -= b;
            if (n > 0)
                res++;
            cout << res << nl;
        }
        return SH;
    }