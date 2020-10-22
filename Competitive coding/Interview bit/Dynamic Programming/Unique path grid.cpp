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
        int i,j,n,m;
        cin >> n>>m;
        vector<vector<int>> a(n,vector<int> (m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(i=0;i<n;i++){
            if(a[i][0]!=1){
                dp[i][0]=1;
            }else{
                dp[i][0]=0;
            }
        }

        for(j=0;j<m;j++){
            if(a[0][j]!=1){
                dp[0][j]=1;
            }else{
                dp[0][j]=0;
            }
        }

        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(a[i][j]!=1){
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }else{
                    dp[i][j]=0;
                }
            }
        }
        cout<<dp[n-1][m-1];

    }
    return 0;
}

