#include <bits/stdc++.h>
using namespace std;

// 2024-06-16 16:00:41
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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
        ll n, k;
        cin >> n >> k;
        if (n & 1)
            tmp = 2;
        else
            tmp = 1;
        for (ll i = 1; i <= n / 2; i++)
        {
            sum += tmp;
            tmp += 2;
        }
        sum *= 2;
        if (k & 1 || k > sum)
        {
            no;
            continue;
        }
        yes;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        tmp = (n - 1) * 2;
        sum = 0;
        ll lo = 1, hi = n;
        while (tmp + sum <= k && tmp > 0)
        {
            sum += tmp;
            swap(a[lo], a[hi]);
            lo++;
            hi--;
            tmp -= 4;
        }
        ll rem = k - sum;
        rem /= 2;
        swap(a[lo], a[lo + rem]);
        for (ll i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << nl;
    }
    return SH;
}