///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-30 08:59:44
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// return a random number in [l, r] range
ll rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r)(rng);
}
int main()
{
    fastio;
    freopen("gen.txt", "w", stdout);
    ll cnt = 0;
    map<ll, ll> mp;
    for (ll i = 1; i <= 1000000; i++)
    {
        set<ll> st;
        st.insert(5);
        ll b = rand(1, 9);
        ll c = rand(1, 9);
        ll d = rand(1, 9);
        st.insert(b);
        st.insert(c);
        st.insert(d);
        if (st.size() < 4)
            continue;
        ll n = b * 100 + c * 10 + d;
        if (mp[n] == 0)
        {
            cout << "Test Case " << cnt + 1 << nl;
            cout << nl;
            cout << 5 << " " << b << nl;
            cout << c << " " << d << nl;
            cout << nl;
            cout << nl;

            if (b == 6 and c != 4 && d != 4)
                yes;
            else if (b == 4 and c != 6 && d != 6)
                yes;
            else if (b == 2 and c != 8 && d != 8)
                yes;
            else if (b == 8 and c != 2 && d != 2)
                yes;
            else if (b == 1 and c != 9 && d != 9)
                yes;
            else if (b == 9 and c != 1 && d != 1)
                yes;
            else if (b == 3 and c != 7 && d != 7)
                yes;
            else if (b == 7 and c != 3 && d != 3)
                yes;
            else
                no;
            cout << nl;
            cout << nl;
            cout << nl;
            cnt++;
        }
        mp[n]++;
    }
    cout << cnt << nl;

    return SH;
}