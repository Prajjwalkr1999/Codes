#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int main()
{
     ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

      #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;cin>>t;while(t--)
    {
        ll j=0, n, cnt = 0;
        cin >> n;

        ll total=(n*(n+1))/2;
        vector<ll> a(n);
        vector<pair<ll,ll>> two;
        vector<ll> first1;
        vector<ll> second2;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
  
            if(a[i]%2==0){
                if(a[i]%4!=0){
                    two.pb(make_pair(a[i],i));
                }
            }
        }
        if(two.size()==0){
            cout<<total<<"\n";
        }else{
        // cout<<a[0];
        for(ll i=0;i<n;i++){
            if(a[i]%4==0){
                cnt=0;
                continue;
            }
            if(a[i]==two[j].F&&j<two.size()){
                first1.pb(cnt);
                j++;
                cnt=0;
                continue;
            }
            cnt++;
        }
        ll count=0;
        bool check=true;
        for(auto x:two){
            count = 0;
            check = true;
            for(ll i=(x.S)+1;i<n;i++){
                if(a[i]%2==0){
                    check =false;
                  second2.pb(count);
                  break;  
                }
                count++;
            }
            if(check)
                second2.pb(count);

        }
        // cout<<second2[1]<<"\n";

        ll count1=0;
        for(ll i=0;i<first1.size()&&i<second2.size();i++){
            count1+=(first1[i]*second2[i]) + first1[i] + second2[i] + 1;
        }
        // cout<<count1;
        ll ans=total-count1;
        cout<<ans<<"\n";
     }
    }
    return 0;
}