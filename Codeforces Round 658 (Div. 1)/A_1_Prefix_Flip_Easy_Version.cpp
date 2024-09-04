///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-25 03:07:33
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
string s;
void flip(ll p)
{
    // cout << s << " ";
    for (ll i = 0; i <= p; i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    ll l = 0, r = p;
    while (l <= r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    // cout << s << nl;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        cin >> s;
        string S;
        cin >> S;
        vl v;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (S[i] != s[0])
            {
                v.eb(i + 1);
            }
            else
            {
                v.eb(1);
                v.eb(i + 1);
                if (s[0] == '0')
                    s[0] = '1';
                else
                    s[0] = '0';
            }
            flip(i);
            // cout << s << nl;
        }
        cout << v.size() << " ";
        for (auto u : v)
            cout << u << " ";
        cout << nl;
        s.clear();
    }
    return SH;
}