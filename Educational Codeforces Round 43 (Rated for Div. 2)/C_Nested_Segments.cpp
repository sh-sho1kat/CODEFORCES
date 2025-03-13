#include <bits/stdc++.h>
using namespace std;

// 2024-12-13 18:45:30
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

bool cmp(const pair<pair<ll, ll>, ll> &p1, const pair<pair<ll, ll>, ll> &p2)
{
    if (p1.ff.ff == p2.ff.ff)
        return p1.first.second > p2.first.second;
    else
        return p1.ff.ff <= p2.ff.ff;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<pair<pair<ll, ll>, ll>> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i].ff.ff >> v[i].ff.ss, v[i].ss = i + 1;
    sort(all(v), cmp);
    bool flag = false;
    ll mx = v[0].ff.ss;
    for (ll i = 1; i < n; i++)
    {
        if (v[i].ff.ss <= mx)
        {
            flag = true;
            cout << v[i].ss << " " << v[i - 1].ss << nl;
            break;
        }
        else
            mx = v[i].ff.ss;
    }
    if (!flag)
        cout << -1 << " " << -1 << nl;
    return SH;
}