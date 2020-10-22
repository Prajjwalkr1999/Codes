#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
const int N = 100005;
ll dp[N];
ll count(ll n){
    for(ll i=0;i<=n;i++){
        if(i<=2){
            dp[i]=i;
        }
        else{
            dp[i]=dp[i-1]+(i-1)*dp[i-2];
        }
    }
    return dp[n];
}
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ans=count(n);
        cout<<ans<<endl;
    }
}

