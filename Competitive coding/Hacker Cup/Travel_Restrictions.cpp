#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N=15;
int pr[N];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.push_back(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int t;cin>>t;
    int xc=1;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int dp[n][n];
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            for(int j=i+1;j<n;j++){
                int val=0;
                if(b[j-1]=='Y'&&a[j]=='Y'){
                    val=1;
                }
                int x=dp[i][j-1];
                if(x==val){
                    dp[i][j]=x;
                }else{
                    dp[i][j]=0;
                }
            }
            for(int j=i-1;j>=0;j--){
                int val=0;
                if(b[j+1]=='Y'&&a[j]=='Y'){
                    val=1;
                }
                int x=dp[i][j+1];
                if(x==val){
                    dp[i][j]=val;
                }else{
                    dp[i][j]=0;
                }
            }
        }

        cout<<"Case #"<<xc<<":\n";
        xc++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]==1){
                    cout<<"Y";
                }else{
                    cout<<"N";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}

