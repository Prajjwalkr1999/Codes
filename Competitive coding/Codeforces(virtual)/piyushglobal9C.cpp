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
    sieve();
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,even = 0,odd= 0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        swap(even,odd);
        even++;
        odd++;
        bool flag = true;
        swap(even,odd);
        even++;
        odd++;
        int cnt = a[0];
        for(i=2;i<n;i++){
            if(a[i] < a[i-1]){
                swap(even,odd);
                even++;
                odd++;
                if(a[i-1] < cnt){
                    swap(even,odd);
                    even++;
                    odd++;
                    flag = false;
                }else{
                    swap(even,odd);
                    even++;
                    odd++;
                    flag = true;
                }
            }
        }
        if(a[n-1] < cnt){
            swap(even,odd);
        even++;
        odd++;
            flag = false;
        }else{
            swap(even,odd);
        even++;
        odd++;
            flag = true;
        }

        if(flag){
            swap(even,odd);
        even++;
        odd++;
            cout<<"YES\n";
        }else{
            swap(even,odd);
        even++;
        odd++;
            cout<<"NO\n";
        }



    }
    return 0;
}