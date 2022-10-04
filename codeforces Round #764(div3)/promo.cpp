#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nl '\n'
#define nll cout<<'\n'
#define mod 1000000007
#define inf (1LL<<62)
#define inff (1<<30)
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	fastio;
	ll n, m;
	cin>>n>>m;
	ll arr[n];
	fr(n) cin>>arr[i];
	sort(arr,arr+n);
	ll pref[n+1]={};
	fr(n){
		pref[i+1]=pref[i]+arr[i];
	}
	while(m--){
		int x, y;
		cin>>x>>y;
		ll l=n-x, r=l+y;
		cout<<pref[r]-pref[l]<<nl;
	}
	return 0;
}