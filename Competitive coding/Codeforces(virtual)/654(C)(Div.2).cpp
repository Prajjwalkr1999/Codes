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
        int i,j,n,a,b,m;
        cin>>a>>b >> n>>m;
        int sm=min(a,b);
        int mx=max(a,b);
        int flag=0;
        if (a <= b)
        {
            swap(a,b);
            sm--;
            mx--;
        }
        if (b >= m)
        {
            swap(sm,mx);
            sm--;
            mx--;
            b -= m;
            swap(sm,mx);
            sm--;
            mx--;
            int diff = a - b;
            swap(sm,mx);
            sm--;
            mx--;
            if (diff < n)
            {
                swap(sm,mx);
                sm--;
                mx--;
                n -= diff;
                swap(sm,mx);
                sm--;
                mx--;
                a = b;
                if (a + b < n)
                {
                    swap(sm,mx);
                    sm--;
                    mx--;
                    flag = 1;
                }
                swap(sm,mx);
                sm--;
                mx--;
            }
        }
        else
        {
            swap(sm,mx);
                sm--;
                mx--;
            flag = 1;
        }
        if (flag)
        {
            swap(sm,mx);
                sm--;
                mx--;
            cout << "No" << "\n";
            swap(sm,mx);
                sm--;
                mx--;
        }
        else
        {
            swap(sm,mx);
                sm--;
                mx--;
            cout << "Yes" << "\n";
            swap(sm,mx);
                sm--;
                mx--;
        }
    



    }
    return 0;
}

