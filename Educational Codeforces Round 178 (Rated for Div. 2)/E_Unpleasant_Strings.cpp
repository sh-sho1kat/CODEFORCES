#include <bits/stdc++.h>
using namespace std;

// 2025-04-28 15:56:06
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

ll pre[1000005][30];
ll pos[30];

int main()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (ll i = 0; i < k; i++)
        pos[i] = -1;

    for (ll i = n - 1; i >= 0; i--)
    {
        ll tmp = s[i] - 'a';
        for (ll j = 0; j < k; j++)
        {
            if (pos[j] != -1)
                pre[i][j] = pos[j];
            else
                pre[i][j] = -1;
        }
        pos[tmp] = i;
    }

    ll dp[n + 5];
    dp[n] = 0;
    for (ll i = 0; i < 26; i++)
        pos[i] = n;
    for (ll i = n - 1; i >= 0; i--)
    {
        dp[i] = inf;
        ll p = s[i] - 'a';
        for (ll j = 0; j < k; j++)
        {
            dp[i] = min(dp[i], dp[pos[j]] + 1);
        }
        pos[p] = i;
    }
    for (ll i = 0; i < 26; i++)
        pos[i] = -1;
    for (ll i = n - 1; i >= 0; i--)
        pos[s[i] - 'a'] = i;

    ll q;
    cin >> q;
    while (q--)
    {
        string t;
        cin >> t;
        bool flag = false;
        ll res = inf;
        ll curpos;
        ll tmp = t[0] - 'a';
        curpos = pos[tmp];
        if (curpos == -1)
            flag = true;
        else
        {
            for (ll i = 1; i < t.size(); i++)
            {
                tmp = t[i] - 'a';
                curpos = pre[curpos][tmp];
                if (curpos == -1)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
            res = 0;
        else
            res = dp[curpos];
        cout << res << nl;
    }
    return SH;
}