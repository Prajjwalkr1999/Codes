#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
#define inf                     3e18
#define ld                      long double
//#define mp                      make_pair
#define vpll                    vector<pair<ll,ll>>
#define sll                     set<ll>
#define vll                     vector<ll>
#define vld                     vector<ld>
#define vvll                    vector<vector<ll>>
#define vvld                    vector<vector<ld>>
#define pll                     pair<ll,ll>
#define vvpll                   vector<vector<pair<ll,ll>>>
#define pqll                    priority_queue<ll>
#define mll                     map<ll,ll>
#define mlc                     map<ll,char>
#define um                      unordered_map
#define umll                    um<ll,ll>
#define umlc                    um<ll,char>
#define all(x)                  x.begin(),x.end()
#define fi                      first
#define se                      second
#define ln                      cout<<"\n";
#define endl                    "\n"
// #define test                    ll Testcases;cin>>Testcases;while(Testcases--)
#define isvowel(a)              (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define fastIO                  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(w,size)            for(ll i=0;i<size;i++) cout<<w[i]<<" ";
#define print(a)                cout<<a<<"\n";
#define mset(dp,no)             memset(dp,no,sizeof(dp))
#define input(a,n)              rep(i,0,n-1,1) cin>>a[i];
#define countbit                __builtin_popcount                                           //Number of setbits in decimal notation
#define lb(v,val)               lower_bound(all(v),val)-v.begin()
#define ub(v,val)               upper_bound(all(v),val)-v.begin()
#define SS                      stringstream
#define db(...)                 __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 <<'\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
 
// ll poww(ll b,ll e){if(e==0)return 1;else if(e%2==0){ll a=pow(b,e/2);return a*a;}else {ll a=pow(b,e/2);return b*a*a;}}
// ll powm(ll x,ll y,ll m=MOD){x=x%m;ll res=1;while(y){if(y&1)res=res*x;res%=m;y=y>>1;x=x*x;x%=m;}return res;}
// ll modInverse(ll a, ll m=MOD) { return powm(a, m-2, m);}


const int N = 15;
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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        if(akon(even,odd)){
            even++;
        }else{
            odd--;
        }
        sort(a.begin(),a.end());    
        if(akon(even,odd)){
            even++;
        }else{
            odd--;
        }
        vector<int> test(200,0);
        int days=0;
        if(akon(even,odd)){
            even++;
        }else{
            odd--;
        }
        for(int i=0;i<n;i++)
        {
            if(akon(even,odd)){
                even++;
            }else{
                odd--;
            }
            while(a[i]>x)
            {
                if(akon(even,odd)){
                    even++;
                }else{
                    odd--;
                }
                x*=2;
                if(akon(even,odd)){
                    even++;
                }else{
                    odd--;
                }
                days++;
                if(akon(even,odd)){
                    even++;
                }else{
                    odd--;
                }
            }
            if(a[i]*2>=x)
            {
                test[0]+=a[i];
                x=a[i]*2;
                test[1]+=x;
                a[i]=0;
                test[2]+=days;
                days++;
            }
        }
        // cout<<test[0]<<" "<<test[1]<<" "<<test[2]<<endl;

            for(int i=0;i<n;i++)
            {
               
                if(a[i]){
                    test[0]=days;
                    // cout<<test[0]<<endl;
                    days++;
                    test[1]+=days;
                }
            }
            if(akon(test[0],test[1])){
                even++;
            }else{
                odd++;
            }
                    // for(auto x:test){
                    //     cout<<x<<"\n";
                    // }
                    // cout<<"\n";
            cout<<days<<"\n";
            
    }
    return 0;
}