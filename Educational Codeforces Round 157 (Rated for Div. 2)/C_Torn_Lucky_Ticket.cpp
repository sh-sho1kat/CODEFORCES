///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-05 04:59:42
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

bool cmp(const string &p1, const string &p2)
{
    return p1.size() < p2.size();
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<string> v;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < v[i].size(); j++)
        {
            sum += (v[i][j] - '0');
        }
        mp[{v[i].size(), sum}]++;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll len = v[i].size();
        ll ln = (len / 2);
        ll sm = 0;
        ll total = 0;
        for (ll j = 0; j < v[i].size(); j++)
        {
            total += (v[i][j] - '0');
        }
        for (ll j = 0; j < ln; j++)
            sm += (v[i][j] - '0');
        for (ll j = ln; j < len; j++)
        {
            sm += (v[i][j] - '0');
            ans += mp[{(2 * (j + 1) - len), 2 * sm - total}];
        }
        sm = 0;
        ln = (len + 1) / 2;
        for (ll j = len - 1; j >= ln; j--)
            sm += (v[i][j] - '0');
        for (ll j = ln - 1; j > 0; j--)
        {
            sm += (v[i][j] - '0');
            ans += mp[{(len - 2 * j), 2 * sm - total}];
        }
    }
    cout << ans << nl;

    return SH;
}