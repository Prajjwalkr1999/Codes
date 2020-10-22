#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
// int dp[1000][1000];
vector<vector<int>> dp;
int lcs(string a,string b,int i,int j){
    if(i<=0||j<=0){
        return 0;
    }
    if(dp[i-1][j-1]!=-1){
        return dp[i-1][j-1];
    }
    if(a[i-1]==b[j-1]){
        dp[i-1][j-1]=1+lcs(a,b,i-1,j-1);
        return dp[i-1][j-1];
    }else{
        dp[i-1][j-1]=max(lcs(a,b,i-1,j),lcs(a,b,i,j-1));
        return dp[i-1][j-1];
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
        string a,b;
        cin>>a>>b;
        dp.resize(a.size()+1,vector<int>(b.size()+1,-1));
        cout<<lcs(a,b,a.size(),b.size());
        // cout<<a.substr(1,a.size()-1);

    }
    return 0;
}

