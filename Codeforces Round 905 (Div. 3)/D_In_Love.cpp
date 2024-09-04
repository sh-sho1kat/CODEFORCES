///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-08 17:03:33
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
    ll n;
    cin >> n;
    multiset<ll> st1;
    multiset<ll> st2;
    while (n--)
    {
        char a;
        ll b, c;
        cin >> a >> b >> c;
        if (a == '+')
        {
            st1.insert(b);
            st2.insert(c);
        }
        else
        {
            st1.erase(st1.lower_bound(b));
            st2.erase(st2.lower_bound(c));
        }
        if (st1.size() <= 1)
            no;
        else if (*st1.rbegin() <= *st2.begin())
            no;
        else
            yes;
    }
    return SH;
}