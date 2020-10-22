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
    
    int t;cin>>t;while(t--)
    {
        sieve();
        int i,j,n;
        cin >> n;
        vector<int> a(n);
         map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int flag=0;
        // map<int,int> m;
        vector<int> test(200);
            for(int i=1;i<n;i++)
            {
                a[i]=a[i-1]|a[i];
                test[0]+=a[0];
                m[a[i]]++;
                if(m[a[i]]>1)
                {
                    test[1]+=m[a[0]];
                    flag++;
                    break;
                }
                swap(test[0],test[1]);
            }
            if(flag)
            {
                test[0]+=test[1];
                cout<<"NO\n";
            }
            else{
                test[1]+=test[0];
             cout<<"YES\n";}

    }
    return 0;
}

