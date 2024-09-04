#include <bits/stdc++.h>
using namespace std;

// 2024-05-03 09:32:23
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

// cpp code
string decode_secret(string file_name)
{
    fstream file;
    file.open(file_name);
    map<int, string> mp;
    int cnt = 0;
    while (!file.eof())
    {
        int n;
        string s;
        file >> n;
        file >> s;
        mp[n] = s;
        cnt++;
    }
    file.close();
    int i = 1;
    int j = 2;
    string result;
    while (i <= cnt)
    {
        if (i != 1)
            result += ' ';
        result += mp[i];
        i += j;
        j++;
    }
    return result;
}

int main()
{
    fastio;
    string result = decode_secret("qualification_dataset.txt");
    cout << nl;
    cout << result << nl;
    return SH;
}