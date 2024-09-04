#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define fr(s,n) for(ll i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl '\n'
#define SH 0

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0,tmpi=0,tmpj=0,res=0,cnt=0,count=0,ans=0;
        ll mx=INT_MIN,mn=INT_MAX;
        bool flag=true;
        ll r,c;
        cin >> r >> c;
        ll a[r+5][c+5];
        fr(0,r)
        {
            for(ll j=0;j<c;j++) cin >> a[i][j];
        }
        ll i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]>mx)
                {
                    mx=a[i][j];
                    tmpi=i+1;
                    tmpj=j+1;
                }
            }
        }
        //cout<< tmpi << " " << tmpj << nl;
        tmpi=max(tmpi,r-tmpi+1);
        tmpj=max(tmpj,c-tmpj+1);
        ans=tmpi*tmpj;
        cout << ans << nl;
    }
    return SH;
}