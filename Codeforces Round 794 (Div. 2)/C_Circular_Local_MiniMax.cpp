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
        bool flag = false, check = false;
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        map<ll, ll> mp;
        fr(0, n) cin >> a[i];
        sort(all(a));
        fr(0, n)
        {
            mp[a[i]]++;
        }
        for (auto u : mp)
        {
            if (u.second > n / 2)
                flag = true;
        }
        if (flag || n & 1 || (a[(n / 2) - 1] == a[n - 2]))
        {
            no;
            continue;
        }
        ll i, j = 0;
        for (i = 0; i < n / 2; i++)
        {
            b[j] = a[i];
            b[j + 1] = a[n / 2 + i];
            j += 2;
        }
        if (b[0] > b[1])
        {
            for (ll i = 1; i < n - 1; i += 2)
            {
                if (b[i] >= b[i - 1] || b[i] >= b[i + 1])
                {
                    check = true;
                }
            }
        }
        if (b[0] < b[1])
        {
            for (ll i = 1; i < n - 1; i += 2)
            {
                if (b[i] <= b[i - 1] || b[i] <= b[i + 1])
                {
                    check = true;
                }
            }
        }
        if (check)
            no;
        else
        {
            yes;
            fr(0, n) cout << b[i] << " ";
            cout << nl;
        }
    }
    return SH;
}