#include <bits/stdc++.h>
using namespace std;

// 2025-03-30 16:08:41
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

char a[10005][10005];
struct node
{
    ll posx, posy, dir, rem, dst;
};
queue<node> q;
ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};
pll st, ed;
ll n, m;
bool isgoodpos(ll posx, ll posy)
{
    if (a[posx][posy] != '#')
        return true;
    return false;
}

int main()
{
    fastio;
    cin >> n >> m;
    for (ll i = 0; i <= n + 1; i++)
        for (ll j = 0; j <= m + 1; j++)
            a[i][j] = '#';

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'S')
                st = {i, j};
            if (a[i][j] == 'T')
                ed = {i, j};
        }
    }
    ll vis[n + 5][m + 5][5][5];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            for (ll k = 0; k <= 4; k++)
            {
                for (ll l = 0; l <= 4; l++)
                    vis[i][j][k][l] = inf;
            }
        }
    }
    for (ll i = 0; i < 4; i++)
    {
        for (ll j = 0; j < 4; j++)
            vis[st.ff][st.ss][i][j] = 0;
    }
    node nd = {st.ff, st.ss, -1, 3, 0};
    q.push(nd);
    ll cnt = 0;
    while (!q.empty())
    {
        nd = q.front();
        q.pop();
        ll posx = nd.posx;
        ll posy = nd.posy;
        ll dir = nd.dir;
        ll rem = nd.rem;
        ll dst = nd.dst;
        pll tp = {posx, posy};
        for (ll i = 0; i < 4; i++)
        {
            if (i != dir and isgoodpos(posx + dx[i], posy + dy[i]))
            {
                if (vis[posx + dx[i]][posy + dy[i]][2][i] > dst + 1)
                {
                    vis[posx + dx[i]][posy + dy[i]][2][i] = dst + 1;
                    nd = {posx + dx[i], posy + dy[i], i, 2, dst + 1};
                    q.push(nd);
                }
            }
        }
        if (rem == 0)
        {
            if (vis[posx][posy][2][dir] > dst + 2)
            {
                vis[posx][posy][2][dir] = dst + 2;
                nd = {posx, posy, dir, 2, dst + 2};
                q.push(nd);
            }
        }
        else if (isgoodpos(posx + dx[dir], posy + dy[dir]) and dir >= 0)
        {
            if (vis[posx + dx[dir]][posy + dy[dir]][rem - 1][dir] > dst + 1)
            {
                vis[posx + dx[dir]][posy + dy[dir]][rem - 1][dir] = dst + 1;
                nd = {posx + dx[dir], posy + dy[dir], dir, rem - 1, dst + 1};
                q.push(nd);
            }
        }
    }
    ll res = inf;
    for (ll i = 0; i < 4; i++)
    {
        for (ll j = 0; j < 4; j++)
            res = min(res, vis[ed.ff][ed.ss][i][j]);
    }
    if (res == inf)
        res = -1;
    cout << res << nl;

    return SH;
}