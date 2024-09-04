///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-18 14:50:33
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() == s2.size())
        {
            for (ll i = 0; i < s1.size(); i++)
            {
                if ((abs((s1[i] - '0') - (s2[i] - '0')) != 0))
                {
                    sum += abs((s1[i] - '0') - (s2[i] - '0'));
                    sum += (9 * (s1.size() - i - 1));
                    break;
                }
            }
        }
        else
        {
            if (s1.size() > s2.size())
            {
                sum = s1[0] - '0';
                sum += (s1.size() - 1) * 9;
            }
            else
            {
                sum = s2[0] - '0';
                sum += (s2.size() - 1) * 9;
            }
        }
        cout << sum << nl;
    }
    return SH;
}