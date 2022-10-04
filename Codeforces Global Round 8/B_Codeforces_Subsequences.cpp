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
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        // cout << "codeforce";
        // string s;
        // s = "s";
        // while (2 * s.size() < (n))
        // {
        //     s += s;
        // }
        // cout << s;
        // ll p = n - s.size();
        // for (ll i = 1; i <= p; i++)
        // {
        //     cout << 's';
        // }
        // cout << nl;
        // // cout << p << nl;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                while (n % i == 0)
                {
                    n = n / i;
                    count++;
                }
                cout << i << " " << count << nl;
                count = 0;
            }
        }
        cout << n << " 1" << nl;
    }
    return SH;
}