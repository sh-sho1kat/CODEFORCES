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
        string a;
        string b;
        cin>>a;
        cin>>b;

        ll lena=a.length();
        ll lenb=b.length();

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        ll n;
        if(lena>lenb)
        {
            n=lenb;
        }
        else
        {
            n=lena;
        }

        ll s=n;

        fr(n)
        {
            if(a[i]!=b[i])
            {
                s=i;
                break;
            }
        }

        ll res=lena+lenb-2*s;

        //cout<<a<<" "<<b<<endl;

        //cout<<lena<<" "<<lenb<<endl;

        cout<<res<<endl;

        return SH;
    }





