#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for (ll i = 0; i < n; i++)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SH 0

//__________debug__________//
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << "\n"

//__________functions___________//

//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll A, B, n;
        cin >> A >> B >> n;
        ll a[n];
        ll b[n];

        fr(n)
        {
            cin >> a[i];
        }
        fr(n)
        {
            cin >> b[i];
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end());
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = i + 1; j < n; j++)
        //     {
        //         if (a[i] > a[j])
        //         {
        //             swap(a[i], a[j]);
        //             swap(b[i], b[j]);
        //         }
        //     }
        // }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " << b[i] << endl;
        // }
        // for (auto u : v)
        // {
        //     cout << u.first << " " << u.second << endl;
        // }
        // double x=8.0/3;
        // double heal=ceil(x);
        // cout<<heal;
        ll heal = 0;
        ll d;
        fr(n - 1)
        {
            d = v[i].second / A;
            if (v[i].second % A != 0)
            {
                d = d + 1;
            }
            heal = heal + d * v[i].first;
        }
        ll k = v[n - 1].second / A;
        if (v[n - 1].second % A != 0)
        {
            k = k + 1;
        }
        heal = B - heal;
        ll heat = (k - 1) * v[n - 1].first;
        // cout<<heal<<endl;
        if (heal > heat)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return SH;
}
