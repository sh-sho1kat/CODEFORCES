#include <bits/stdc++.h>
using namespace std;

// 2025-02-01 22:51:23
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll fact = 0;
        ll prev = 0;
        ll left = 0, right = 0;
        ll pos2 = 0;
        ll neg2 = 0;
        ll neg1 = 0;
        for (ll i = 1; i <= n + 1; i++)
        {
            if (a[i] == 0)
            {
                ll total2 = pos2 + neg2;
                ll sign = ((neg2 + neg1) & 1);
                if (sign)
                {
                    ll curpos2 = 0;
                    for (ll j = prev + 1; j < i; j++)
                    {
                        if (a[j] == 2 or a[j] == -2)
                            curpos2++;
                        if (a[j] < 0)
                        {
                            if (total2 - curpos2 >= fact)
                            {
                                fact = total2 - curpos2;
                                left = j;
                                right = n + 1 - i;
                                break;
                            }
                        }
                    }
                    curpos2 = 0;
                    for (ll j = i - 1; j > prev; j--)
                    {
                        if (a[j] == 2 or a[j] == -2)
                            curpos2++;
                        if (a[j] < 1)
                        {
                            if (total2 - curpos2 >= fact)
                            {
                                fact = total2 - curpos2;
                                left = prev;
                                right = n + 1 - j;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    if (total2 >= fact)
                    {
                        fact = total2;
                        left = prev;
                        right = n + 1 - i;
                    }
                }
                prev = i;
                pos2 = 0;
                neg2 = 0;
                neg1 = 0;
            }
            else
            {
                if (a[i] == 2)
                    pos2++;
                if (a[i] == -2)
                    neg2++;
                if (a[i] == -1)
                    neg1++;
            }
        }
        cout << left << " " << right << nl;
    }
    return SH;
}