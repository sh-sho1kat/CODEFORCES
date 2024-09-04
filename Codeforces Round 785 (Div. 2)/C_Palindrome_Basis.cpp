//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

vl v;
ll dp[500][40005];
void palindrome()
{
    for (ll i = 1; i <= 40000; i++)
    {
        string s1 = to_string(i);
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s2 == s1)
            v.eb(i);
    }
}

ll ways(ll i, ll sum)
{
    if (sum < 0)
        return 0;
    if (sum == 0)
        return 1;
    if (v.size() == i)
        return 0;
    if (dp[i][sum] != -1)
        return dp[i][sum];

    return dp[i][sum] = (ways(i + 1, sum) + ways(i, sum - v[i])) % mod;
}

int main()
{
    fastio;
    palindrome();
    memset(dp, -1, sizeof(dp));
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        cout << ways(0, n) << nl;
    }
    return SH;
}