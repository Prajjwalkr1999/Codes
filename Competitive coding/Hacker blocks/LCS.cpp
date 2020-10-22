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
    
    string a,b;
    cin>>a>>b;
    ll as=a.size();
    ll bs=b.size();
    ll dp[as+1][bs+1];
    for(ll i=0;i<as+1;i++) dp[0][i]=0;
    for(ll i=0;i<bs+1;i++) dp[i][0]=0;
    for(ll i=1;i<=as;i++){
        ll q=0;
        for(ll j=1;j<=bs;j++){
            if(a[i-1]==b[j-1]){
                q=1+dp[i-1][j-1];
            }else{
                q=max(dp[i-1][j],dp[i][j-1]);
            }
            dp[i][j]=q;
        }
    }
    // cout<<dp[as][bs];

    ll x=dp[as][bs];
    string lcs;
    lcs.resize(x);
    ll i=as,j=bs;
    while(i>0&&j>0){

        if(a[i-1]==b[j-1]){
            lcs[x-1]=a[i-1];
            i--;
            j--;
            x--;
        }else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    cout<<lcs;
}

