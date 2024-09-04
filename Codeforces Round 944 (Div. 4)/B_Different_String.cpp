#include <bits/stdc++.h>
using namespace std;

// 2024-05-10 20:40:20
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
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        string s;
        cin >> s;
        string p = s;
        string q = s;
        sort(q.begin(), q.end());
        sort(s.begin(), s.end());
        if (s[0] == s[s.size() - 1])
            no;
        else
        {
            yes;
            swap(s[0], s[s.size() - 1]);
            if (p == s)
                cout << q << nl;
            else
                cout << s << nl;
        }
    }
    return SH;
}