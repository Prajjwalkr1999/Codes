#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 107;

int pr[N];
vector<int> primes;
// int n,m;
void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}
 // int check(vector<vector<int>> a,int i,int j){
 //         for(int k=0;i<n;k++){
 //                        if(a[k][j]==1){
 //                            return 0;
 //                        }
 //                    }
 //         for(int k=0;i<m;k++){
 //                        if(a[i][k]==1){
 //                            return 0;
 //                        }
 //                    }
 //        return 1;
 //    }
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    sieve();
    int t;cin>>t;while(t--)
    {
        int i,j,n,m;
        cin >> n>>m;
        // cout<<1;
        int a[n][m];
        for ( i = 0; i < n; i++) {
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int turn=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==1){
                   turn++;
                   break;
                   }
                }
            }
            int turn2=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(a[j][i]==1){
                    turn2++;
                    break;
                }
            }
        }
        // cout<<turn<<turn2;
        int as=n-turn;
        int vi=m-turn2;
        // cout<<as<<vi;
        int ans=min(as,vi);
        if(ans%2){
            cout<<"Ashish\n";
        }else{
            cout<<"Vivek\n";
        }
    }
    return 0;
}

