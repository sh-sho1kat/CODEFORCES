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
        map<char, ll> mep;
        for (ll i = 0; i < s.size(); i++)
        {
            if (mep[s[i]])
                break;
            mep[s[i]]++;
        }
        // cout << mep.size() << nl;
        ll len = mep.size();
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mep[i])
            {
                ll j = 0;
                while (s[j] != i)
                {
                    tmp = j + 1;
                    j++;
                }
                for (ll k = tmp; k < s.size(); k += len)
                {
                    if (s[k] != i && k < s.size())
                        flag = false;
                }
                tmp = 0;
            }
        }
        flag ? yes : no;
    }
    return SH;
}