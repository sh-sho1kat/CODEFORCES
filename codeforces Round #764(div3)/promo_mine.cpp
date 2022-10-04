#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    long long arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i];
    // }


    // for(int i=0;i<q;i++)
    // {
    //     int sum=0;
    //     int l,r;
    //     cin>>l>>r;
    //     for(int j=l-r;j<l;j++)
    //     {
    //         sum+=arr[j];
    //     }
    //     cout<<sum<<endl;
        
    // }

    long long prefix[n+1]={};
    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]+arr[i];
    }

    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int r=x;
        int l=x-y;
        cout<<prefix[r]-prefix[l]<<endl;
    }
    return 0;
}