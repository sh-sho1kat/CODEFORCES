/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-19 17:50:25
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

int main()
{
    fastio;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll plus = 0, minus = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '+')
            plus++;
        else
            minus++;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (minus < plus)
            swap(minus, plus);
        ll p = (minus - plus) * a;
        ll dif = b - a;
        bool fun = false;
        if (plus == minus)
            fun = true;
        for (ll i = 0; i <= plus; i++)
        {
            if (i * dif == p)
            {
                fun = true;
                break;
            }
        }
        fun ? yes : no;
    }
    return SH;
}