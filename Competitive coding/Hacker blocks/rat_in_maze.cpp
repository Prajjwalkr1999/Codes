#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 1005;

ll grid[N][N];
ll sol[N][N]={0};
bool solve(ll i,ll j,ll m,ll n){
    if(i==n&&j==m){
        sol[i][j]=1;
         for ( ll i = 0; i < n; i++) {
                 for(ll j=0;j<m;j++){
                    cout<<sol[i][j]<<" ";
                 }   
                 cout<<endl;
                }
                cout<<endl;
    }
    if(i>n||j>m){
        return false;
    }
    if(grid[i][j]=='X'){
        return false;
    }
    sol[i][j]=1;
    bool right=solve(i,j+1,m,n);
    bool left;
    if(right==false){
     left=solve(i+1,j,m,n);
    }

    sol[i][j]=0;

    if(right||left){
        return true;
    }

    return false;

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
        cin >> n>>m;
        // ll a[n];
        for ( i = 0; i < n; i++) {
            for(j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }

    }
}

