#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, mul=1,maxm, ans = 1, cnt = 2, sum = 0;
        cin >> n;
        std::vector<ll> a(n+1);
        std::vector<ll> dp(n+1,1);
        for ( i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i]=1;
        }
        for(i=n/2;i>=1;i--){
            // maxm=0;
            ans=0;
            cnt=2;
            mul=i*cnt;
            while((mul)<=n){
                if(a[mul]>a[i]){
                    ans=max(ans,dp[mul]);
                }
                    cnt++;
                    mul=i*cnt;
                
            }
            dp[i]+=ans;
        }
        // for(auto x:dp){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        ll maxi=1;
        for(i=1;i<=n;i++){
            maxi=max(maxi,dp[i]);
        }

        cout<<maxi<<"\n";

    }
}

