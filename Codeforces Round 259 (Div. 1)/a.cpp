#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nn "\n"
#define sci(x) scanf("%d", &x)
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define mod 1000000007
#define N 200015

int n;
int x[105];
int ans[105][1 << 16];
int dp[105][1 << 16];
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
vector<int> pd[70];

int solve(int pos, int mask)
{
    if (pos >= n)
        return 0;

    if (dp[pos][mask] != -1)
        return dp[pos][mask];

    int res = INF;
    int r;

    ans[pos][mask] = 1;
    res = abs(x[pos] - 1) + solve(pos + 1, mask);

    for (int i = 2; i < 59; i++)
    {
        int f = 1;
        int m = mask;
        for (int j = 0; j < pd[i].size(); j++)
        {
            if (CheckBit(m, pd[i][j]))
                f = 0;
            SetBit(m, pd[i][j]);
        }
        if (f)
        {
            r = abs(i - x[pos]) + solve(pos + 1, m);
            if (r < res)
            {
                res = r;
                ans[pos][mask] = i;
            }
        }
    }

    return dp[pos][mask] = res;
}

void print_ans(int pos, int mask)
{
    if (pos >= n)
        return;
    if (ans[pos][mask] == 1)
    {
        cout << 1 << " ";
        print_ans(pos + 1, mask);
    }
    else
    {
        cout << ans[pos][mask] << " ";
        int m = mask;
        for (int i = 0; i < pd[ans[pos][mask]].size(); i++)
        {
            SetBit(m, pd[ans[pos][mask]][i]);
        }
        print_ans(pos + 1, m);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof dp);

    for (int i = 2; i < 60; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i % primes[j] == 0)
                pd[i].pb(j);
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int res = solve(0, 0);
    print_ans(0, 0);
    cout << res << endl;

    return 0;
}

// 2 3 5 7 11 13 17 19 23 29