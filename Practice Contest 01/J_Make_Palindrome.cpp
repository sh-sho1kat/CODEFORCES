///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-12 09:19:18
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
    ll len = s.size();
    sort(s.begin(), s.end());
    string str = s;
    ll i = 0, j = 0;
    while ((i < len - 1) && j * 2 < len)
    {
        str[j] = s[i];
        str[len - j - 1] = s[i];
        if (s[i] == s[i + 1])
            i++;
        i++;
        j++;
    }
    for (ll i = 0; i < len; i++)
        cout << str[i];
    cout << nl;
    return SH;
}