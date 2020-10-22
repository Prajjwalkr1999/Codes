#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

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

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; 
    for(int tc = 1 ; tc <= t; tc++)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        int even=0,od=0;
        cin>>n;
        int a , b , c;
        cin>>a>>b>>c;
        if(a%b){
            even+=b;
        }else{
            od+=a;
        }
        vector<int> v;
        vector<int> test(20);
        if(c > a || c > b){
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<"Case #"<<tc<<": ";
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<"IMPOSSIBLE\n";
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            continue;
        }
        if(a + b - c > n){
            cout<<"Case #"<<tc<<": ";
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<"IMPOSSIBLE\n";
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            continue;
        }

        deque<int> q;
        for(i=0;i<c;i++){
            q.pb(n);
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        }
        int rem = n - (a + b - c);
        test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        a -= c;
        test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        b -= c;
        test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        bool f = 1;
        test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        while(rem--){
            if(a){
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
                q.push_front(1);
            }else if(b){
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
                q.push_back(1);
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            }else{
                if(q.size() == 1){
                    test[0]++;even++;od--;swap(test[0],od);swap(even,od);
                    f = 0;
                    break;
                }
                q.pop_back();
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
                q.push_back(1);
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
                q.push_back(n);
                test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            }
        }
        if(!f){
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<"Case #"<<tc<<": ";
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<"IMPOSSIBLE\n";
            continue;
        }

        for(i=1;i<=a;i++){
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            q.push_front(n-1);
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        }
        for(i=1;i<=b;i++){
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            q.pb(n-1);
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
        }

        
        
        cout<<"Case #"<<tc<<": ";
        while(!q.empty()){
            test[0]++;even++;od--;swap(test[0],od);swap(even,od);
            cout<<q.front()<<" ";
            q.pop_front();
        }
        cout<<"\n";



    }
    return 0;
}