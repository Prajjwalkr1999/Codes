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
int edit(string a,string b,int i,int j){
    if(i>=a.size()&&j>=b.size()){
        dp[i][j]=0;
        return 0;
    }
    if(i>=a.size()){
        dp[i][j]=(b.size()-j);
        return dp[i][j];
    }
    if(j>=b.size()){
        dp[i][j]= (a.size()-i);
        return dp[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(a[i]==b[j]){
        int ans=edit(a,b,i+1,j+1);
            dp[i][j]=ans;
            return dp[i][j];
    }else{
        int ans1=edit(a,b,i+1,j);
        int ans2=edit(a,b,i,j+1);
        int ans3=edit(a,b,i+1,j+1);
        dp[i][j]=min(ans3+1,min(ans1+1,ans2+1));
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
        int i,j;
        string a,b;
        cin>>a>>b;
        memset(dp,-1,sizeof(dp));
        int n=a.size();
        int ans=edit(a,b,0,0);
        cout<<ans<<endl;
    }
    return 0;
}

