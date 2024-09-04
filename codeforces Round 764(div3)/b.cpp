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
    vpll v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        a /= 2;
        b /= 2;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    // cout << v.size() << nl;
    //  for (auto u : v)
    //  {
    //      cout << u.ff << " " << u.ss << nl;
    //  }
    ll len = v.size();
    ll sum = 0;
    sum = v[len - 1].first * v[len - 1].second;
    ll tmp1 = v[len - 1].first;
    ll tmp2 = v[len - 1].second;
    for (ll i = v.size() - 1; i >= 0; i--)
    {
        if (v[i].second > tmp2)
        {

            sum += v[i].first * (v[i].second - tmp2);
            tmp2 = v[i].second;
        }
    }
    cout << 4 * sum << nl;
    return SH;
}