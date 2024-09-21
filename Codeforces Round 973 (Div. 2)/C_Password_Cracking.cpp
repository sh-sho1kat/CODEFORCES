#include <bits/stdc++.h>
using namespace std;

// 2024-09-20 23:22:35
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        string s;
        cout << "? 0" << nl;
        ll p;
        cin >> p;
        if (p)
            s.push_back('0');
        else
            s.push_back('1');
        while (true)
        {
            if (s.size() == n)
                break;
            string s1;
            s1 = s;
            s1.push_back('0');
            cout << "? " << s1 << nl;
            bool rep1, rep2;
            cin >> rep1;
            s1.pop_back();
            s1.push_back('1');
            cout << "? " << s1 << nl;
            cin >> rep2;
            if (rep1)
                s.push_back('0');
            else if (rep2)
                s.push_back('1');
            else
                break;
        }
        while (true)
        {
            if (s.size() == n)
            {
                cout << "! " << s << nl;
                break;
            }
            string s1;
            s1 = "0" + s;
            cout << "? " << s1 << nl;
            ll rep;
            cin >> rep;
            if (rep)
                s = "0" + s;
            else
                s = "1" + s;
        }
    }
    return SH;
}