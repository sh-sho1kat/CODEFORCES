#include <bits/stdc++.h>
using namespace std;

// 2025-01-31 00:57:05
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
typedef int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

vector<int> ans;
map<char, ll> mp;
string s, b;
long long res;
long long ct;
long long cnt;

void gen(ll n, ll k, ll idx, bool rev)
{
    if (k > n || k < 0)
        return;

    if (!n)
    {
        cnt = 0;
        ct = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (ans[mp[s[i]]] or s[i] == b[i])
                cnt++;
            else
                cnt = 0;
            ct += cnt;
        }
        res = max(res, ct);
        return;
    }

    ans[idx] = rev;
    gen(n - 1, k - rev, idx + 1, false);
    ans[idx] = !rev;
    gen(n - 1, k - !rev, idx + 1, true);
}

void all_combinations(ll n, ll k)
{
    ans.resize(n);
    res = 0;
    gen(n, k, 0, false);
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        cin >> s >> b;
        set<char> st;
        for (auto u : s)
            st.insert(u);
        vector<char> freq;
        for (auto u : st)
            freq.eb(u);
        mp.clear();
        for (ll i = 0; i < freq.size(); i++)
            mp[freq[i]] = i;
        ll N = st.size();
        all_combinations(N, min(N, k));
        cout << res << nl;
    }
    return SH;
}