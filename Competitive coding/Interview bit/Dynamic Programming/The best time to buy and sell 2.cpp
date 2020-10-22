#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
// vector<int> dp;
// int calc(vector<int> a,int i,int min){
//     if(i>=a.size()){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     if(a[i]<a[min]){
//         return calc(a,i+1,i);
//     }
//     int ans1=0,ans2=0;
//     ans1=(a[i]-a[min])+calc(a,i+1,i);
//     ans2=calc(a,i+1,min);
//     dp[i]=max(ans1,ans2);
//     return dp[i];
// }
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        // dp.resize(n+10,-1);
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        // cout<<calc(a,0,0)<<endl;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                ans+=a[i+1]-a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

