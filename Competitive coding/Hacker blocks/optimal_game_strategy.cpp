#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 1005;
ll f[N][N];
ll game(ll i,ll j,ll a[],ll n){
    if(i>j){
        return 0;
    }
    if(i==j+1){
        return max(a[i],a[j]);
    }
    if(f[i][j]!=-1)
    {
        return f[i][j];
    }
    f[i][j]=max((a[i]+min(game(i+2,j,a,n),game(i+1,j-1,a,n))),(a[j]+min(game(i,j-2,a,n),game(i+1,j-1,a,n))));
    return f[i][j];
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    for ( ll i = 0; i < N; i++) {
        for(ll j=0;j<N;j++){
            f[i][j]=-1;
        }  
                }
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
         
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        ans=game(0,n-1,a,n);
        cout<<ans<<endl;

    }
}

