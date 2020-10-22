#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
int dp[2000][2000];
int coin(vector<int> a,int i,int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(i>=a.size()&&n>=1){
        return 0;
    }
    if(dp[i][n]!=-1){
        return dp[i][n];
    }
    dp[i][n]=coin(a,i+1,n)+coin(a,i,n-a[i]);
    return dp[i][n];
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
        int ans=coin(a,0,4);
        cout<<ans<<endl;

    }
    return 0;
}

