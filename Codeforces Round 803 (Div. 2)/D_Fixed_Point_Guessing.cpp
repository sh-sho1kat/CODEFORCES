#include <bits/stdc++.h>
using namespace std;

// 2025-02-01 11:18:17
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

void query(ll l, ll r)
{
    cout << "? " << l << " " << r << nl;
}
void print(ll val)
{
    cout << "! " << val << nl;
}

int main()
{
    // fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll l = 1, r = n;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            set<ll> st;
            query(l, mid);
            for (ll i = l; i <= mid; i++)
            {
                ll p;
                cin >> p;
                if (p >= l and p <= mid)
                    st.insert(p);
            }
            if (st.size() & 1)
            {
                res = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        print(res);
    }
    return SH;
}