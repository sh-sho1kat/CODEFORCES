#include<bits/stdc++.h>
#include <queue>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back

using namespace std;

// ll fact(ll f){
// if(f==0){return 1;}
// if(f==1){return 1;}
// int r=fact(f-1);
// return f*r;
// }



int main()
{
int t;
cin>>t;
for(long i=1;i<=t;i++)
{
    ll n,k;
    cin>>n>>k;
    ull s=1;
    for(int i=(n-k+1);i<=n;i++){s=s*i;}
    //cout<<s;
    ll fact=1;
    for(int i=1;i<=k;i++)
    {
        fact*=i;
    }

    if(k>n){cout<<"Case"<<" "<<i<<":"<<" "<<0<<endl;}
//     else if(k>15)
//     { ull x=1;
//     for(int j=k;j=k-10;j++){x=x*j;}
//     int w=k-10-1;
//     long double ans=s/fact(w);
//     long double ans1=ans*s;
//     ull fa=ans1/x;
//     cout<< "Case"<<" "<<i<<":"<<" "<<fa<<endl;

//     }
  else 
  { ull d=(s*(s/fact));
    cout<<"Case"<<" "<<i<<":"<<" "<<d<<endl;

    }
//

}
return 0;
}


