#include <bits/stdc++.h>
using namespace std;

// 2024-10-19 21:16:41
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
        ll n, q;
        cin >> n >> q;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        s = "#" + s;
        set<ll> st;
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            st.insert(a[i]);
            if (*st.rbegin() == i)
                mp[i] = 1;
        }
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == 'L' and s[i + 1] == 'R' and !mp[i])
                cnt++;
        }
        while (q--)
        {
            ll p;
            cin >> p;
            char ch = s[p];
            if (ch == 'R')
                s[p] = 'L';
            else
                s[p] = 'R';
            if (ch == 'L')
            {
                if (s[p + 1] == 'R')
                {
                    if (!mp[p])
                        cnt--;
                }
                if (s[p - 1] == 'L')
                {
                    if (!mp[p - 1])
                        cnt++;
                }
            }
            else if (ch == 'R')
            {
                if (s[p - 1] == 'L')
                {
                    if (!mp[p - 1])
                        cnt--;
                }
                if (s[p + 1] == 'R')
                {
                    if (!mp[p])
                        cnt++;
                }
            }

            if (cnt == 0)
                yes;
            else
                no;
        }
    }
    return SH;
}