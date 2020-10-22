#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
 vector<int> dp;
int calc(vector<pair<int,int>> f,vector<pair<int,int>> gg,int i,int n,int end){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(gg[i].second<=end){
        // cout<<gg[i].second<<endl;
        int ans=calc(f,gg,i+1,n,end);
        return ans;
    }else{
        int ans=f[i].second+calc(f,gg,i+1,n,f[i].first);
        int ans2=calc(f,gg,i+1,n,end);
        dp[i]=max(ans,ans2);
        return dp[i];
    }
}
int courses(vector<int> start, vector<int> duration, vector<int> credits) {
    int n=start.size();
    vector<pair<int,int>> f(n);
    vector<pair<int,int>> gg(n);
    dp.resize(n+1,-1);
    for(int i=0;i<n;i++){
        gg[i].first=start[i]+duration[i];
        gg[i].second=start[i];
    }
    sort(gg.begin(),gg.end());
    for(int i=0;i<n;i++){
        f[i].first=start[i]+duration[i];
        f[i].second=credits[i];
    }
    sort(f.begin(),f.end());
    for(int i=0;i<n;i++){
        cout<<gg[i].first<<f[i].first<<endl;
    }
    int ans=calc(f,gg,0,n,0);
    return ans;
}

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
        vector<int> a(n),b(n),c(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
                for ( i = 0; i < n; i++) {
            cin >> b[i];
        }
                for ( i = 0; i < n; i++) {
            cin >> c[i];
        }
        cout<<courses(a,b,c);
    }
    return 0;
}

