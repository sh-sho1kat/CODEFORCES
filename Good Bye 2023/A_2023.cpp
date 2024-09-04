#include<bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define viread(n,v) for(int i=0;i<n;i++){int x; cin>>x;  v.push_back(x);}
#define vlread(n,v) for(ll i=0;i<n;i++){ll x; cin>>x;  v.push_back(x);}
#define sorta(v) sort(v.begin(),v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vi v;
        viread(n,v);
        int temp=1;
        for (int i = 0; i < n; i++)
        {
            temp*=v[i];
        }
        if(temp>2023)
        no;
        else
        {
            if(2023%temp!=0)
            no;
            else
            {
                yes;
                cout<<2023/temp<<" ";
                for (int i = 0; i < k-1; i++)
                {
                    cout<<"1 ";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}