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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        string s;
        cin >> s;
        string p = "Yes";
        string q = "esY";
        string r = "sYe";
        ll len = s.size();
        if (s == "Y" || s == "e" || s == "s" || s == "Ye" || s == "es" || s == "sY" || s == "Yes" || s == q || s == r)
        {
            flag = true;
        }
        else if (len <= 3)
        {
            flag = false;
        }
        else
        {
            for (ll i = 0; i < len - 2; i++)
            {
                // string k = {};
                // k += s[i];
                // k += s[i + 1];
                // k += s[i + 2];
                // // cout << k << nl;
                // if (k == p)
                // {
                //     flag = false;
                //     break;
                // }
                if (s[i] == 'Y')
                {
                    string k = {};
                    k += s[i];
                    k += s[i + 1];
                    k += s[i + 2];
                    if (k != p)
                    {
                        flag = false;
                        break;
                    }
                }
                else if (s[i] == 'e')
                {
                    string k = {};
                    k += s[i];
                    k += s[i + 1];
                    k += s[i + 2];
                    if (k != q)
                    {
                        flag = false;
                        break;
                    }
                }
                else if (s[i] == 's')
                {
                    string k = {};
                    k += s[i];
                    k += s[i + 1];
                    k += s[i + 2];
                    if (k != r)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        flag ? yes : no;
    }
    return SH;
}