///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-17 20:36:43
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        string s;
        cin >> s;
        ll n = s.size();
        string p = "()";
        if (s == p)
            no;
        else
        {
            yes;
            f = true;
            flag = true;
            for (ll i = 0; i < n - 1; i++)
            {
                if (s[i] == '(' && s[i + 1] == '(')
                    f = false;
                if (s[i] == ')' && s[i + 1] == ')')
                    flag = false;
            }
            if (f && flag)
            {
                for (ll i = 1; i <= n; i++)
                    cout << "(";
                for (ll i = 1; i <= n; i++)
                    cout << ")";
                cout << nl;
            }
            else
            {
                for (ll i = 1; i <= n; i++)
                    cout << p;
                cout << nl;
            }
        }
    }
    return SH;
}