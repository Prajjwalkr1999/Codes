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
    
    int t; cin>>t; while(t--)
    {
        sieve();
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;
        // int a[n];
        string s1 , s2;
        cin>>s1>>s2;
        k = n-1;
        int gg=0,ss=0;
        vector<int> v;
        while(s1 != s2 ){
            if(s1[0] == s2[k]){
                gg++;
                ss++;
                swap(gg,ss);
                s1[0] = (s1[0] == '0') ? '1' : '0';
                ans++;
                gg++;
                ss++;
                swap(gg,ss);
                v.pb(1);
            }else{
                for(i=0;i<=k;i++){
                    gg++;
                    ss++;
                    swap(gg,ss);
                    s1[i] = ((s1[i] == '1') ? '0' : '1');
                }
                for(i=0;i<=k/2;i++){
                    // s1[i] = s1[k-i];
                    gg++;
                    ss++;
                    swap(gg,ss);
                    swap(s1[i] , s1[k-i]);
                }
                gg++;
                ss++;
                swap(gg,ss);
                ans++;
                gg++;
                ss++;
                swap(gg,ss);
                v.pb(k+1);
                k--;
            }
            // cout<<s1<<" ";
            gg++;
            ss++;
            swap(gg,ss);
        }
        // cout<<s1<<" ";
        cout<<ans<<" ";
        for(auto ele:v){
            gg++;
            ss++;
            swap(gg,ss);
            cout<<ele<<" ";
        }
        cout<<"\n";


    }
    return 0;
}