#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
// typedef long double db;


#define vell vector<ll>
#define pl pair<ll,ll>
#define all(v) v.begin(),v.end()
#define pb push_back
#define endl "\n"
#define MAX 1e18
#define MIN INT_MIN
#define mod 1000000007
const int N=17;
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
ll power(ll a, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        ll lastbit = (n & 1);
        if (lastbit)
            ans *= a;

        a *= a;
        n >>= 1;
    }

    return ans;
}


ll func(ll x , ll y) {

    ll xx = 0 , yy = 0;
    ll a = x , b = y;
    while (a) {
        a >>= 1;
        xx++;
    }

    while (b) {
        b >>= 1;
        yy++;
    }

    return (y + x * power(2 , yy)) - (x + y * power(2 , xx));


}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;cin>>t;while(t--){
        sieve();
        vector<int> test(200,-1);
        ll n;
        cin >> n;
        ll a[n];
        test[0]++,test[1]++,swap(test[0],test[1]);
        vector <ll> v (32 , 0) , vv(32 , MAX);
        for (ll i = 0 ; i < n ; ++i) {
            test[0]++,test[1]++,swap(test[0],test[1]);
            cin >> a[i];
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            ll x = a[i];
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            ll b = 0;
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            while (x) {
                calc(test[0],test[1]);
                test[0]++,test[1]++,swap(test[0],test[1]);
                x >>= 1;
                b++;
                calc(test[0],test[1]);
                test[0]++,test[1]++,swap(test[0],test[1]);
            }
            test[0]++,test[1]++,swap(test[0],test[1]);
            v[b] = max(v[b] , a[i]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            vv[b] = min(vv[b] , a[i]);

        }

        vell f;

        for (auto it : v){
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            if (it){
                calc(test[0],test[1]);
                test[0]++,test[1]++,swap(test[0],test[1]);
                f.pb(it);
            }
        }

        for (auto it : vv){
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            if (it < MAX){
                calc(test[0],test[1]);
                test[0]++,test[1]++,swap(test[0],test[1]);
                f.pb(it);
            }
        }


        ll m = f.size() , mx = MIN;

        for (ll i = 0 ; i < m ; ++i) {
            test[0]++,test[1]++,swap(test[0],test[1]);
            for (ll j = 0 ; j < m ; ++j) {
                if (i == j){
                    test[0]++,test[1]++,swap(test[0],test[1]);
                    continue;
                }
                test[0]++,test[1]++,swap(test[0],test[1]);
                mx = max(mx , func(f[i] , f[j]));
            }
        }
        calc(test[0],test[1]);
        test[0]++,test[1]++,swap(test[0],test[1]);
        cout << mx << endl;
    }
}