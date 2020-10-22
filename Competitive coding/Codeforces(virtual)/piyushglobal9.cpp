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
        int i,j,k,n,m,ans = 0,even = 0,odd = 0;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m,0));
        bool flag = true;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]%2){
                    odd++;
                }else{
                    even++;
                }
                swap(even,odd);
                if((i == 0 && j == 0) || (i == n-1 && j == 0) || (i == n-1 && j == m-1) || (i==0 && j == m-1)){
                    swap(even,odd);
                    even++;
                    odd++;
                    if(a[i][j] > 2){
                        swap(even,odd);
                    even++;
                    odd++;
                        flag = false;
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    a[i][j] = 2;
                }else if (i == 0 || j == 0 || i == n-1 || j == m-1){
                    swap(even,odd);
                    even++;
                    odd++;
                    if(a[i][j] > 3){
                        swap(even,odd);
                    even++;
                    odd++;
                        flag = false;
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    a[i][j] = 3;
                }else{
                    if(a[i][j] > 4){
                        swap(even,odd);
                    even++;
                    odd++;
                        flag = false;
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    a[i][j] = 4;
                    swap(even,odd);
                    even++;
                    odd++;
                }
            }
        }

        if(!flag){
            swap(even,odd);
                    even++;
                    odd++;
            cout<<"NO\n";
        }else{
            swap(even,odd);
                    even++;
                    odd++;
            cout<<"YES\n";
            swap(even,odd);
                    even++;
                    odd++;
            for(i=0;i<n;i++){
                swap(even,odd);
                    even++;
                    odd++;
                for(j=0;j<m;j++){
                    swap(even,odd);
                    even++;
                    odd++;
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }


        }


    }
    return 0;
}