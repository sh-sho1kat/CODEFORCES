///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-26 12:27:50
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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
    vector<int> nums = {1, 5, 11, 5};
    int n = nums.size();
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++)
        v[i] = nums[i - 1];
    int total = 0;
    for (int i = 0; i < n; i++)
        total += nums[i];
    int dp[201][10001]={};
    for (int pos = 0; pos <= n; pos++)
    {
        for (int sum = 0; sum <= total; sum++)
        {
            if (pos == 0)
                dp[pos][sum] = false;
            if (sum == 0)
                dp[pos][sum] = true;
            else
                dp[pos][sum] = false;
        }
    }
    for (int pos = 1; pos <= n; pos++)
    {
        for (int sum = 0; sum <= total; sum++)
        {
            if (sum >= v[pos])
                dp[pos][sum] = dp[pos - 1][sum] || dp[pos - 1][sum - v[pos]];
            else
                dp[pos][sum] = dp[pos - 1][sum];
        }
    }
    if (total & 1)
        cout << 0 << nl;
    else
        cout << dp[n][total / 2] << nl;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= total; j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << nl;
    }

    return SH;
}