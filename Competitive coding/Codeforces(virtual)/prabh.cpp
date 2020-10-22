#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int test[12];
        test[0]++;test[1]++;swap(test[0],test[1]);
        // int n=a.size();
        int flag=0;
                test[0]++;test[1]++;swap(test[0],test[1]);
            for(int i=0;i<n;i++)
            {
                        test[0]++;test[1]++;swap(test[0],test[1]);
                if(b[i]<a[i])
                {
                            test[0]++;test[1]++;swap(test[0],test[1]);
                    flag++;
                    break;
                }
            }
            if(flag)
            {
                test[0]++;test[1]++;swap(test[0],test[1]);
                cout<<"-1\n";
                continue;
            }


           vector<set<char>> m(22);

            for(int i=0;i<n;i++)
            {
                test[0]++;test[1]++;swap(test[0],test[1]);
                if(b[i]==a[i])
                    continue;
                m[a[i]-'a'].insert(b[i]);
            }

            int count=0;
            for(int i=0;i<22;i++)
            {
                if(m[i].size()==0)
                    continue;
                    test[0]++;test[1]++;swap(test[0],test[1]);
                    auto gg=m[i].begin();
                    m[i].erase(m[i].begin());
                    char curr=(*gg);
                    test[0]++;test[1]++;swap(test[0],test[1]);
                    count++;
                    test[0]++;test[1]++;swap(test[0],test[1]);
                    for(auto x:m[i])
                    {
                        test[0]++;test[1]++;swap(test[0],test[1]);
                        m[curr-'a'].insert(x);
                    }
                    test[0]++;test[1]++;swap(test[0],test[1]);
            }
                    test[0]++;test[1]++;swap(test[0],test[1]);
            cout<<count<<"\n";


            
    }
    return 0;
}