#include <bits/stdc++.h>
using namespace std;

// 2025-01-25 11:25:51
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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
        ll n, m;
        cin >> n >> m;
        ll a[m + 5];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            mp[p]++;
        }
        priority_queue<ll> pq;
        for (ll i = 0; i < m; i++)
            cin >> a[i], pq.push(a[i]);
        sort(a, a + m);
        cnt = n;
        while (!pq.empty())
        {
            ll val = pq.top();
            ll p = val / 2;
            ll q = (val + 1) / 2;
            if (val == 1 and !mp[1])
            {
                flag = false;
                break;
            }
            if (pq.size() > cnt)
            {
                flag = false;
                break;
            }
            if (mp[val])
            {
                mp[val]--;
                cnt--;
                pq.pop();
            }
            else if (mp[val / 2] and mp[(val + 1) / 2] and p != q)
            {
                mp[val / 2]--;
                mp[(val + 1) / 2]--;
                cnt -= 2;
                pq.pop();
            }
            else if (mp[val / 2] > 1 and p == q)
            {
                mp[val / 2]--;
                mp[(val + 1) / 2]--;
                cnt -= 2;
                pq.pop();
            }
            else if (mp[(val + 1) / 2])
            {
                pq.pop();
                mp[(val + 1) / 2]--;
                cnt--;
                pq.push(val / 2);
            }
            else if (mp[val / 2])
            {
                mp[val / 2]--;
                cnt--;
                pq.pop();
                pq.push((val + 1) / 2);
            }
            else
            {
                pq.pop();
                pq.push(val / 2);
                pq.push((val + 1) / 2);
            }
        }
        for (auto u : mp)
            if (u.ss)
                flag = false;
        flag ? yes : no;
    }
    return SH;
}