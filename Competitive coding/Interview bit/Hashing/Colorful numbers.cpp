#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a;
        ll x=n;
        while(x){
            a.push_back(x%10);
            x/=10;
        }
        reverse(a.begin(),a.end());
        unordered_map<ll,ll> mp;
        ll cnt=1;
        for(ll i=0;i<a.size();i++){
            for(ll j=i;j<a.size();j++){
                cnt=cnt*a[j];
                if(mp.find(cnt)!=mp.end()){
                    return 0;
                }
                mp.insert({cnt,cnt});
            }
            cnt=1;
        }
        cout<<1;

    }
    return 0;
}

