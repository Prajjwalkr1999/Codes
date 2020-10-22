#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double

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
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int,int> mp;
        vector<vector<int>> sol;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x=a[i]+a[j];
                if(mp.find(x)!=mp.end()){
                    P temp=mp[x];
                    if(temp.F!=i&&temp.S!=j&&temp.F!=j&&temp.S!=i){
                        vector<int> ans;
                        ans.pb(a[i]);
                        ans.pb(a[j]);
                        ans.pb(a[temp.F]);
                        ans.pb(a[temp.S]);
                        sort(ans.begin(), ans.end());
                        if(find(sol.begin(),sol.end(),ans)==sol.end())
                            sol.pb(ans);
                    }
                }else{
                    mp[x]={i,j};
                }
            }
        }
        sort(sol.begin(), sol.end());
        vector<int> ans;
                for(auto x:sol){
                    for(auto y:x){
                        ans.pb(y);
                    }
                }
                

    }
    return 0;
}

