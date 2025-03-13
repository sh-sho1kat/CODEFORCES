#include <bits/stdc++.h>
using namespace std;

// 2024-11-10 21:37:31
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll x = 0, y = 0;
        ll move = 1000;
        while (move--)
        {

            for (ll i = 0; i < s.size(); i++)
            {

                if (s[i] == 'N')
                    y++;
                else if (s[i] == 'E')
                    x++;
                else if (s[i] == 'S')
                    y--;
                else
                    x--;
                if (x == a and y == b)
                    fun = true;
            }
        }
        fun ? yes : no;
    }
    return SH;
}