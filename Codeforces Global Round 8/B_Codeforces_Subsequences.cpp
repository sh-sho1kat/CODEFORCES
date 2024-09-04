///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-21 01:56:33
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
    ll sum = 1, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
    bool flag = true, fun = false, f = false;
    ll n;
    cin >> n;
    ll a[15];
    for (ll i = 0; i < 10; i++)
        a[i] = 1;
    while (flag)
    {
        for (ll i = 0; i < 10; i++)
        {
            if (sum >= n)
            {
                flag = false;
                break;
            }
            sum /= a[i];
            a[i]++;
            sum *= a[i];
        }
    }
    string s = "codeforces";
    for (ll i = 0; i < 10; i++)
    {
        while (a[i]--)
        {
            cout << s[i];
        }
    }
    cout << nl;
    return SH;
}