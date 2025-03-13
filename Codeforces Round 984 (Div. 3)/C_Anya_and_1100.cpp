#include <bits/stdc++.h>
using namespace std;

// 2024-11-09 09:41:45
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
        string s;
        cin >> s;
        s = "#" + s;
        map<ll, bool> mp;
        ll n = s.size();
        for (ll i = 1; i < n - 3; i++)
        {
            if (s[i] == '1' and s[i + 1] == '1' and s[i + 2] == '0' and s[i + 3] == '0')
            {
                mp[i] = true;
                cnt++;
            }
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll idx, ch;
            cin >> idx >> ch;
            s[idx] = ch + '0';
            ll st = max(1LL, idx - 3);
            ll ed = min(idx, n - 4);
            for (ll i = st; i <= ed; i++)
            {
                fun = false;
                if (s[i] == '1' and s[i + 1] == '1' and s[i + 2] == '0' and s[i + 3] == '0')
                {
                    fun = true;
                }
                if (!fun and mp[i])
                {
                    mp[i] = false;
                    cnt--;
                }
                if (fun and !mp[i])
                {
                    mp[i] = true;
                    cnt++;
                }
            }
            cnt ? yes : no;
        }
    }
    return SH;
}