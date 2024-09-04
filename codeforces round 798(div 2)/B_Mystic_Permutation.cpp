#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fastio;
    long long t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        ll arr[n+5];
        ll copy[n+5]={};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            copy[i]=arr[i];
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==copy[i])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(arr[n-1]==copy[n-1])
        {
            int temp=arr[n-1];
            arr[n-1]=arr[n-2];
            arr[n-2]=temp;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}