///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-08 06:17:43
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
        string a, b;
        cin >> a >> b;
        ll j = a.size() - 1;
        vl v;
        for (ll i = b.size() - 1; i >= 0; i--)
        {
            ll p = 10 + (b[i] - '0');
            ll q = a[j] - '0';
            if (b[i - 1] == '1' && i > 0 && p - q < 10)
            {
                v.eb(p - q);
                i--;
                j--;
            }
            else if (b[i] >= a[j])
            {
                v.eb(b[i] - a[j]);
                j--;
            }
            else
                flag = false;
            if (j < 0)
            {
                for (ll k = i - 1; k >= 0; k--)
                    v.eb(b[k] - '0');
                break;
            }
            if (i <= 0 && j >= 0)
                flag = false;
        }
        reverse(v.begin(), v.end());

        if (flag)
        {
            fun = false;
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i])
                {
                    cout << v[i];
                    fun = true;
                }
                else if (fun)
                    cout << v[i];
            }
            cout << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}