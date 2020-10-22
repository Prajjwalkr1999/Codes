#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int mod = 1e9+7;

int modexpo(int a, int b){
    int ans=1;
    
    while(b){
        if(b&1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b = b/2;
    }
    return ans;
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans=0;
        cin>>n;
        cin>>k;
        int dp[2*n];
        dp[1] = k;
        ans += k;
        for(i=3;i<=2*n-1;i+=2){
            dp[i] = (dp[i-2] * modexpo(dp[i-2],i-2))%mod;
            ans = (ans + modexpo(dp[i],i))%mod;
        }

        cout<<ans<<"\n";
    }
    return 0;
}