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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        ll dp[100];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll best=-1;
         for ( int i = 0; i < 100; i++) {
                   dp[i]=1;
                }
        for(i=1;i<n;i++){
            ll curlen=0;
            for(j=0;j<i;j++){
                if(a[j]<=a[i]){
                    curlen=1+dp[j];
                }
                dp[i]=max(curlen,dp[i]);
                // cout<<"i= "<<i<<" val= "<<dp[i]<<endl;
            }
        best=max(best,dp[i]);
        }

        cout<<best<<endl;
    }
}


