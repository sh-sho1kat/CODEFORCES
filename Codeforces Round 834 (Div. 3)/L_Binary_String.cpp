///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-26 15:32:13
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
    __int64_t n;
    cin >> n;
    string bin, p;
    cin >> bin;
    __int64_t num = btod(bin);
    p = dtob(64, n);
    int bit = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            bit = i;
            break;
        }
    }
    ll cnt = 0;
    while (num > n)
    {
        for (ll i = 0; i < bin.size(); i++)
        {
            if (bin[i] == '1')
            {
                cnt++;
                cout << num << nl;
                cout << bin << nl;
                bin.erase(bin.begin() + i);
                cout << bin << nl;
                break;
            }
        }
        num = btod(bin);
    }
    cout << cnt << nl;
    return SH;
}