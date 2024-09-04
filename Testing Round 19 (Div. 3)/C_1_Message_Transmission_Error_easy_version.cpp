#include <bits/stdc++.h>
using namespace std;

// 2024-08-29 16:17:54
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
    string s;
    cin >> s;
    ll n = s.size();
    if (n == 1)
        no;
    if (n & 1)
    {
        bool flag = true;
        for (ll i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[(n / 2) + i])
                flag = false;
        }
        if (flag)
        {
            yes;
            for (ll i = 0; i <= n / 2; i++)
                cout << s[i];
            cout << nl;
        }
        else
            no;
    }
    else
    {
        bool flag = true;
        for (ll i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[(n / 2) + i - 1])
                flag = false;
        }
        if (flag)
        {
            yes;
            for (ll i = 0; i <= n / 2; i++)
                cout << s[i];
            cout << nl;
        }
        else
            no;
    }
    return SH;
}