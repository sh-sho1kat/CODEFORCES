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
        string a;
        string b;
        cin >> a >> b;
        ll cnt1 = 0, cnt2 = 0;
        fr(0, a.size())
        {
            if (a[i] == 'X')
            {
                cnt1++;
            }
        }
        fr(0, b.size())
        {
            if (b[i] == 'X')
            {
                cnt2++;
            }
        }
        ll aa = a.size();
        ll bb = b.size();
        ll gg = 0, st = 0, ss = 0;
        if (a[aa - 1] == 'S')
        {
            if (b[bb - 1] == 'S')
            {
                if (cnt1 > cnt2)
                {
                    st = 1;
                }
                else if (cnt2 > cnt1)
                {
                    gg = 1;
                }
                else
                {
                    ss = 1;
                }
            }
            else if (b[bb - 1] == 'M')
            {
                st = 1;
            }
            else
            {
                st = 1;
            }
        }
        else if (a[aa - 1] == 'L')
        {
            if (b[bb - 1] == 'L')
            {
                if (cnt1 > cnt2)
                {
                    gg = 1;
                }
                else if (cnt2 > cnt1)
                {
                    st = 1;
                }
                else
                {
                    ss = 1;
                }
            }
            else if (b[bb - 1] == 'M')
            {
                gg = 1;
            }
            else
            {
                gg = 1;
            }
        }
        else if (a[aa - 1] == 'M')
        {
            if (b[bb - 1] == 'S')
            {
                gg = 1;
            }
            else if (b[bb - 1] == 'L')
            {
                st = 1;
            }
            else
            {
                ss = 1;
            }
        }
        if (gg)
        {
            cout << ">" << nl;
        }
        else if (st)
        {
            cout << "<" << nl;
        }
        else
        {
            cout << "=" << nl;
        }
    }
    return SH;
}