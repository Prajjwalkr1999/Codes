#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
int dp[1000][1000];
int check(vector<int> d,vector<int> p,int sum,int i){
    if(i>=d.size()||sum==0){
        return 0;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    if(d[i]>sum){
        dp[i][sum]=check(d,p,sum,i+1);
        return dp[i][sum];
    }
    int ans1=p[i]+check(d,p,sum-d[i],i+1);
    int ans2=check(d,p,sum,i+1);
    dp[i][sum]=min(ans1,ans2);
    return dp[i][sum];
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
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<f.size();i++){
            memset(dp,-1,sizeof(dp));
            ans+=check(d,a,f[i],0);
        }
        return ans;
    }
    return 0;
}

