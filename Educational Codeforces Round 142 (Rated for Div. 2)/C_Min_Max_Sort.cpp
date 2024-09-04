///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-20 19:41:15
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        mp[0] = -inf;
        mp[n + 1] = inf;
        ll tmp1, tmp2, left, right;
        ll p = (n + 1) / 2;
        if (n & 1)
        {
            left = p;
            right = p;
            tmp1 = mp[p];
            tmp2 = mp[p];
        }
        else
        {
            left = p;
            right = p + 1;
            tmp1 = mp[p];
            tmp2 = mp[p + 1];
        }
        while (left > 0 && right <= n)
        {
            //cout << left << " " << right << nl;
            if (mp[left] <= tmp1 && mp[right] >= tmp2 && tmp1 <= tmp2)
            {
                //ok;
                //cout << tmp1 << " " << tmp2 << nl;
                cnt++;
                tmp1 = mp[left];
                left--;
                tmp2 = mp[right];
                right++;
            }
            else
                break;
        }
        cout << ((n + 1) / 2) - cnt << nl;
    }
    return SH;
}