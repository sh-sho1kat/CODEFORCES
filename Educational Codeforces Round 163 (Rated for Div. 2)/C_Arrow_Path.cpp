///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-16 00:22:27
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll n;
char a[5][200005];
ll dp[2][200005];
bool possible(ll row, ll col)
{
    if (col == n - 1 && row == 1)
        return true;
    if (col >= n)
        return false;
    if (dp[row][col] != -1)
        return dp[row][col];
    bool flag = false;

    if (row == 0)
    {
        if (a[row + 1][col] == '>')
            flag |= possible(row + 1, col + 1);
        else if (a[row][col + 1] == '>')
            flag |= possible(row, col + 2);
        else
            return false;
    }
    else
    {
        if (a[row - 1][col] == '>')
            flag |= possible(row - 1, col + 1);
        else if (a[row][col + 1] == '>')
            flag |= possible(row, col + 2);
        else
            return false;
    }
    return dp[row][col] = flag;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n;
        for (ll i = 0; i < 2; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        memset(dp, -1, sizeof(dp));
        if (possible(1, 1))
            yes;
        else
            no;
    }
    return SH;
}