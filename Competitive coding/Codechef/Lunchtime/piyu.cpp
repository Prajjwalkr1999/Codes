#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second


const int mod = 1e9+7;
const int N = 15;
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
bool calc(int a,int b){
    a+=b;
    return a>b;
}
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    

    vector<int> a(3);
    int test[30];
    test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);

    a[0] = 0;
    test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);    
    a[1] = 1;
    test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
    a[2] = 2;
    test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
    for(int i=3;;i++){
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        if(a[i-1] > 1e9+1){
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            break;
        }
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        a.pb(a[i-1] + (upper_bound(a.begin() , a.end() , i-1) - a.begin())-1);
        
        // cnt++;
    }
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;

        int l , r;
        cin>>l>>r;
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        i = (upper_bound(a.begin() , a.end() , l) - a.begin())-1;
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        j = (upper_bound(a.begin() , a.end() , r) - a.begin())-1;
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        if(i==j){
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans += ((r-l+1)*((i*i)%mod))%mod;
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans%=mod;
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            cout<<ans<<"\n";
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            continue;
        }
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        ans += ((a[i+1] - l)*((i*i)%mod))%mod;
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans%=mod;
        ans += ((r-a[j]+1)*((j*j)%mod))%mod;
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans%=mod;
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        for(k = i+1; k < j; k++){
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans += ((a[k+1]-a[k])*((k*k)%mod))%mod;
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
            ans%=mod;
            test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        }
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
        cout<<ans<<"\n";
        test[0]++;test[1]++;swap(test[0],test[1]);calc(test[0],test[1]);
    }
    return 0;
}