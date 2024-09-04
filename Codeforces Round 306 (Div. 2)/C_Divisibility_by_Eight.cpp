///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-23 11:26:08
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
    ll ans = -1;
    ll num;
    for (ll i = 0; i < n; i++)
    {
        num = (s[i] - '0');
        if (num % 8 == 0)
            ans = num;
        for (ll j = i + 1; j < n; j++)
        {
            num = (s[i] - '0') * 10 + (s[j] - '0') * 1;
            if (num % 8 == 0)
                ans = num;
            for (ll k = j + 1; k < n; k++)
            {
                num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0') * 1;
                if (num % 8 == 0)
                    ans = num;
            }
        }
    }
    if (ans < 0)
        no;
    else
    {
        yes;
        cout << ans << nl;
    }
    return SH;
}
