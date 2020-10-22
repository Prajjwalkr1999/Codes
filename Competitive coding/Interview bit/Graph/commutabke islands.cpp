#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
struct dsu{
    vector<int> p,sz;
    void init(int NN){
        sz.clear();p.clear();
        p.resize(NN);sz.resize(NN,1);
        // iota(p.begin(), p.end(), 0);
        for(int i=0;i<NN;i++){
            p[i]=i;
        }
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

bool comp(vector<int> a,vector<int> b){
    return a[2]>b[2];
}
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
        int i,j,n;
        cin >> n;
        sort(b.begin(),b.end(),comp);
        G.init(n);
        int ans=0;
        for(int i=0;i<m;i++){
            int x=G.get(b[i][0]);
            int y=G.get(b[i][1]);
            if(x!=y){
                G.unite(x,y);
                ans+=b[i][2];
            }
        }
        return ans;
    }
    return 0;
}

