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
    
        ll n,t,i,j,count=0,ans=0,sum=0;
        cin >> t;
         // ll m;
        while(t--){
        cin>>n;
        pair<int,int> a[n];
        for ( i = 0; i < n; i++) {
            cin >>sum;
            a[i].F=sum;
            a[i].S=i;
        }
        ll b[n];
         for ( i = 0; i < n; i++) {
                    cin>>b[i];
                }

        sort(a,a+n);
        ll dp[n+1];
        for(i=0;i<n+1;i++) dp[i]=1;

        for(i=1;i<n;i++){
            ans=0;
            ll curlen=0;
            for(j=0;j<i;j++){
                if(b[a[j].S]<=b[a[i].S]){
                    curlen=dp[j]+1;
                }
                dp[i]=max(curlen,dp[i]);
            }
            // dp[i]=ans+1;
            count=max(count,dp[i]);
        }
        cout<<count<<endl;
    }
}

