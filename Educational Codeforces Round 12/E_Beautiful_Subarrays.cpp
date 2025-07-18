#include <bits/stdc++.h>
using namespace std;

// 2025-05-22 23:07:51
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
typedef int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

struct Trie
{
    static const ll B = 30;
    struct node
    {
        node *next[2];
        int sz;
        node()
        {
            next[0] = next[1] = NULL;
            sz = 0;
        }
    } *root;
    Trie()
    {
        root = new node();
    }

    void insert(ll val)
    {
        node *cur = root;
        cur->sz++;
        for (ll i = B; i >= 0; i--)
        {
            ll bit = (val >> i) & 1;
            if (cur->next[bit] == NULL)
                cur->next[bit] = new node();
            cur = cur->next[bit];
            cur->sz++;
        }
    }

    ll query(ll x, ll k) // number of values s.t. val ^ x < k
    {
        node *cur = root;
        long long ans = 0;
        for (ll i = B; i >= 0; i--)
        {
            if (cur == NULL)
                break;
            bool bit1 = x >> i & 1;
            bool bit2 = k >> i & 1;

            if (bit2)
            {
                if (cur->next[bit1])
                    ans += cur->next[bit1]->sz;
                cur = cur->next[!bit1];
            }
            else
                cur = cur->next[bit1];
        }
        return ans;
    }

    void del(node *cur)
    {
        for (ll i = 0; i < 2; i++)
            if (cur->next[i])
                del(cur->next[i]);
        delete (cur);
    }
};

int main()
{
    fastio;
    long long n, k;
    cin >> n >> k;
    long long x = 0;
    Trie trie;
    trie.insert(x);
    long long res = (n * (n + 1)) / 2;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        x ^= p;
        res -= trie.query(x, k);
        trie.insert(x);
    }
    cout << res << nl;
    return SH;
}