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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 1;
        bool flag = true;
        string s;
        cin >> s;
        ll sus = 0;
        bool f = false;
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                sus = 1;
                f = true;
            }
            else if (s[i] == '?')
            {
                sus++;
                f = true;
            }
            else if ((s[i] == '1'))
            {
                if (f == false)
                {
                    ans = 1;
                    flag = false;
                }
                else
                {
                    ans += sus;
                    flag = false;
                }
                break;
            }
        }
        if (flag)
            ans = sus;
        cout << ans << nl;
    }
    return SH;
}