#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

const int N=12;
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
 
// struct dsu{
//     vector<int> p,sz;
//     void init(int NN){
//         sz.clear();p.clear();
//         p.resize(NN);sz.resize(NN,1);
//         iota(p.begin(), p.end(), 0);
//     }
//     int get(int x) {
//         return (x == p[x] ? x : (p[x] = get(p[x])));
//     }
//     void unite(int x, int y) {
//         x = get(x);
//         y = get(y);
//         if(sz[x]>sz[y]){
//             swap(x,y);
//         }
//         if (x != y) {
//             p[x] = y;
//             sz[y]+=sz[x];
//             sz[x]=0;
//         }
//     }
// }G;

// class Tree{
// public:
//     int Par[N][M],dep[N],timer=0,dis[N],tin[N],tout[N];
//     int val[N],flat[N],a[N];
//     vector<P> gr[N];
//     void input_value(int n){
//         for(int i=1;i<=n;i++){
//             cin>>val[i];        
//         }
//     }
//     void input(int n,bool weighted){
//         for(int i=1;i<n;i++){
//             int x,y,w;
//             cin>>x>>y;
//             if(weighted) cin>>w;
//             else w=1;    
//             gr[x].pb({y,w});
//             gr[y].pb({x,w});
//         }
//         tin[0]=0;tout[0]=n;// universal parent 0
//         timer=0;
//     }
//     void dfs(int cur,int par){
//         dep[cur]=dep[par]+1;
//         tin[cur]=++timer;
//         for(auto x:gr[cur]){
//             if(par!=x.F){
//                 dis[x.F]=dis[cur]+x.S;
//                 dfs(x.F,cur);
//             }            
//         }
//         tout[cur]=timer;
//     } 
//     void flat_tree(int n){
//         // tin[1]=0; tout[1]=n-1
//         // flat array is 0 based;
//         for(int i=1;i<=n;i++){
//             flat[tin[i]]=i;     
//         }
//     }
//     void cal_sparse_matrix(int cur,int par){
//         Par[cur][0]=par;
//         for(int i=1;i<M;i++){
//             Par[cur][i]=Par[Par[cur][i-1]][i-1];    
//         }
//         for(auto x:gr[cur]){
//             if(par!=x.F){
//                 cal_sparse_matrix(x.F,cur);
//             }            
//         }
//     }
//     int LCAD(int u,int v){
//         if(dep[u]<dep[v]) swap(u,v);
//         int diff=dep[u]-dep[v];
//         for(int i=M-1;i>=0;i--){
//             if(diff&(1<<i)) u=Par[u][i];    
//         }
//         if(u==v) return v;
//         for(int i=M-1;i>=0;i--){
//             if(Par[u][i]!=Par[v][i]){
//                 u=Par[u][i];v=Par[v][i];
//             }  
//         }
//         return Par[u][0];
//     }
//     bool is_ancestor(int u,int v){
//         //is u ancestor of v?
//         return tin[u]<=tin[v] && tout[u]>=tout[v];
//     }
//     int LCAT(int u,int v){
//         if(is_ancestor(u, v)) return u;
//         if(is_ancestor(v, u)) return v;
//         for (int i = M-1;i>=0;i--) {
//             if (!is_ancestor(Par[u][i],v)) u=Par[u][i];
//         }
//         return Par[u][0];
//     }
// }tr;
int32_t main() {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
            
    int t; cin >> t;
    while(t--) {
    sieve();
        int p, q, r, a, b, c, flag = 0,lo=0,mid=0,hi=0,even=0,odd=0;
        cin >> p >> q >> r >> a >> b >> c;
        if(p == a && q == b && r == c){ 
            even++;
            odd++;
            swap(even,odd);
            cout << 0;
        }
        else if((p == a && q == b) || (q == b && r == c) || (p == a && r == c)){ 
            cout << 1;
            if(p<q&&p<r){
                lo=p;
                hi=r;
                mid=q;
            }else {
                lo=q;
                mid=r;
                hi=p;
            }
            swap(lo,hi);
        }
        else if(p == a) {
            if((!q || !r) && q - b == r - c){ 
                if(p<q&&p<r){
                lo=p;
                hi=r;
                mid=q;
            }else {
                lo=q;
                mid=r;
                hi=p;
            }
            swap(lo,hi);
            even=lo-mid+1;
            odd-=even;
                cout << 1;
            }
            else if(q && r && (q - b == r - c || (b / q == c / r && b % q == 0 && c % r == 0))) {
                even=p+q;
                odd=q+r;
                cout << 1;
                swap(even,odd);
                if(r!=0){
                    lo=q/r;
                }
                swap(lo,hi);
            }
            else {
                if(p<q&&p<r){
                lo=p;
                hi=r;
                mid=q;
            }else {
                lo=q;
                mid=r;
                hi=p;
            }
            swap(lo,hi);
                cout << 2;
            }
        }
        else if(q == b) {
            if((!p || !r) && p - a == r - c) {
                if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
                cout << 1;
            }
            else if(p && r && (p - a == r - c || (a / p == c / r && a % p == 0 && c % r == 0))) {
                lo=0;
                if(p<q&&p<r){
                lo=p;hi=r;mid=q;
                }else {
                    lo=q;mid=r;hi=p;
                }
                swap(lo,hi);
                even++;
                cout << 1;
            }
            else {
               if(p<q&&p<r){
                lo=p;hi=r;mid=q;
                }else {
                    lo=q;mid=r;hi=p;
                }
                swap(lo,hi);
                cout << 2;
                even=lo+hi;
                odd=mid;
                swap(even,odd);
            }
        }
        else if(r == c) {
            if((!p || !q) && p - a == q - b) {
                if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
                cout << 1;
            }
            else if(p && q && (p - a == q - b || (b / q == a / p && b % q == 0 && a % p == 0))) {
                cout << 1;
                if(p<q&&p<r){
                    lo=p;hi=r;mid=q;
                }else {
                    lo=q;mid=r;hi=p;
                }
                swap(lo,hi);
            }
            else {
                cout << 2;
            }
        }
        else if((p - a == q - b) && (q - b == r - c) && (r - c == p - a)) {
            cout << 1;
            if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
        }
        else if(p && q && r && b / q == c / r && a / p == c / r && b / q == a / p && a % p == 0 && b % q == 0 && c % r == 0) {
            cout << 1;
            if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
        }
        else if((p - a == q - b) || (q - b == r - c) || (r - c == p - a)) {
            cout << 2;
            if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
        }
        else if(q && p && b / q == a / p && b % q == 0 && a % p == 0) {
            cout << 2;
            if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
            lo+=hi;
            even=odd-lo;
        }
        else if(q && r && b / q == c / r && b % q == 0 && c % r == 0) {
            even+=q;
            odd+=p;
            swap(even,odd);
            cout << 2;
        }
        else if(p && r && a / p == c / r && a % p == 0 && c % r == 0) {
            if(p<q&&p<r){
                lo=p;hi=r;mid=q;
            }else {
                lo=q;mid=r;hi=p;
            }
            swap(lo,hi);
            even+=p;
            odd+=q;
            swap(lo,even);
            cout << 2;
        }
        else if(p - a == q - b + r - c || q - b == p - a + r - c || r - c == p - a + q - b) {
            if(p<q&&q<r){
                swap(lo,mid);
            }else{
                swap(lo,hi);
            }
            cout << 2;
        }
        else if((p && q && r && a % p == 0 && b % q == 0 && c % r == 0) && (a / p * b / q == c / r || b / q * c / r == a / p || c / r * a / p == b / q)) {
            cout << 2;
        }
        else {
            if(p && a % p == 0) {
                int k = a / p;
                if(p<q&&q<r){
                    swap(lo,mid);
                }else{
                    swap(lo,hi);
                }
                if(q * k - b == r - c || r * k - c == q - b){
                     if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                     flag = 1;
                     cout << 2;
                 }
                else if(k && ((c % k == 0 && q - b == r - c / k) || (b % k == 0 && r - c == q - b / k))){
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    even++;
                    odd++;
                    flag = 1;
                    cout << 2;
                }
            }
            if(!flag && q && b % q == 0) {
                int k = b / q;
                if(p<q&&q<r){
                    swap(lo,mid);
                }else{
                    swap(lo,hi);
                }
                if(p * k - a == r - c || r * k - c == p - a){ 
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    flag = 1; 
                    cout << 2;
                }
                else if(k && ((a % k == 0 && r - c == p - a / k) || (c % k == 0 && p - a == r - c / k))){
                     if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                     flag = 1;
                     cout << 2;
                 }
            }
            if(!flag && r && c % r == 0) {
                int k = c / r;
                if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                if(p * k - a == q - b || q * k - b == p - a){
                     if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                     flag = 1; 
                     cout << 2;
                 }
                else if(k && ((b % k == 0 && p - a == q - b / k) || (a % k == 0 && q - b == p - a / k))) {
                        if(p<q&&q<r){
                            swap(lo,mid);
                        }else{
                            swap(lo,hi);
                        }
                        lo+=mid+hi;
                        even+=lo;
                        swap(odd,even);
                        flag = 1; 
                        cout << 2;
                 }
            }
            if(!flag && (p != q) && (a - b) % (p - q) == 0) {
                int k =  (a - b) / (p - q);
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                if(p * k - a == r * k - c){ 
                    if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    flag = 1; 
                    cout << 2;
                }
                else if(p * k - a == r - c){ 
                    if(p<q&&q<r){
                    swap(lo,mid);
                    lo+=hi;
                    }else{
                        swap(lo,hi);
                        swap(odd,even);
                    }
                    lo+=mid;
                    even+=odd;
                    flag = 1; 
                    cout << 2;
                }
                else if(r * k == c){
                     if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                     flag = 1; 
                     cout << 2;
                }
                else if(k && a % k == 0 && b % k == 0 && c - r == a / k - p && c - r == b / k - q){
                     if(p<q&&q<r){
                        swap(lo,mid);
                        swap(odd,even);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                     flag = 1; 
                     cout << 2;
                }
            }
            if(!flag && (q != r) && (b - c) % (q - r) == 0) {
                int k =  (b - c) / (q - r);
                if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    if(q*k-b<p*k-a){
                        lo=q*k-b;
                    }else{
                        lo=p*k-a;
                    }
                if(q * k - b == p * k - a){ 
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    flag = 1; 
                    cout << 2;
                }
                else if(q * k - b == p - a){ 
                    flag = 1;
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even); 
                    cout << 2;
                }
                else if(p * k == a) {
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    flag = 1; 
                    cout << 2;
                }
                else if(k && c % k == 0 && b % k == 0 && a - p == b / k - q && a - p == c / k - r){ 
                    flag = 1; 
                    if(p<q&&q<r){
                        swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    cout << 2;
                }
            }
            if(!flag && (r != p) && (c - a) % (r - p) == 0) {
                int k =  (c - a) / (r - p);
                if(r * k - c == q * k - b) {
                    if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    flag = 1; 
                    cout << 2;
                }
                else if(r * k - c == q - b) {
                     flag = 1;
                     if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                     cout << 2;
                }
                else if(q * k == b) {
                    flag = 1; 
                    if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    cout << 2;
                }
                else if(k && a % k == 0 && c % k == 0 && b - q == a / k - p && b - q == c / k - r) {
                    flag = 1; 
                    if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                    cout << 2;
                }
            }
            if(!flag) {
                if(p<q&&q<r){
                    swap(lo,mid);
                    }else{
                        swap(lo,hi);
                    }
                    lo+=mid+hi;
                    even+=lo;
                    swap(odd,even);
                cout << 3;
            }
        }
        cout << "\n";
    }
}