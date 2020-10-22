#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll dp[N]={};
ll tile(ll m,ll n){
    
    if(m==n){
        dp[n]=2;
        return 2;
    }

    if(m>n){
        dp[n]=1;
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    if(n>m){
        int a=tile(m,n-1);
        int b=tile(m,n-m);
        return dp[n] = a+b;
    }
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
        cin >> n>>m;
        // cout<<dp[0];
        ans=tile(m,n);   
        cout<<ans<<endl;
    }
}

