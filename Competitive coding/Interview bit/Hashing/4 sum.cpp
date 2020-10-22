#include<bits/stdc++.h>
using namespace std;

#define int long long int
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
        int i,j,n,sum;
        cin >> n>>sum;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int,vector<P>> mp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                mp[a[i]+a[j]].pb({i,j});
            }
        }
        vector<vector<int>> sol;
        for(auto cur:mp){
            // for(int j=i+1;j<n;j++){
                int x=cur.F;
                if(mp.find(sum-x)!=mp.end()){
                    vector<P> temp=mp[sum-x];
                for(auto y:cur.S){
                    for(auto z:temp){
                    if(z.F!=y.F&&z.S!=y.S&&z.F!=y.S&&z.S!=y.F){
                        vector<int> ans;
                        ans.pb(a[y.F]);
                        ans.pb(a[y.S]);
                        ans.pb(a[z.F]);
                        ans.pb(a[z.S]);
                        sort(ans.begin(), ans.end());
                        if(find(sol.begin(),sol.end(),ans)==sol.end())
                            sol.pb(ans);
                        }
                    }
                }
            }
        }
        sort(sol.begin(), sol.end());
        // return sol;
                for(auto x:sol){
                    for(auto y:x){
                        cout<<y<<" ";
                    }
                    cout<<"\n";
                }
                cout<<"\n";

    }
    return 0;
}

