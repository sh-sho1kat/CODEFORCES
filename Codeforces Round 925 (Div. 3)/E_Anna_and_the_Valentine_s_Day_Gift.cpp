///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-14 07:38:36
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
#define yes cout << "Sasha" << endl
#define no cout << "Anna" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

bool cmp(const ll &p1, const ll &p2)
{
    ll cnt1 = 0, cnt2 = 0;
    ll num = 10;
    while (p1 % num == 0)
    {
        cnt1++;
        num *= 10;
    }
    num = 10;
    while (p2 % num == 0)
    {
        cnt2++;
        num *= 10;
    }
    // cout << cnt1 << " " << cnt2 << nl;
    return cnt1 >= cnt2;
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
        ll n, k;
        cin >> n >> k;
        vl v;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            sum += s.size();
            cnt = 0;
            while (s.back() == '0')
            {
                cnt++;
                s.pop_back();
            }
            v.eb(cnt);
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll i = 0; i < v.size(); i += 2)
            sum -= v[i];
        sum >= ++k ? yes : no;
    }
    return SH;
}