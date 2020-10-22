#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
map<ll,ll> dp;
ll coin(ll n){
    if(n==1||n==0){
        return n;
    }
    if(dp.find(n)!=dp.end()){
        return dp[n];
    }
    ll ans=0, ans1,ans2,ans3;
    
        ans1=coin(n/2);

        
        ans2=coin(n/3);
    
        
        ans3=coin(n/4);


    ans= max(n,ans1+ans2+ans3);
    dp[n]=ans;
    return ans;
}
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
        ans=coin(n);
        cout<<ans;
    }
}

