#include <bits/stdc++.h>
using namespace std;

// 2025-04-14 12:48:59
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

void print(bool dir, ll lsum, ll rsum)
{
    if (dir)
        cout << lsum << nl;
    else
        cout << rsum << nl;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll q;
        cin >> q;
        deque<ll> dq;
        ll lsum = 0;
        ll rsum = 0;
        sum += 0;
        bool dir = 1;
        while (q--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                if (dir)
                {
                    ll p = dq.back();
                    dq.pop_back();
                    dq.push_front(p);

                    lsum += sum;
                    lsum -= (dq.size() * p);

                    rsum -= sum;
                    rsum += (dq.size() * p);
                }
                else
                {
                    ll p = dq.front();
                    dq.pop_front();
                    dq.push_back(p);

                    lsum -= sum;
                    lsum += (dq.size() * p);

                    rsum += sum;
                    rsum -= (dq.size() * p);
                }
            }
            else if (type == 2)
            {
                dir = !dir;
            }
            else if (type == 3)
            {
                ll p;
                cin >> p;
                if (dir)
                {
                    dq.push_back(p);
                    lsum += p * dq.size();

                    rsum += p;
                    rsum += sum;
                    sum += p;
                }
                else
                {
                    dq.push_front(p);
                    lsum += sum;
                    lsum += p;

                    rsum += p * dq.size();
                    sum += p;
                }
            }
            print(dir, lsum, rsum);
        }
    }
    return SH;
}