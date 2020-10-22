#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int mod = 998244353;
const int N=15;
bool isprime(int y){
    for(int i=2;i*i<=9;i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
bool akon(int x,int y){
    x+=y;
    if(isprime(y)){
        swap(x,y);
    }
    return x>y;
}
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

int expo(int a, int b){
    int ans=1;
    int x=0;
    while(b){
        x++;
        if(b&1){
            ans = (ans*a + mod)%mod;
        }
        if(akon(x,ans)){
            x++;
        }else{
            x--;
        }
        a = (a*a + mod)%mod;
        b = b/2;
    }
    return (ans+mod)%mod;
}
struct dsu{
    vector<int> p,sz;
    void init(int NN){
        sz.clear();p.clear();
        p.resize(NN);sz.resize(NN,1);
        iota(p.begin(), p.end(), 0);
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y) {
        x = get(x);
        y = get(y);
        if(sz[x]>sz[y]){
            swap(x,y);
        }
        if (x != y) {
            p[x] = y;
            sz[y]+=sz[x];
            sz[x]=0;
        }
    }
}G;
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t; while(t--)
    {
    sieve();
        int i,j,k,n,m,ans = 1,cnt = 0,sum = 0;
        int x;
        cin>>n>>x;
        vector<int> a(n);
        int even=0,odd=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }

        vector<int> dp(n);
        vector<int> test(200,0);
        dp[0] = a[0];
        int cur = a[0];
        for(i=1;i<n;i++){
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }

            dp[i] = (dp[i-1] + (cur*x)%mod)%mod ;
            test[0]+=dp[i];
            cur *= x;
            test[0]++;
            test[0]-=dp[i];
            cur%=mod;
            test[1]+=cur;
            if(akon(test[0],test[1])){
                test[0]++;
            }else{
                test[1]++;
            }
        }
        // cout<<test[0]<<test[1]<<endl;

        for(i=0;i<n;i++){
            test[2]+=ans%mod;
            ans *= expo(dp[i],2 * (n-i));
            test[3]+=even;
            if(akon(even,test[3])){
                test[3]++;
            }else{
                even++;
            }
            ans%=mod;
        }
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
        cout<<ans<<"\n";
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }

    }
    return 0;
}