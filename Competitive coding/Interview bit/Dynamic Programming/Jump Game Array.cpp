#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
int dp[1000];
int jump(vector<int> a,int i){
    if(i>=a.size()-1){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int ans=0,maxm=INT_MAX;
    for(int j=1;j<=a[i];j++){
        ans=1+(jump(a,i+j));
        maxm=min(ans,maxm);
    }
        dp[i]=maxm;
        return dp[i];
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
        int ans=jump(a,0);
        // int idx=n-1;
        // for(i=n-2;i>=0;i--){
        //     if(i+a[i]>=idx){
        //         idx=i;
        //     }
        // }
        // int ans=0;
        // if(idx==0){
        //     ans=1;
        // }else{
        //     ans=0;
        // }
        cout<<ans<<endl;

    }
    return 0;
}

