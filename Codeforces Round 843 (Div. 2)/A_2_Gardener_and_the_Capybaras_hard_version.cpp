//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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
        bool flag = true, fun = false;
        string s;
        cin >> s;
        if (s[0] == s[s.size() - 1])
        {
            cout << s[0] << " ";
            for (ll i = 1; i < s.size() - 1; i++)
            {
                cout << s[i];
            }
            cout << " " << s[s.size() - 1] << nl;
        }
        else if (s[0] == 'a' and s[s.size() - 1] == 'b')
        {
            for (ll i = 0; i < s.size() - 2; i++)
            {
                cout << s[i];
            }
            cout << " " << s[s.size() - 2] << " " << s[s.size() - 1] << nl;
        }
        else
        {
            cout << s[0] << " " << s[1] << " ";
            for (ll i = 2; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << nl;
        }
    }
    return SH;
}