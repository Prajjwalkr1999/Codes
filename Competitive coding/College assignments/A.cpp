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
vector<int> vis(N);
vector<int> gr[N];
void cycle(int cur,int par,bool &f){
    vis[cur]=1;
    if(f) return;
    for(auto x:gr[cur]){
        if(!vis[x]){
            cycle(x,cur,f);
        }else if(x!=par&&vis[x]==1){
            f=true;
        }
    }
    vis[cur]=2;
}
struct dsu {
    vector<int> p, sz;
    int comp;
    void init(int NN) {
        sz.clear(); p.clear();
        p.resize(NN); sz.resize(NN, 1);
        iota(p.begin(), p.end(), 0);
        comp = NN;
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y) {
        x = get(x);
        y = get(y);
        if (x != y) {
            p[x] = y;
            sz[y] += sz[x];
            sz[x] = 0;
            comp--;
        }
    }
} G;

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        sieve();
        int i,j,n,m;
        cin >> n>>m;
        vector<P> g;
        for(i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            g.pb({x,y});
        }
        int cnt=0;
        bool f=false;
        int gg=0,test=0;
         G.init(n+1);
        for(auto x:g){
            test++;
            if(G.get(x.F) != G.get(x.S)){
                gg+=test;
                G.unite(x.F , x.S);
            }else{
                gg--;
                cnt++;
            }
            swap(gg,test);
        }
            cout<<cnt<<"\n";

    }
    return 0;
}

