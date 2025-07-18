#include <bits/stdc++.h>
using namespace std;

// 2025-04-13 22:03:19
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
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
        string a, b;
        cin >> a >> b;
        a.eb('#');
        b.eb('#');
        cnt = 1;
        vl v1, v2;
        for (ll i = 0; i < a.size() - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                v1.eb(cnt);
                cnt = 1;
            }
            else
                cnt++;
        }
        cnt = 1;
        for (ll i = 0; i < b.size() - 1; i++)
        {
            if (b[i] != b[i + 1])
            {
                v2.eb(cnt);
                cnt = 1;
            }
            else
                cnt++;
        }
        f = true;
        if (v1.size() != v2.size())
            f = false;
        else if (a[0] != b[0])
            f = false;
        else
        {
            for (ll i = 0; i < v1.size(); i++)
            {
                if (v2[i] > 2 * v1[i] or v1[i] > v2[i])
                    f = false;
            }
        }
        f ? yes : no;
    }
    return SH;
}