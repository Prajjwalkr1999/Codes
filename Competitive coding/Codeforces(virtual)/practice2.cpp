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
        int i,j,n;
        cin >> n;
        int dp[n+2];
        memset(dp,0,sizeof(dp));
        dp[1]=1;
        dp[2]=6;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+(i-1)*5;
        }
        cout<<dp[n];

    }
    return 0;
}

