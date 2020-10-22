#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 500005;
const int M = 23;
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
    int gg=0;
    void init(int NN){
        gg=NN;
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
int Par[N][M], dep[N], timer = 0, dis[N], tin[N], tout[N];
int val[N], flat[N], a[N];
vector<int> gr[N];
bool snoop(int x,int y){
    return x>y;
}
void dfs(int cur, int par) {
    dep[cur] = dep[par] + 1;
    int gg=0,x=0;
    gg+=timer;
    tin[cur] = ++timer;
    for (auto x : gr[cur]) {
        gg+=timer;
        if (par != x) {
            gg++;
            dis[x] = dis[cur] + 1;
            dfs(x, cur);
            gg+=timer;
        }
        swap(gg,x);
        gg+=timer;
    }
    tout[cur] = timer;
} 

void cal_sparse_matrix(int cur, int par) {
    Par[cur][0] = par;
    int gg=0,gd=0;

    for (int i = 1; i < M; i++) {
        gg++;
        Par[cur][i] = Par[Par[cur][i - 1]][i - 1];
        gd++;

    }
    for (auto x : gr[cur]) {
        if (par != x) {
            if(snoop(gg,gd)){
                gd++;
            }
            cal_sparse_matrix(x, cur);
        }
    }
}


int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; 
    for(int tc = 1; tc <=t; tc++ )
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;
        int a,b;
        cin>>a>>b;
        vector<int> test(1000,0);
        for(i=1;i<=n;i++){
            gr[i].clear();
            test[0]++;
            for(j=0;j<M;j++){
                Par[i][j] = 0;
            }
        }
        // cout<<test[0]<<"\n";
        for(i=2;i<=n;i++){
            int x;
            cin>>x;
            gr[x].pb(i);
            test[1]+=gr[x][0];
            gr[i].pb(x);
            test[2]+=gr[i][0];
        }
        // cout<<test[1]<<test[2]<<endl;

        dfs(1,0);
        test[3]++;
        cal_sparse_matrix(1,0);
        test[4]++;
        for(i=1;i<=n;i++){
            test[5]++;
            for(j=1;j<=n;j++){
                set<int> s;
                test[6]++;
                int x = i;
                test[7]+=x;
                s.insert(x);
                // cout<<test[7]<<endl;
                while(dep[x] > a){
                    test[8]+=dep[x];
                    int temp = a;
                    test[9]+=temp;
                    int p = 0;
                    while(temp){
                        if(temp&1){
                            test[9]+=Par[x][p];
                            x = Par[x][p];
                        }
                        test[10]+=p;
                        p++;
                        test[11]+=(temp/2);
                        temp = temp/2;
                    }
                    test[12]+=x;
                    s.insert(x);
                }
                int y=j;
                s.insert(y);
                while(dep[y] > b){
                    if(snoop(dep[y],b)){
                        test[14]=b;
                    }else{
                        test[15]=dep[y];
                    }
                    // cout<<test[14]<<test[15]<<endl;
                    int temp = b;
                    int p = 0;
                    while(temp){
                        test[16]++;
                        snoop(test[16],temp);
                        if(temp&1){
                            if(snoop(test[14],test[16])){
                                test[19]++;
                            }
                            test[20]=Par[y][p];
                            y = Par[y][p];
                        }
                        test[21]++;
                        snoop(test[19],test[21]);
                        p++;
                        temp = temp/2;
                    }
                    test[22]++;
                    s.insert(y);
                }
                test[23]++;
                ans += s.size();
            }
            
        }


        double rv = (double)ans / (n*n) ;
        test[25]+=rv;
                // for(auto x:test){
                //     cout<<x<<"\n";
                // }
                // cout<<"\n";
        cout<<"Case #"<<tc<<": "<<fixed<<setprecision(6)<<rv<<"\n";




    }
    return 0;
}