#include <bits/stdc++.h>
using namespace std;

// 2025-06-12 21:15:56
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
        ll n, k;
        cin >> n >> k;
        ll p[n + 5], d[n + 5];
        p[0] = -1;
        for (ll i = 1; i <= n; i++)
            cin >> p[i];
        for (ll i = 1; i <= n; i++)
            cin >> d[i];
        ll q;
        cin >> q;
        while (q--)
        {
            map<pll, bool> mp;
            ll pos;
            cin >> pos;
            ll curpos = n + 1;
            ll time = 0;
            for (ll i = 1; i <= n; i++)
            {
                if (p[i] >= pos)
                {
                    curpos = i;
                    time = p[i] - pos;
                    break;
                }
            }
            flag = true;
            ll dir = 1;
            while (1)
            {
                if (curpos <= 0)
                    break;

                if (curpos > n)
                    break;

                // cout << time << " " << curpos << " " << dir << nl;
                if (time < d[curpos])
                {
                    // cout << "ok1" << nl;
                    if (dir)
                    {
                        curpos++;
                        time += p[curpos] - p[curpos - 1];
                    }
                    else
                    {
                        curpos--;
                        time += p[curpos + 1] - p[curpos];
                    }
                }
                else
                {
                    // cout << "ok2" << nl;
                    ll green = (time - d[curpos]) % k;
                    if (!green)
                    {
                        if (mp[{curpos, dir}])
                        {
                            flag = false;
                            break;
                        }
                        mp[{curpos, dir}] = 1;
                        dir = !dir;
                    }
                    if (dir)
                    {
                        curpos++;
                        time += p[curpos] - p[curpos - 1];
                    }
                    else
                    {
                        curpos--;
                        time += p[curpos + 1] - p[curpos];
                    }
                }
            }
            flag ? yes : no;
        }
    }
    return SH;
}