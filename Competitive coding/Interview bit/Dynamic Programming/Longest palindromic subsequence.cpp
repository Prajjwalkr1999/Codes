#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
vector<vector<int>> dp;
int lps(string a,int i,int j){
    if(i==a.size()-1||j<=0||i>=j){
        dp[i][j]=0;
        return dp[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(a[i]==a[j]){
        int ans=lps(a,i+1,j-1);
        // ans=a[i]+ans+a[i];
        // cout<<ans<<"\n";
        ans+=2;
        dp[i][j]=ans;
        return dp[i][j];
    }else{
        int ans1=lps(a,i+1,j);
        int ans2=lps(a,i,j-1);
        if(ans1>ans2){
            dp[i][j]=ans1;
        }else{
            dp[i][j]=ans2;
        }
        return dp[i][j];
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
        // cin >> n;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        string a;
        cin>>a;
        n=a.size();
        dp.resize(1000,vector<int> (1000,-1));
        int ans=lps(a,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}

