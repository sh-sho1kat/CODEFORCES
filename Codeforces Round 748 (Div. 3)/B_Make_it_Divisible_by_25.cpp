#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define frj(m) for(ll j=0;j<m;j++)
#define fro(m) for(ll i=1; i<=m; i++)
#define nl cout<<"\n"
#define nll '\n'
#define pr(n) cout<<n<<'\n';
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define inf 1ll<<62
#define inff 1<<30
#define debug(arr,n) for(int i=0; i<n; i++) cout<<arr[i]<<" "; cout<<"\n"
#define debugr(arr,s,e) for(int i=s; i<=e; i++) cout<<arr[i]<<" "; cout<<"\n"
#define inp freopen("input.txt", "r", stdin)
#define outp freopen("output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
 
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        char str[20];
        cin>>str;
        int l=strlen(str);
        //debug(str,l);
        int count1=0;
        int count2=0;
        int flag1=0;
        int flag2=0;
        int temp=0;
        int i,j,k;
        for(i=l-1;i>=0;i--)
        {
            if((str[i]-'0')==0)
            {
                temp=i;
                break;
            }
            count1++;
        }
        
        if((str[i]-'0')==0)
        {
            for(int j=i-1;j>=0;j--)
            {
                if((str[j]-'0')==0||(str[j]-'0')==5)
                {
                    //cout<<count1<<endl;
                    break;
                }
                count1++;
                
            }
        }
        for(i=l-1;i>=0;i--)
        {
            if((str[i]-'0')==5)
            {
                temp=i;
                break;
            }
            count2++;
        }
        if((str[i]-'0')==5)
        {
            for(int j=i-1;j>=0;j--)
            {
                if((str[j]-'0')==2||(str[j]-'0')==7)
                {
                    //cout<<count<<endl;
                    break;
                }
                count2++;
                
            }
        }

        if(count1>count2)
        {
            cout<<count2<<endl;
        }
        else
        {
            cout<<count1<<endl;
        }



    }
    return 0;
}