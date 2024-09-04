///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-13 02:03:21
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        string s;
        cin >> s;
        ll k;
        cin >> k;
        stack<char> st;
        st.push(s[0]);
        for (ll i = 1; i < s.size(); i++)
        {
            while (!st.empty() && k)
            {
                if (s[i] == '0' && st.size() == 1)
                    break;
                if (st.top() > s[i])
                {
                    st.pop();
                    k--;
                }
                else
                    break;
            }
            st.push(s[i]);
        }
        string str;
        while (st.size())
        {
            str.push_back(st.top());
            st.pop();
        }
        reverse(all(str));
        //cout << str << nl;
        if (str[0] > str[str.size() - 1] && str[str.size() - 1] != '0')
        {
            for (ll i = 1; i < str.size(); i++)
            {
                if (str[i] == '0')
                    cnt++;
                else
                    break;
            }
            if (cnt)
                cnt++;
        }
        if (cnt <= k)
        {
            k -= cnt;
            fun = true;
        }
        while (st.size() && k)
        {
            st.pop();
            k--;
        }
        if (fun)
        {
            //cout << cnt << " " << str.size() << " " << k << nl;
            for (ll i = cnt; i < str.size() - k; i++)
                cout << str[i];
            cout << nl;
        }
        else
        {
            for (ll i = 0; i < str.size() - k; i++)
                cout << str[i];
            cout << nl;
        }
    }
    return SH;
}