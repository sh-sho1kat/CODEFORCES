///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-02 14:01:35
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
        ll sum = 0, tmp = 1, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        string s = ".";
        string s1;
        cin >> s1;
        s += s1;
        ll a[n + 5];
        ll b[n + 5];
        a[0] = 1;
        tmp = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '0')
                tmp = i;
            a[i] = tmp;
        }
        tmp = n + 1;
        for (int i = n; i >= 1; i--)
        {
            if (s[i] == '1')
                tmp = i;
            b[i] = tmp;
        }
        for (ll i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << nl;
        for (ll i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << nl;
        set<pll> st;
        while (m--)
        {
            ll l, r;
            cin >> l >> r;
            cout << l << " " << r << " ";
            cout << b[l] << " " << a[r] << nl;
            if (b[l] > a[r])
                st.insert({-1, -1});
            else
                st.insert({b[l], a[r]});
        }
        cout << st.size() << nl;
    }
    return SH;
}