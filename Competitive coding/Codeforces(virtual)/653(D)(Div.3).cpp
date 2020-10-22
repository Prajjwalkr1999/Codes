#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
const int N=15;
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
    sieve();
    int t; cin>>t; while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int> count;
        vector<int> pre(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
            pre[i]=a[i]%k;
            count[pre[i]]++;
        }
        swap(even,odd);
        even++;
        odd++;
        int snoop=0;
        int dog=0;
        for(auto x:count)
        {
            if(x.F==0)
                continue;
            if(snoop<x.S)
            {
                swap(even,odd);
                even++;
                odd++;
                snoop=x.S;
                dog=x.F;
                swap(even,odd);
                even++;
                odd++;
            }
        }
        
        if(snoop==0)
        {
            swap(even,odd);
                even++;
                odd++;
            cout<<"0\n";
            swap(even,odd);
                even++;
                odd++;
            continue;
        }
        int akon=1;
        swap(even,odd);
                even++;
                odd++;
        
        akon+=(snoop-1)*k;
        swap(even,odd);
                even++;
                odd++;
        akon+=(k-dog);

        swap(even,odd);
                even++;
                odd++;
        cout<<akon<<"\n";
        swap(even,odd);
                even++;
                odd++;
            
    }
    return 0;
}