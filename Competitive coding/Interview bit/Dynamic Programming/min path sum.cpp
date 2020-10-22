#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int m,n;
int dp[1000][1000];
int minpath(vector<vector<int>> a,int i,int j){
    if(i==n-1&&j==m-1){
        return a[i][j];
    }
    if(i>=n||j>=m){
        return INT_MAX;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans1=INT_MAX,ans2=INT_MAX;
    if(i<n-1){
        ans1=minpath(a,i+1,j);
    }
    if(j<m-1){
        ans2=minpath(a,i,j+1);
    }
    dp[i][j]=a[i][j]+min(ans1,ans2);
    return dp[i][j];
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
        int i,j;
        cin >> n>>m;
        vector<vector<int>> a(n,vector<int> (m));
        for ( i = 0; i < n; i++) {
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        memset(dp,-1,sizeof(dp));
        cout<<minpath(a,0,0);

    }
    return 0;
}

