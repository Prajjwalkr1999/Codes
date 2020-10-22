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
        int i,j;
        // cin >> n;
        vector<vector<int>> cost(3,vector<int> (3,0));
        for ( i = 0; i < 3; i++) {
            for(j=0;j<3;j++){
                cin>>cost[i][j];
            }
        }
        int n=cost.size();
    int dp[n][3];
    dp[0][0]=cost[0][0];
    dp[0][1]=cost[0][1];
    dp[0][2]=cost[0][2];
    for(int i=1;i<n;i++){
        dp[i][0]=cost[i][0]+min(dp[i-1][1],dp[i-2][2]);
        dp[i][1]=cost[i][1]+min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=cost[i][2]+min(dp[i-1][0],dp[i-1][1]);
    }
    int ans1=min(dp[n-1][1],dp[n-1][2]);
    int ans=min(dp[n-1][0],ans1);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<< ans;
    }
    return 0;
}

