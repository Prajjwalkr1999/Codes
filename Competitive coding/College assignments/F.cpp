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

int ans=0,cnt=0;
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    sieve();
    // int t;cin>>t;while(t--)
    {
        int i,j,n,s;
         cin>>n>>s;
        vector<int> a(n);
        int ans=0,cnt=0,od=0,even=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                od++;
            }else{
                even++;
            }
        }

        vector<int> pre(n+1 , 0);

        for(i=0;i<n;i++){
            even+=od;
            pre[i+1] = pre[i]+a[i];
        }

        for(i=0;i<n;i++){
            int l = i+1;
            int r = n;
            cnt = i;
            while(l<=r){
                even-=od;
                int mid = (l + r)/2;
                if(pre[mid]-pre[i] + ((mid*(mid+1))/2 - (i*(i+1))/2) * (mid-i)  <= s){
                    l = mid+1;
                    even+=l;
                    cnt = mid;
                }else{
                    r = mid-1;
                }
            }
            even+=ans;
            // cout<<even;
            ans = max(ans , cnt-i);

        }

        cout<<ans<<"\n";

        

    }
    return 0;
}

