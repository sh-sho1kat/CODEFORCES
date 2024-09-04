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

bool pal(ll tim)
{
    ll hour = tim / 60;
    ll min = tim % 60;
    // cout << hour << " " << min << nl;
    ll original = hour;
    ll tmp = min / 10;
    ll tmp2 = min % 10;
    ll reversed = tmp2 * 10 + tmp;

    if (original == reversed)
    {

        return true;
    }

    else
        return false;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = false;
        string s;
        cin >> s;
        ll n;
        cin >> n;
        ll h = ((s[0] - '0') * 10) + (s[1] - '0');
        ll m = ((s[3] - '0') * 10) + (s[4] - '0');
        ll time = h * 60 + m;
        // cout << time << endl;
        ll ttime = time;
        for (ll i = 1;; i++)
        {
            if ((ttime % 1440) == time && flag)
                break;
            if (pal(ttime % 1440))
            {
                count++;
            }
            ttime += n;
            flag = true;
        }
        cout << count << nl;
    }
    return SH;
}