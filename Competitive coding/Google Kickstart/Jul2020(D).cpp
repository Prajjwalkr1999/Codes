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
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t,z=1;cin>>t;while(t--)
    {
        sieve();
        int i,n;
        int q;
        cin>>n>>q;
        vector<int> a(n+1);
        a[0] = INT_MAX;
        vector<int> test(1000,0);
        for(i=1;i<n;i++){
            cin>>a[i];
            test[0]+=a[i];
        }
        // cout<<test[0]<<endl;
        a[n] = INT_MAX;
        test[1]=a[n];
        int s,d;
        vector<int> graph[n+1];

        for(int i=1;i<=n;i++){
            test[2]=i;
            // cout<<test[2]<<endl;
            graph[i].pb(i);
            test[3]=graph[i][0];
            int left = i-1 , right = i;
            test[4]+=left;
            test[5]+=right;
            while(1){
                if(left == 0 && right == n){
                    test[6]=i;
                    break;
                }
                if(a[left] > a[right]){
                    graph[i].pb(right+1);
                    test[7]+=graph[i][0];
                    right++;
                    test[8]+=right;
                }else{
                    graph[i].pb(left);
                    test[8]+=graph[i][0];
                    left--;
                    test[10]+=left;
                }
            }
                    // for(auto x:test){
                    //     cout<<x<<"\n";
                    // }
                    // cout<<"\n";
            // cout<<test[i]<<"\n";
        }
        cout<<"Case #"<<z<<": ";
        while(q--){
            cin>>s>>d;
            test[11]+=graph[s][d-1];
            // cout<<test[11]<<"\n";
            cout<<graph[s][d-1]<<" ";
        }
        z++;
        cout<<"\n";


    }
    return 0;
}

