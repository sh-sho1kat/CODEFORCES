///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-12 02:20:57
 **/

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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
ll anse;
ll a[2023][2023];
ll dp[2023][2023];
void func(ll r, ll c)
{

    if (dp[r][c])
        return;
    dp[r][c] = 1;
    if (a[r][c] == 0)
        return;
    anse += a[r][c] * a[r][c];
    // cout << a[r][c] << nl;
    func(r - 1, c);
    func(r - 1, c - 1);
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    ll k = 1;
    ll tt = 1;
    for (ll i = 1; i <= 2022; i++)
    {
        for (ll j = 1; j <= tt; j++)
        {
            a[i][j] = k;
            k++;
        }
        tt++;
    }
    for (ll i = 1; i <= 10; i++)
    {
        for (ll j = 1; j <= 10; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << nl;
    }
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll row = 1000, clm;
        for (ll i = 1; i <= 2011; i++)
        {
            if (a[i][1] > n)
            {
                row = i - 1;
                break;
            }
        }
        memset(dp, 0, sizeof(dp));
        clm = n - a[row][1] + 1;
        // cout << row << " " << clm << nl;
        func(row, clm);
        cout << anse << nl;
        anse = 0;
    }
    return SH;
}