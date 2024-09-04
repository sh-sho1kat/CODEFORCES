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
#define ap(arr, n)              \
    for (ll i = 1; i <= n; i++) \
        cout << arr[i] << " ";  \
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
        ans = n;
        res = n;
        ll a[n + 5];
        fr(1, n + 1)
        {
            cin >> a[i];
        }
        sum = a[1];
        fr(2, n + 1)
        {
            a[i - 1] = sum;
            sum += a[i];
        }
        a[n] = sum;
        // ap(a, n);

        // for (ll i = 0; i < n; i++)
        // {

        //     ll j = i;
        //     ll mem = j;
        //     tmp = a[i];
        //     if ((a[n - 1] % a[j]) == 0 && a[j] != 1 && a[n - 1] / a[j] <= n - i)
        //     {
        //         res = i + 1;
        //         while (j < n)
        //         {
        //             if (a[j] == tmp)
        //             {
        //                 tmp += a[i];
        //                 res = max(res, j - mem);
        //                 // cout << res << " ";
        //                 mem = j;
        //             }
        //             j++;
        //         }
        //     }
        //     ans = min(ans, res);
        //     // cout << ans << nl;
        // }
        // cout << ans << nl;
        // ap(a, n);
        for (ll i = 1; i <= n; i++)
        {
            ll j, k;
            j = i;
            k = i;
            res = j;
            while (j <= n)
            {

                if ((a[j] - a[k]) == a[i])
                {
                    res = max(res, j - k);
                    k = j;
                    j++;
                }
                else if (((a[j] - a[k]) > a[i]) || j == n)
                {
                    res = ans;
                    break;
                }
                else if ((a[j] - a[k]) < a[i])
                {
                    j++;
                }
            }
            ans = min(ans, res);
            // cout << ans << " ";
        }
        cout << ans << nl;
    }
    return SH;
}