#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

     
     ll t;   cin>>t;
     while(t--)   
   { ll sum=0,cnt=0,n; cin>>n; ll cursum=0;
     ll arr[n+1]; for(ll i=1;i<=n;i++) cin>>arr[i];     
     for(ll i=1;i<=n;i++) sum+=arr[i];
    set<ll>s;
    vector<pair<ll,ll>>check(n+1);
    
    for(ll i=1;i<=n;i++)
    {
        s.insert(arr[i]);
        check[i].first = (s.size() == i); 
    }

    s.clear();
    for(ll i=(n);i>=1;i--)
    {
        s.insert(arr[i]);
        check[i].second = (s.size() == (n+1-i));
    }

     vector<pair<ll,ll>>v;
     for(ll i=1;i<=n;i++)
     {
        
         cursum += arr[i];
         ll a = n-i;
         bool ans1 = (cursum==(i*(i+1))/2);
         bool ans2 = ((sum-cursum) == (a*(a+1))/2 );

         if(ans1 && ans2 && check[i].first && check[i+1].second)  
            {v.push_back({i,n-i}); cnt++; } 

     }   
     cout<<cnt<<endl;
     for(auto &it:v) cout<<it.first<<" "<<it.second<<endl;
   }
}

