#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100;
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
        ll i, j, k, n, m, cnt = 0, sum = 0;
        cin >> n;
        cin>>m;

        ll f[n], p[n];
        for ( i = 0; i < n; i++) {
            cin >> f[i];
        }
          for ( i = 0; i < n; i++) {
            cin >> p[i];
        }

           //  vector<ll> ans(N);
           // for(i=0;i<N;i++){
           //  ans[i]=0;
           // }
        unordered_map<ll,ll> ans;
        for(i=0;i<n;i++){
            if(f[i]<=m){
                ans[f[i]]+=p[i];
            }
        }
        ll min=INT_MAX;
        ll idx;
        // for(i=0;i<=N;i++){
        //     if(ans[i]<min&&ans[i]!=0){
        //         min=ans[i];
        //         idx=i;
        //     }
        // }
         for(auto x:ans){
            if(x.second<min){
                min=x.second;
            }
         }
        cout<<min<<endl;


    }
}

