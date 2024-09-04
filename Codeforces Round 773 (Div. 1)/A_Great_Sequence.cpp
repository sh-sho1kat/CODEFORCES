//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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
        ll n, x;
        cin >> n >> x;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        sort(a, a + n);
        map<ll, ll> mp;
        fr(0, n) mp[a[i]]++;
        for (ll i = 0; i < n; i++)
        {
            if (mp[x * a[i]] && mp[a[i]])
            {
                mp[x * a[i]]--;
                mp[a[i]]--;
            }
        }
        for (auto u : mp)
        {
            if (u.ss)
                sum += u.ss;
        }
        cout << sum << nl;
    }
    return SH;
}