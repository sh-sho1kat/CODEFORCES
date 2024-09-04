///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-13 12:36:30
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
        ll n, m, x;
        cin >> n >> m >> x;
        set<ll> st;
        st.insert(x);
        while (m--)
        {
            ll a;
            char b;
            cin >> a >> b;
            ll p = -1;
            if (b != '?')
                p = b - '0';
            set<ll> st2;
            for (auto u : st)
            {
                if (p == -1)
                {
                    tmp = (u + a) % n;
                    if (!tmp)
                        tmp = n;
                    st2.insert(tmp);
                    tmp = (u - a + n) % n;
                    if (!tmp)
                        tmp = n;
                    st2.insert(tmp);
                }
                else if (p)
                {
                    tmp = (u - a + n) % n;
                    if (!tmp)
                        tmp = n;
                    st2.insert(tmp);
                }
                else
                {
                    tmp = (u + a) % n;
                    if (!tmp)
                        tmp = n;
                    st2.insert(tmp);
                }
            }
            st = st2;
        }
        cout << st.size() << nl;
        for (auto u : st)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}