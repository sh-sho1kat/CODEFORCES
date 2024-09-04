///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-06 15:50:25
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
        ll n;
        cin >> n;
        ll a[n + 5];
        ll ar[100005] = {};
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ar[a[i]]++;
        }
        ll mex = -1;
        for (ll i = 0; i <= n; i++)
        {
            if (ar[i] == 0)
            {
                mex = i;
                break;
            }
        }
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < mex)
                st.insert(a[i]);
            if (st.size() == mex)
            {
                flag = false;
                ll mex2 = -1;
                for (ll k = 0; k <= n; k++)
                    ar[k] = 0;
                for (ll j = i + 1; j < n; j++)
                {
                    ar[a[j]]++;
                }
                for (ll k = 0; k <= n; k++)
                {
                    if (ar[k] == 0)
                    {
                        mex2 = k;
                        break;
                    }
                }
                if (mex == mex2)
                {
                    flag = true;
                }
                if (flag)
                {
                    cout << 2 << nl;
                    cout << 1 << " " << i + 1 << nl;
                    cout << i + 2 << " " << n << nl;
                }
                else
                    cout << -1 << nl;
                break;
            }
        }
    }
    return SH;
}