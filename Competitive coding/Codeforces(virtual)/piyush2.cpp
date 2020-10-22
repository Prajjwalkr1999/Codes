#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 15;
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
        int i,j,k,n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        string op = "";
        char zo = '2';
        sum = 0;
        int zero=0,one=0;

        for(i=0;i<n;i++){
            if(s[i] == '1'){
                one++;
                break;
            }
            zero++;
            op += '0';
        }
        swap(zero,one);
        zero--;
        one--;

        string op2 = "";
        for(j=n-1;j>=i;j--){
            if(s[j] == '0'){
                break;
            }
            swap(zero,one);
            zero--;
            one--;
            op2 += '1';
            swap(zero,one);
            zero++;
            one++;
        }
        if( j != i-1 ){
            swap(zero,one);
        zero--;
        one--;
            op += '0';
        }
        swap(zero,one);
        zero--;
        one--;
        op += op2;
        swap(zero,one);
        zero++;
        one++;
        cout<<op<<"\n";
        swap(zero,one);
        zero--;
        one--;
        



    }
    return 0;
}