#include <bits/stdc++.h>
using namespace std;

// 2025-03-11 19:44:27
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char a[n + 5];
    ll j = 0;
    ll tmp = n;
    bool flag = false;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] > s[0])
        {
            tmp = i;
            break;
        }
        if (s[i] == s[0] and s[i - 1] != s[0] and i)
        {
            j = 0;
            flag = true;
        }
        if (s[i] == s[j] and flag)
        {
            flag = true;
            cnt++;
        }
        if (s[i] < s[j])
        {
            cnt = 0;
            flag = false;
        }
        if (s[i] > s[j])
        {
            if (flag)
            {
                flag = false;
                tmp = i;
                tmp -= cnt;
                break;
            }
            cnt = 0;
        }
        j++;
    }
    if (flag)
    {
        if (tmp != cnt)
            tmp -= cnt;
    }
    if (k < tmp)
        tmp = k;
    string ss;
    for (ll i = 0; i < tmp; i++)
        ss.eb(s[i]);
    while (ss.size() < k)
    {
        ss = ss + ss;
    }
    for (ll i = 0; i < k; i++)
        cout << ss[i];
    cout << nl;
    return SH;
}