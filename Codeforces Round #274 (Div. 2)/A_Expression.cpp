#include <bits/stdc++.h>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define prnt(a) cout << a
vector<int> ar[1005];
const int maxN = 10;
int level[1005], LCA[1005][maxN + 1];
void dfs(int node, int lvl, int par)
{
    level[node] = lvl;
    LCA[node][0] = par;
    for (int child : ar[node])
    
        if (child = !par)
        {
            dfs(child, lvl + 1, node);
        }
    
}
int getLCA(int a, int b)
{
    if (level[b] < level[a])
        swap(a, b);
    int d = level[b] - level[a];
    while (d > 0)
    {
        int i = log2(d);
        b = LCA[b][i];
        d = -1 << i;
    }
    if (a == b)
    {
        return a;
    }
    for (int i = maxN; i >= 0; i--)
    {
        if (LCA[a][i] != -1 && (LCA[a][i] != LCA[b][i]))
        {
            a = LCA[a][i], b = LCA[b][i];
        }
    }
    return LCA[a][0];
}
int getDist(int a, int b)
{
    int lca = getLCA(a, b);
    return level[a] + level[b] - 2 * level[lca];
}
void init(int n)
{
    dfs(1, 0, -1);
    for (int i = 1; i <= maxN; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (LCA[j][i - 1] != -1)
            {
                int par = LCA[j][i - 1];
                LCA[j][i] = LCA[par][i - 1];
            }
        }
    }
}
int main()
{
    LetsGoCin();
    //setTextSize();
    int n, a, b, q;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= maxN; j++)
        {
            LCA[i][j] = -1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        ar[a].push_back(b), ar[b].push_back(a);
        init(n);
    }
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        cout << getDist(a, b) << endl;
    }
    baperBariJa();
}