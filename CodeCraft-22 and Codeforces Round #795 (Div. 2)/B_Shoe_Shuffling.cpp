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
            ll n;
            cin>>n;
            ll a[n+5];
            for(ll i=1;i<=n;i++)
            {
                cin>>a[i];
            }
            ll b[n+5];
            fr(n)
            {
                b[i]=i;
            }
            ll count=1;
            ll flag=0;
            ll i;
            for(i=1;i<n;i++)
            {
                if(a[i]==a[i+1])
                {
                    count++;
                }
                else
                {
                    if(count==1)
                    {
                        flag=1;
                        break;
                    }
                    else if(count>1)
                    {
                        b[i-count]=i;
                        count=1;
                    }
                }
            }
            if(count>1)
            b[i-count]=i;

            //cout<<count;


            if(flag==1||n==1||a[n]!=a[n-1])
            {
                cout<<-1<<"\n";
            }
            else
            {
                fr(n)
                {
                    cout<<b[i]<<" ";
                }
                cout<<"\n";
            }

        }
        return SH;
    }





