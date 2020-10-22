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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<vector<ll>> a(n,vector<ll>(n));
        string s;
        for ( i = 0; i < n; i++) {
            cin>>s;
            for(j=0;j<n;j++){
               a[i][j]=s[j]-'0';
           }
        }

        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(a[i][j]==1){
                    if(a[i+1][j]==0&&a[i][j+1]==0){
                        ans=1;
                        break;
                    }
                }
            }
            if(ans){
                break;
            }
        }
        if(ans){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}

