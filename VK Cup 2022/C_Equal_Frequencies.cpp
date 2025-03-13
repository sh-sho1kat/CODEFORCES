#include <bits/stdc++.h>
using namespace std;

// 2025-01-28 02:58:14
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
        string s;
        cin >> s;
        vl v;
        for (ll i = 1; i <= min(n, 26LL); i++)
        {
            if (n % i == 0)
                v.eb(i);
        }
        sort(all(v));
        // for (auto u : v)
        //     cout << u << " ";
        // cout << nl;
        map<char, ll> mp;
        vector<pair<ll, char>> freq;
        for (char ch = 'a'; ch <= 'z'; ch++)
            mp[ch] = 0;
        for (ll i = 0; i < n; i++)
            mp[s[i]]++;
        for (auto u : mp)
            freq.eb({u.ss, u.ff});
        sort(all(freq), greater<pair<ll, char>>());
        res = n;
        string result = s;
        for (auto u : v)
        {
            ans = 0;
            string b = s;
            for (ll i = 0; i < u; i++)
            {
                tmp = min(freq[i].ff, n / u);
                ans += tmp;
                for (ll j = 0; j < n; j++)
                {
                    if (b[j] == freq[i].ss)
                    {
                        if (tmp)
                            tmp--;
                        else
                            b[j] = '.';
                    }
                }
            }
            for (ll i = u; i < 26; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    if (b[j] == freq[i].ss)
                    {
                        b[j] = '.';
                    }
                }
            }
            map<char, ll> mp;
            for (ll i = 0; i < n; i++)
                mp[b[i]]++;
            ll frequency = n / u;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (mp[ch])
                {
                    for (ll i = 0; i < n; i++)
                    {
                        if (b[i] == '.' and mp[ch] < frequency)
                        {
                            b[i] = ch;
                            mp[ch]++;
                        }
                    }
                }
            }
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (b[i] == '.' and mp[ch] < frequency)
                    {
                        b[i] = ch;
                        mp[ch]++;
                    }
                }
            }
            if (n - ans < res)
            {
                res = n - ans;
                result = b;
            }
        }
        cout << res << nl;
        cout << result << nl;
    }
    return SH;
}