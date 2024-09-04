#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d,e,f;
        d=2*b-c;
        e=a+c;
        f=2*b-a;
        if(a==b&&b==c)
        {
            cout<<"YES"<<endl;
        }
        else if(d%a==0&&d>=a)
        {
            cout<<"YES"<<endl;
        }
        else if((e)%(2*b)==0&&e%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(f%c==0&&f>=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}