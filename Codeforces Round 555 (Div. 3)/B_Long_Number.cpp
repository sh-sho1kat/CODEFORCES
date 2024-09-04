///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-12 15:22:40
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<ll, ll> mp;
    for (ll i = 1; i <= 10; i++)
    {
        ll p;
        cin >> p;
        mp[i] = p;
    }
    ll flag = false;
    for (ll i = 0; i < n; i++)
    {
        ll p = s[i] - '0';
        if (p < mp[p])
            flag = true;
        if (p <= mp[p])
        {
            s[i] = mp[p] + '0';
        }
        else if (flag)
            break;
    }
    cout << s << nl;
    return SH;
}