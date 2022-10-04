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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, char> mp;
        string p;
        char a = 'a';
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == a)
            {
                a++;
            }

            if (mp[s[i]] == '\0')
            {
                if (a == '{')
                {
                    mp[s[i] == 'a'];
                    p += 'a';
                    a++;
                }
                else if (a == '|')
                {
                    mp[s[i] == 'z'];
                    p += 'z';
                    a++;
                }
                else
                {
                    mp[s[i]] = a;
                    p += a;
                    a++;
                }
            }
            else
                p.push_back(mp[s[i]]);
        }
        for (ll i = 1; i < p.size(); i++)
        {
            if ((p[i] - p[i - 1]) != 1)
            {
                flag = false;
            }
        }
        if (flag && n != 1 && p[0] == 'a')
        {
            p[p.size() - 1]++;
        }
        cout << p << nl;
    }
    return SH;
}