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

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
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
        ll r,c,x,y;
        ll d;
        cin>>r>>c>>x>>y>>d;
        /*ll len;
        len=2*d+1;
        if((r>len)&&((y+d)<c||(y-d)<1))
        {
            cout<<r+c-2<<nl;
        }
        else if((r>len)&&((y+d)>=c&&(y-d)>=1))
        {
            cout<<"-1"<<nl;
        }
        else if(len/2+1>=r)
        {
            cout<<"-1"<<nl;
        }
        else
        {
            if((x-d)>1&&(y+d)<c)
            {
                cout<<r+c-2<<nl;
            }
            else if((x+d)<r)
            {
                cout<<r+c-2<<nl;
            }
            else
            {
                cout<<"-1"<<nl;
            }
        }*/
        ll le,ri,up,dw;
        dw=r-x-d;
        up=x-1-d;
        ri=c-y-d;
        le=y-1-d;

        if(dw<=0 && r<=0) cout << "-1" << nl;
        else if( (up>0&&ri>0) || (le>0&&dw>0) ) cout << r+c-2 << endl;
        else cout << "-1" << nl;

    }
    return SH;
}