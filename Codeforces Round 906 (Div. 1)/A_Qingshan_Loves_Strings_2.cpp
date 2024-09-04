#include<bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define viread(n,v) for(int i=0;i<n;i++){int x; cin>>x;  v.push_back(x);}
#define vlread(n,v) for(ll i=0;i<n;i++){ll x; cin>>x;  v.push_back(x);}
#define sorta(v) sort(v.begin(),v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int z=0,o=0;
         deque<char>q;
           for (ll i = 0; i < n; i++)
           {
            char c;
            cin>>c;
            q.push_back(c);
             if(c=='0')
            z++;
            else
            o++;
           }
        
        if(n%2||(z!=o))
        {
            cout<<"-1\n";
           continue;
        }
        else
        {
            vi ans;
           int d=0;
           while (!q.empty())
           {
            if(q.front()==q.back())
            {
                if(q.front()=='0')
                {
                    q.push_back('0');
                     q.push_back('1');
                     ans.push_back(n-d);
                }
                else
                {
                    q.push_front('0');
                     q.push_front('1');
                     ans.push_back(d);
                }
            }

            n+=2;
            while (!q.empty() and q.front()!=q.back())
           {
            q.pop_back();
            q.pop_front();
            ++d;
           } 
           }
           
           cout<<ans.size()<<endl;
           for (ll i = 0; i < ans.size(); i++)
           {
            cout<<ans[i];
            if(i!=ans.size()-1)
            cout<<" ";
            else
             cout<<endl;
           }
           //cout<<endl;
           
        }
        
    }
    return 0;
}