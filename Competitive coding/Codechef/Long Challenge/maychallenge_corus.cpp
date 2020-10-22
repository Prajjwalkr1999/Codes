#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
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
        ll i, j, k, n, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        string s;
        cin>>s;
        map<char,ll> m;
        for(auto x:s){
            m[x]++;
        }
        vector<ll> v;
        
       
        while(k--){
            ll c;
            cin>>c;
            ans=0;
            for(auto x:m){
                cnt=x.S-c;
                if(cnt<0){
                    cnt=0;
                }
                ans+=cnt; 
            }
            cout<<ans<<"\n";
            
        }


    }
}

