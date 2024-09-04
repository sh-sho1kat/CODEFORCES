///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-26 15:07:41
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
    ll cnt = 0;
    ll sum = 0;
    priority_queue<ll> pq;
    for (ll i = 1; i <= n; i++)
    {
        ll p;
        cin >> p;
        if (p < 0)
            pq.push(-p);
        sum += p;
        cnt++;
        if (sum < 0)
        {
            while (!pq.empty())
            {
                if (sum < 0)
                {
                    cnt--;
                    sum += pq.top();
                    pq.pop();
                }
                else
                    break;
            }
        }
    }
    cout << cnt << nl;
    return SH;
}
