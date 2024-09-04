///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-11 15:28:41
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

ll sod(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
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
        ll n, q;
        cin >> n >> q;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        set<ll> st;
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            st.insert(i);
        while (q--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                ll l, r;
                cin >> l >> r;
                auto p1 = st.lower_bound(l);
                auto p2 = st.upper_bound(r);
                for (auto it = p1; it != p2;)
                {
                    if (mp[*it] >= 3)
                    {
                        ll p = *it;
                        st.erase(it);
                        it = st.lower_bound(p);
                    }
                    else
                    {
                        mp[*it]++;
                        a[*it] = sod(a[*it]);
                        it++;
                    }
                }
            }
            else
            {
                ll pos;
                cin >> pos;
                cout << a[pos] << nl;
            }
        }
    }
    return SH;
}