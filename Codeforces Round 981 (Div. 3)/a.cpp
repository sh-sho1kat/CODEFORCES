#include <bits/stdc++.h>
using namespace std;

// 2024-10-30 13:37:00
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

// __int128 read()
// {
//     __int128 x = 0, f = 1;
//     char ch = getchar();
//     while (ch < '0' || ch > '9')
//     {
//         if (ch == '-')
//             f = -1;
//         ch = getchar();
//     }
//     while (ch >= '0' && ch <= '9')
//     {
//         x = x * 10 + ch - '0';
//         ch = getchar();
//     }
//     return x * f;
// }
// void print(__int128 x)
// {
//     if (x < 0)
//     {
//         putchar('-');
//         x = -x;
//     }
//     if (x > 9)
//         print(x / 10);
//     putchar(x % 10 + '0');
// }
// bool cmp(__int128 x, __int128 y) { return x > y; }

//----------------------------------------------------------//
//-------------------------BIG INT--------------------------//
//----------------------------------------------------------//
bool isSmaller(string str1, string str2)
{
    ll n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    return false;
}
string addition(string str1, string str2)
{
    if (isSmaller(str2, str1))
        swap(str1, str2);
    string str = "";
    ll n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = n1; i < n2; i++)
    {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        str.push_back(carry + '0');
    reverse(str.begin(), str.end());
    return str;
}
string subtraction(string str1, string str2)
{
    if (isSmaller(str1, str2))
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i = 0; i < n2; i++)
    {
        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    for (int i = n2; i < n1; i++)
    {
        int sub = ((str1[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}
string multiplication(string str1, string str2)
{
    if ((str1.at(0) == '-' || str2.at(0) == '-') &&
        (str1.at(0) != '-' || str2.at(0) != '-'))
        cout << "-";
    if (str1.at(0) == '-')
        str1 = str1.substr(1);
    if (str2.at(0) == '-')
        str2 = str2.substr(1);
    ll len1 = str1.size();
    ll len2 = str2.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<ll> result(len1 + len2, 0);
    ll i_n1 = 0;
    ll i_n2 = 0;
    for (ll i = len1 - 1; i >= 0; i--)
    {
        ll carry = 0;
        ll n1 = str1[i] - '0';
        i_n2 = 0;
        for (ll j = len2 - 1; j >= 0; j--)
        {
            ll n2 = str2[j] - '0';
            ll sum = n1 * n2 + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);
    return s;
}
string Division(string number, int divisor)
{
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx)
    {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}

//----------------------------------------------------------------//
//-------------------------END------------------------------------//
//----------------------------------------------------------------//

int main()
{
    fastio;
    // __int128 p;
    // p = read();
    // print(p);
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b, c, d;
        cin >> a >> b >> c >> d;
        string p = multiplication(a, d);
        string q = multiplication(b, c);
        if (p == q)
            cout << "Equal" << nl;
        else
            cout << "Not Equal" << nl;
    }

    return SH;
}