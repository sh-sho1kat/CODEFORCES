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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
        map<ll, ll> mp;
        vl v[n];
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            while (p--)
            {
                ll q;
                cin >> q;
                v[i].push_back(q);
                mp[q]++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cnt = 0;
            for (auto u : v[i])
            {
                if ((mp[u] - 1) == 0)
                    cnt++;
            }
            if (cnt == 0)
            {
                fun = true;
            }
        }
        if (fun)
            yes;
        else
            no;
    }
    return SH;
}