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
        string s;
        vector<char> p(n);
        cin >> s;
        if (s[0] < s[n - 1])
        {
            for (ll i = 0; 2 * i < n; i++)
            {
                if (s[i] > s[n - i - 1])
                {
                    p[n - i - 1] = ((s[i] - '0') - (s[n - i - 1] - '0')) + '0';
                    p[i] = '0';
                }
                else
                {
                    p[i] = ((s[n - i - 1] - '0') - (s[i] - '0')) + '0';
                    p[n - i - 1] = '0';
                }
            }
        }
        else if ((s[0] >= s[n - 1]) && s[0] != '9')
        {
            p[0] = '1';
            p[n - 1] = ((s[0] - '0') - (s[n - 1] - '0') + 1) + '0';
            for (ll i = 1; 2 * i < n; i++)
            {
                if (s[i] > s[n - i - 1])
                {
                    p[n - i - 1] = ((s[i] - '0') - (s[n - i - 1] - '0')) + '0';
                    p[i] = '0';
                }
                else
                {
                    p[i] = ((s[n - i - 1] - '0') - (s[i] - '0')) + '0';
                    p[n - i - 1] = '0';
                }
            }
        }
        else
        {
            if (s[n - 1] == '0')
                p[n - 1] = '1';
            else if (s[n - 1] == '1')
                p[n - 1] = '0';
            else
                p[n - 1] = (11 - (s[n - 1] - '0')) + '0';
            for (ll i = n - 2; i > 0; i--)
            {
                if (s[i] == '0')
                {
                    if (((s[i + 1] - '0') + (p[i + 1] - '0')) >= 10)
                    {
                        p[i] = '0';
                    }
                    else
                    {
                        p[i] = '1';
                    }
                }
                else if (s[i] == '1')
                {
                    if (((s[i + 1] - '0') + (p[i + 1] - '0')) >= 10)
                    {
                        p[i] = '9';
                    }
                    else
                    {
                        p[i] = '0';
                    }
                }
                else
                {
                    if (((s[i + 1] - '0') + (p[i + 1] - '0')) >= 10)
                    {
                        p[i] = (10 - (s[i] - '0')) + '0';
                    }
                    else
                    {
                        p[i] = (11 - (s[i] - '0')) + '0';
                    }
                }
            }
            if (((s[1] - '0') + (p[1] - '0')) >= 10)
            {
                p[0] = '1';
            }
            else
            {
                p[0] = '2';
            }
        }
        for (auto u : p)
            cout << u;
        cout << nl;
    }
    return SH;
}