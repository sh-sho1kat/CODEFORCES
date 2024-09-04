/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-19 17:11:45
 **/

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
        ll n;
        cin >> n;
        vl v;
        fr(0, n)
        {
            ll p;
            cin >> p;
            v.eb(p);
        }
        sort(all(v));
        for (ll i = 1; i < v.size(); i++)
        {
            // cout << v[i] - v[i - 1] << " ";
            if ((v[i] - v[i - 1]) >= 240)
            {
                cnt += 2;
            }
            if ((v[i] - v[i - 1]) >= 120)
            {
                cnt++;
            }
        }
        if (v[0] >= 240)
            cnt += 2;
        else if (v[0] >= 120)
            cnt++;
        if ((1440 - v[v.size() - 1]) >= 240)
            cnt += 2;
        else if ((1440 - v[v.size() - 1]) >= 120)
            cnt++;
        cnt > 1 ? yes : no;
    }
    return SH;
}