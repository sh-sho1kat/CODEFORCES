#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
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
        bool flag = true;
        ll n;
        cin >> n;
        char s[n + 5];
        s[0] = '0';
        fr(1, n + 1) cin >> s[i];
        for (ll i = 1; i <= n; i++)
        {
            if (s[i] == '0' || s[i] == '2')
            {
                for (ll j = i; j <= n; j += i)
                {
                    if (s[j] == '1')
                    {
                        break;
                    }
                    if (s[j] == '0')
                    {
                        sum += i;
                        // cout << i << " ";
                        s[j] = '2';
                    }
                }
                // cout << nl;
            }
        }
        // ap(s, n + 1);
        cout << sum << nl;
        // cout << nl;
    }
    return SH;
}