#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
vector<pair<int,int>> dp;
void check(int n){
    dp[1]={1,1};
    dp[2]={2,3};
    dp[3]={4,5};
    int x=4;
    for(int i=4;i<n;i++){
        int size=dp[i-1].S-dp[i-1].F + 1;
        for(j=x;j<(x+size);j++){
            dp[j]={dp[j-1].S+1,dp[j-1].S+(i-1)};
            // i++;
        }
        x+=size;
    }
}

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
        int i,j,l,r;
        cin >> l>>r;


    }
    return 0;
}

