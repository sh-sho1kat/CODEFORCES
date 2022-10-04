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
    vector <char> v;
    string s;
    cin>>s;
    ll count=0;
    ll p=s.size();
    for(ll i=0;i<p;i++)
    {
        v.emplace_back(s[i]);
    }
    for(ll i=0;i<p;i++)
    {
        v[i]=tolower(v[i]);
    }
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||v[i]=='y')
        {
        v.erase(v.begin()+i,v.begin()+i+1);
        i--;
        count++;
        }

    }
    for(ll i=0;i<p-count;i++)
    {
        cout<<'.';
        cout<<v[i];
    }
    cout<<nl;
    //cout<<count;

    return SH;
}