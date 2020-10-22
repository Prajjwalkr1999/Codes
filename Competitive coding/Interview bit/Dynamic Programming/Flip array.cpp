#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
int dp[1000];
int knapsack(vector<int> a,int i,int sum){
    if(i>=a.size()||sum<0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(sum-(2*a[i])<0){
        dp[i]=knapsack(a,i+1,sum);
        return dp[i];
    }else{
        int ans1=knapsack(a,i+1,sum-(2*a[i]));
        int ans2=knapsack(a,i+1,sum);
        dp[i]=1+max(ans1,ans2);
        return dp[i];
    }
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
        int sum=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        memset(dp,-1,sizeof(dp));
        int ans=knapsack(a,0,sum);
        cout<<ans<<endl;

    }
    return 0;
}

