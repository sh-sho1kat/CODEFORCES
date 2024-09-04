///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-11 23:12:04
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
    string s;
    cin >> s;
    char a[s.size() + 5];
    a[s.size() - 1] = s[s.size() - 1];
    for (ll i = s.size() - 2; i >= 0; i--)
    {
        if (s[i] < a[i + 1])
        {
            a[i] = s[i];
        }
        else
        {
            a[i] = a[i + 1];
        }
    }
    stack<char> st;
    string ne;
    for (ll i = 0; i < s.size(); i++)
    {
        while (!st.empty())
        {
            if (st.top() <= a[i])
            {
                ne.push_back(st.top());
                st.pop();
            }
            else
                break;
        }
        if (s[i] <= a[i])
            ne.push_back(s[i]);
        else
            st.push(s[i]);
    }
    while (!st.empty())
    {
        ne.push_back(st.top());
        st.pop();
    }
    cout << ne << nl;
    return SH;
}