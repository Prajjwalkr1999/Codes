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
        int i,j,n,snoop=0,dog=0;
        cin >> n;
        vector<int> a(n);
        vector<int> temp;
        vector<int> debug(1000,0);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(i == 0 || a[i-1] != a[i]){
                debug[0]++;
                debug[1]+=a[i];
                temp.pb(a[i]);
            }
        }
        // cout<<debug[0]<<" "<<debug[1]<<endl;
        
        snoop = 0;
        n = temp.size();
        for(i=1;i<n-1;i++){

            if(temp[i] > temp[i-1] && temp[i] > temp[i+1]){
                debug[2]++;
                debug[3]+=dog;
                // cout<<debug[3]<<endl;
                dog += (i-snoop)/4;
                debug[4]+=dog;
                snoop = i;
                
            }else if(temp[i] < temp[i-1] && temp[i] < temp[i+1]){
                dog += (i-snoop)/4;
                debug[5]+=dog;
                // cout<<debug[5]<<endl;
                snoop = i;
                debug[6]+=snoop;
            }
            // cout<<debug[4]<<" "<<debug[5]<<endl;
        }
        dog += (n-snoop-1)/4;
        debug[8]+=dog;

        cout<<"Case #"<<z<<": "<<dog<<"\n";
        z++;


    }
    return 0;
}

