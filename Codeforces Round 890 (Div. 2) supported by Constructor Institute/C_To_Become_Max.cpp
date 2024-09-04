///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-05 21:31:35
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1e9 + 7
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

bool solve(ll target, ll ix, ll k, vl v){
    for (ll i = ix; i < v.size(); i++){
        if (v[i] >= target) return true;
        ll p = target - v[i];
        if (p > k) break;
        else k -= p;
        target--;
    }
    return false;
}

ll search(ll ix, ll k, vl v){
    ll low = 0, high = mod,res = 0, mid;
    while (low <= high){
        mid = high - (high - low) / 2;
        if (solve(mid, ix, k, v)){
            res = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return res;
}

int main(){
    fastio;
    ll t;
    cin >> t;
    while (t--){
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        vl a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) ans = max(ans, search(i, k, a));
        cout << ans << nl;
    }
    return SH;
}