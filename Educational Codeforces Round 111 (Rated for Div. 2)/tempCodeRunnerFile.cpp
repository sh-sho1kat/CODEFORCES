#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define SH 0

//__________debug__________//
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        char in;
        cin>>n>>a>>b;


        ll oc=0;
        ll tc=0;
        
        vector <char> v;
        vector <char> vo;
        vector <char> vt;

        fr(n)
        {
            cin>>in;
            v.push_back(in);
            if(in=='0')
            {
                oc++;
            }
            else
            {
                tc++;
            }
        }

        // for(char  d : v)
        // {
        //     cout<<d<<" ";
        // }
        ll res;
        ll sum=0;
        ll count=0;
        if(b>=0)
        {
            res=n*(a+b);
            cout<<res<<"\n";
        }
        else
        {
           if(tc>oc)
           {
                for(ll i=0;i<n;i++)
                {
                    if(v[i]=='0')
                    {
                        count++;
                    }
                    else
                    {
                        vt.push_back(v[i]);
                        if(count>0)
                        sum+=(count*a)+b;
                        count=0;
                    }
                }
                //cout<<vt.size()<<endl;
                sum+=(vt.size()*a)+b;
           }
           else
           {
                for(ll i=0;i<n;i++)
                {
                    if(v[i]=='1')
                    {
                        count++;
                    }
                    else
                    {
                        vo.push_back(v[i]);
                        if(count>0)
                        sum+=(count*a)+b;
                        count=0;
                    }
                }
                sum+=vt.size()*a+b;
           }
           
           cout<<sum<<"\n";
        }
        
    }
    return SH;
}





