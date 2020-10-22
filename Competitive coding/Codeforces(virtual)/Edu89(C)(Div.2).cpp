#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 17;

int pr[N];
vector<int> primes;

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
        sieve();
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m,0));
        vector<int> cnt0(n+m , 0);
        vector<int> cnt1(n+m , 0);
        vector<int> x(n+m);
        vector<int> y(n+m);
        int b=n,c=m,ans=0;
        x[0]=n,y[0]=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]){
                    x[i]++;
                    cnt1[i+j]++;
                }else{
                    y[j]++;
                    cnt0[i+j]++;
                }
            }
        }
        for(int i=0;i<(n+m-2)/2;i++){
            c++;
            ans += min(cnt0[i]+cnt0[n+m-2-i] , cnt1[i]+cnt1[n+m-2-i]);
            y[0]+=x[0];
            b++;
        }
        if((n+m-2) % 2 == 1){
            b=n;
            c=m;
            ans += min(cnt0[(n+m-2)/2]+cnt0[(n+m-2)/2 + 1] , cnt1[(n+m-2)/2]+cnt1[(n+m-2)/2 + 1]);
            swap(b,c);
        }
        b++;
        c++;
        cout<<ans<<"\n";

    }
    return 0;
}

