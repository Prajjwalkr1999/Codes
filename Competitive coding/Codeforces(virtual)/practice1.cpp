#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int calc(vector<vector<int>> a,int i,int j,int n){
    if(i>=n||i<0) return 0;
    if(j>=n || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans1=calc(a,i+1,j,n);
    int ans2=calc(a,i+1,j-1,n);
    int ans3=calc(a,i+1,j+1,n);
    dp[i][j]=a[i][j]+max(ans1,max(ans2,ans3));
    return dp[i][j];
}
int main() {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    //code
    int t;cin>>t;while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        
        int ans1=INT_MIN;
        for(int i=0;i<n;i++){
            memset(dp,-1,sizeof(dp));
            int ans=calc(a,0,i,n);
            cout<<ans<<"\n";
            ans1=max(ans1,ans);
        }
        cout<<ans1<<"\n";
    }
    return 0;
}