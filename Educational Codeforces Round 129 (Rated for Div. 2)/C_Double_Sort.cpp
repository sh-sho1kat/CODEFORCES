#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

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
        bool flag = true;
        ll n;
        cin >> n;
        vector<pll> v(n);
        vector<pll> a(n);
        vector<pll> b(n);
        fr(0, n)
        {
            cin >> v[i].first;
        }
        fr(0, n)
        {
            cin >> v[i].second;
        }
        a = v;
        b = v;
        sort(v.begin(), v.end());
        fr(1, n)
        {
            if (v[i].second < v[i - 1].second)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "-1" << nl;
            continue;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[i].first > a[j].first)
                {
                    swap(a[i].first, a[j].first);
                    swap(a[i].second, a[j].second);
                    count++;
                }
                else if (a[i].first == a[j].first)
                {
                    if (a[i].second > a[j].second)
                    {
                        swap(a[i].first, a[j].first);
                        swap(a[i].second, a[j].second);
                        count++;
                    }
                }
            }
        }
        cout << count << nl;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (b[i].first > b[j].first)
                {
                    // cout << b[i].first << " " << b[j].first << nl;
                    cout << j + 1 << " " << i + 1 << nl;
                    swap(b[i].first, b[j].first);
                    swap(b[i].second, b[j].second);
                }
                else if (b[i].first == b[j].first)
                {
                    if (b[i].second > b[j].second)
                    {
                        // cout << b[i].first << " " << b[j].first << nl;
                        cout << j + 1 << " " << i + 1 << nl;
                        swap(b[i].first, b[j].first);
                        swap(b[i].second, b[j].second);
                    }
                }
            }
        }
        // for (auto u : a)
        //     cout << u.first << " " << u.second << nl;

        // cout << nl;
    }
    return SH;
}