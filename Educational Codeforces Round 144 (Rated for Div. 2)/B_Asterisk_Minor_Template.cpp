///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-07 05:37:52
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0])
        {
            yes;
            cout << a[0] << '*' << nl;
        }
        else if (a[a.size() - 1] == b[b.size() - 1])
        {
            yes;
            cout << '*' << a[a.size() - 1] << nl;
        }
        else
        {
            string s;
            for (ll i = 0; i < a.size() - 1; i++)
            {
                if (fun == false)
                    for (ll j = 0; j < b.size() - 1; j++)
                    {
                        if (a[i] == b[j] && a[i + 1] == b[j + 1])
                        {

                            s += '*';
                            s += a[i];
                            s += a[i + 1];
                            s += '*';
                            fun = true;
                            break;
                        }
                    }
            }
            if (fun)
            {
                yes;
                cout << s << nl;
            }
            else
                no;
        }
    }
    return SH;
}