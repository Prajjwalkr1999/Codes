#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

#define x 1005
// ll M;
// ll N;
ll count1(ll m,ll n,ll mat[x][x],ll &maxsize){
    if(m==0||n==0){
        maxsize=max(maxsize,mat[m][n]);
        return mat[m][n];
    }

    ll top=count1(m-1,n,mat,maxsize);
    ll left=count1(m,n-1,mat,maxsize);
    ll centre=count1(m-1,n-1,mat,maxsize);

    ll size=0;
    if(mat[m][n]!=0){
    size=1+min(min(top,left),centre);
    }
    maxsize=max(maxsize,size);

    return size;
}

ll find(ll mat[x][x],ll m,ll n){

        ll found[m][n];

        ll max=0;

        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                found[i][j]=mat[i][j];

                if(i&&j&&mat[i][j]){
                    found[i][j]=min(min(mat[i-1][j],mat[i][j-1]),mat[i-1][j-1])+1;
                }

                if(max<found[i][j]){
                    max=found[i][j];
                }
            }
        }
        return max;
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
        ll i, j, k, N, M, ans = 0, cnt = 0, sum = 0;
        cin >> N>>M;
        ll a[x][x];
        for ( i = 0; i < N; i++) {
            for(j=0;j<M;j++){
                cin>>a[i][j];
            }
        }
        ll size=0;
        ans=find(a,N-1,M-1);
        cout<<ans<<endl;
    }
}

