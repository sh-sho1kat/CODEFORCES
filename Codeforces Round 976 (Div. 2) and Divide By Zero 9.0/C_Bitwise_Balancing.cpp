#include <bits/stdc++.h>
using namespace std;

// 2024-09-30 00:13:58
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
        ll b, c, d;
        cin >> b >> c >> d;
        string B = dtob(61, b);
        string C = dtob(61, c);
        string D = dtob(61, d);
        string A;
        for (ll i = 0; i < 61; i++)
        {
            if (D[i] == '0')
            {
                if (B[i] == '1' and C[i] == '0')
                    flag = false;
                else if (B[i] == '1' and C[i] == '1')
                    A.push_back('1');
                else if (B[i] == '0' and C[i] == '1')
                    A.push_back('1');
                else if (B[i] == '0' and C[i] == '0')
                    A.push_back('0');
            }
            else
            {
                if (B[i] == '1' and C[i] == '0')
                    A.push_back('1');
                else if (B[i] == '1' and C[i] == '1')
                    A.push_back('0');
                else if (B[i] == '0' and C[i] == '1')
                    flag = false;
                else if (B[i] == '0' and C[i] == '0')
                    A.push_back('1');
            }
        }
        ll num = btod(A);
        if (flag)
            cout << num << nl;
        else
            cout << -1 << nl;
    }
    return SH;
}