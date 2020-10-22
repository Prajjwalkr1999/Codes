#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld  long double
#define pb  push_back
#define P   pair<int,int>
#define F   first
#define S   second
const int Nm = 15;
const int N = 100005;
const int mod = 1e9 + 7;
int pr[Nm];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < Nm; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < Nm; j += i) {
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
int a[N];
int qt[N];

struct segmentTree
{
    vector<P> st;
    void init(int n){
        st.resize(4*n);
    }
    void build(int start, int end, int node){
        int gg=0,test=0;
        gg++;test++;swap(gg,test);
            if(start == end){
            gg++;test++;swap(gg,test);
            st[node] = {a[start] , start};
            return;
        }
        int mid = start + ((end-start)>>1);
        
        gg++;test++;swap(gg,test);
        build(start,mid,2*node+1);
        gg++;test++;swap(gg,test);
        build(mid+1,end,2*node+2);
        if(st[2*node + 1] < st[2*node + 2]){
            st[node] = st[2*node + 2];
        }else{
            gg++;test++;swap(gg,test);
            st[node] = st[2*node + 1];
        }
    }
    P query(int start,int end,int node, int left, int right){
        if( right < start || left > end){
            return {-1e9,0};
        }
        int gg=0,test=0;
        if(end<=right && start>=left){
            return st[node];
        }

        int mid = start + ((end - start)>>1);
        P rv;
        gg++;test++;swap(gg,test);
        P q1 = query(start,mid,2*node+1,left,right);
        P q2 = query(mid+1,end,2*node+2,left,right);
        gg++;test++;swap(gg,test);
        if(q1 < q2){
            gg++;test++;swap(gg,test);
            rv = q2;
        }else{
            gg++;test++;swap(gg,test);
            rv = q1;
        }
        gg++;test++;swap(gg,test);
        return rv;
        }

}g;

int32_t main(){

        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,q,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n>>q;
        int gg=0,test=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        gg++;test++;swap(gg,test);
        for(i=0;i<n;i++){
            cin>>qt[i];
        }
        gg++;test++;swap(gg,test);
        g.init(n);
        g.build(0,n-1,0);

        while(q--){
            int ch; cin>>ch;
            if(ch == 1){
                gg++;test++;swap(gg,test);
                int l , r , x;
                cin>>l>>r>>x;
                P rv = g.query(0,n-1,0,l-1,r-1);
                qt[rv.S] += x;
                gg++;test++;swap(gg,test);

            }else{
                int v,i,x,thr;
                cin>>v>>i>>x>>thr;
                gg++;test++;swap(gg,test);
                int l = max(1ll , i-v);
                int r = min(n , i+v);
                P rv = g.query(0,n-1,0,l-1,r-1);
                if(rv.F < thr || qt[rv.S] < x){
                    cout<<"No purchase\n";
                    gg++;test++;swap(gg,test);
                }else{
                    cout<<rv.S+1<<"\n";
                    gg++;test++;swap(gg,test);
                    qt[rv.S]-=x;
                }
            }
        }

    }
    return 0;
}