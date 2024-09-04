/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-13 23:55:18
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
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

ll dsum(string s)
{
    ll sum = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return sum;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        ll p = n / 2;
        ll q = n - p;
        if (p % 10 == 9 && q % 10 == 0 || q % 10 == 9 && p % 10 == 0)
        {
            string s = to_string(n);
            string a, b;
            ll d = 0, e = 0;
            for (ll i = 0; i < s.size(); i++)
            {
                if (d > e)
                {
                    a.push_back(((s[i] - '0') / 2) + '0');
                    b.push_back(((s[i] - '0') - (a.back() - '0')) + '0');
                    d += (s[i] - '0') / 2;
                    e += (s[i] - '0') - (a.back() - '0');
                }
                else
                {
                    b.push_back(((s[i] - '0') / 2) + '0');
                    a.push_back(((s[i] - '0') - (b.back() - '0')) + '0');
                    e += (s[i] - '0') / 2;
                    d += (s[i] - '0') - (b.back() - '0');
                }
            }
            p = stoi(a);
            q = stoi(b);
        }
        cout << p << " " << q << nl;
    }
    return SH;
}
