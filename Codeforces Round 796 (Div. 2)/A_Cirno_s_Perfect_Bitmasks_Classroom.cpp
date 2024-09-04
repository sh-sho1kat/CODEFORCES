#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(s,n) for(ll i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl '\n'
#define SH 0

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<"";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n;
        cin>>n;
        string binary = bitset<32>(n).to_string();
        char p[32];
        memset(p,'0',32);
        for(ll i=31;i>=0;i--){
            if(binary[i]=='1'){
                p[i]='1';
                break;
            }
        }
        for(ll i=0;i<32;i++){
            if(binary[i]=='1') cnt++;
        }
        if(cnt==1){
            if(binary[31]=='1') p[30]='1';
            else p[31]='1';
        }
        ll dec = stoi(p, nullptr, 2);
        cout<<dec<<nl;
    }
    return SH;
}