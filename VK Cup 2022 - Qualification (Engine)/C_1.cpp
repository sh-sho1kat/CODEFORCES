/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-12 22:34:52
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
    for (ll i = 1; i < n; i++) \
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
        bool flag = false, fun = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        ll freq[500] = {};
        for (ll i = 0; i < n; i++)
        {
            freq[a[i] + 1]++;
        }
        for (ll i = 2; i <= 105; i++)
        {
            if (freq[i] == 0)
            {
                for (ll j = i - 1; j >= 1; j--)
                {
                    if (freq[j] == 0)
                    {
                        if (flag)
                        {
                            cnt++;
                        }
                        else
                        {
                            break;
                        }
                        flag = false;
                    }
                    else
                    {
                        cnt++;
                    }
                    if (freq[j] > 1)
                        flag = true;
                }
                for (ll j = i + 1; freq[j] != 0; j++)
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt);
            cnt = 0;
        }
        cout << ans << nl;
        // ap(freq, 11);
    }
    return SH;
}