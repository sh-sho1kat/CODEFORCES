#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0

#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << endl;
#define ok cout << "all right" << endl

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        string s;
        cin >> s;
        ll len = s.size();
        vector<pair<char, ll>> p;
        for (ll i = 0; i < len; i++)
        {
            p.push_back({s[i], i});
        }
        char st = p[0].first;
        char ed = p[len - 1].first;
        sort(p.begin(), p.end());
        ll sx, ex;
        if (st <= ed)
        {
            for (ll i = 0; i < len; i++)
            {
                if (p[i].first == st)
                {
                    sx = i;
                    break;
                }
            }
            for (ll i = len - 1; i >= 0; i--)
            {
                if (p[i].first == ed)
                {
                    ex = i;
                    break;
                }
            }
        }
        else
        {
            for (ll i = 0; i < len; i++)
            {
                if (p[i].first == ed)
                {
                    ex = i;
                    break;
                }
            }
            for (ll i = len - 1; i >= 0; i--)
            {
                if (p[i].first == st)
                {
                    sx = i;
                    break;
                }
            }
        }

        // //if(s[0]>s[len-1])
        // {
        //     for(ll i=0;i<len;i++)
        //     {
        //         if(p[i].second==len-1)
        //         {
        //             ex=i;
        //             break;
        //         }
        //     }
        //     for(ll i=len-1;i>=0;i--)
        //     {
        //         if(p[i].second==0)
        //         {
        //             sx=i;
        //             break;
        //         }
        //     }
        // }
        // // else
        // // {
        // //     for(ll i=0;i<len;i++)
        // //     {
        // //         if(p[i].first==s[0])
        // //         {
        // //             sx=i;
        // //             break;
        // //         }
        // //     }
        // //     for(ll i=len-1;i>=0;i--)
        // //     {
        // //         if(p[i].first==s[len-1])
        // //         {
        // //             ex=i;
        // //             break;
        // //         }
        // //     }
        // // }
        // ans=abs(ex-sx)+1;
        // //cout<<ans<<nl;
        // if(sx<=ex)
        // {
        //     for(ll i=sx+1;i<=ex;i++)
        //     {
        //         tmp=((p[i].first)-p[i-1].first);
        //         sum+=tmp;
        //     }
        // }
        // else
        // {
        //     for(ll i=ex+1;i<=sx;i++)
        //     {
        //         tmp=(p[i].first-p[i-1].first);
        //         sum+=tmp;
        //     }
        // }
        // cout<<sum<<" "<<ans<<nl;

        // }

        // cout<<nl;
        res = abs(ed - st);
        ans = abs(ex - sx) + 1;
        cout << res << " " << ans << nl;
        cout << 1 << " ";
        if (sx < ex)
        {
            for (ll i = sx; i <= ex; i++)
            {
                if (p[i].second == 0 || p[i].second == len - 1)
                    continue;
                cout << p[i].second + 1 << " ";
            }
            cout << len << nl;
        }
        else
        {
            for (ll i = sx; i >= ex; i--)
            {
                if (p[i].second == 0 || p[i].second == len - 1)
                    continue;
                cout << p[i].second + 1 << " ";
            }
            cout << len << nl;
        }
    }
    return SH;
}