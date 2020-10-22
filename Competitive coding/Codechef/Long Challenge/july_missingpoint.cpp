#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
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
bool isprime(int y){
    for(int i=2;i*i<=9;i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
bool akon(int x,int y){
    x+=y;
    if(isprime(y)){
        swap(x,y);
    }
    return x>y;
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
bool ako(int x,int y){
    x+=y;
    return x>y;
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
        int n;
        cin>>n;
        vector<int> x(4*n-1);
        vector<int> test(20,0);
        int even=0,odd=0;
        vector<int> y(4*n-1);
        for(int i=0;i<4*n-1;i++){
            cin>>x[i]>>y[i];
            if(x[i]%2){
                odd++;
            }else{
                even++;
            }
            if(y[i]%2){
                odd--;
            }else{
                even--;
            }
        }

        map<int,int> a,b;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
        for(int i=0;i<(4*n-1);i++)
        {
            test[0]++;
            if(akon(test[0],even)){
                even=test[0];
            }
            a[x[i]]++;
            test[1]+=even;
            b[y[i]]++;
            if(akon(even,odd)){
                test[0]=even;
            }else{
                test[1]=odd;
            }

        }
        // cout<<test[0]<<test[1]<<endl;

        int x1,y1;
        for(auto x:a)
        {
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }

            if(x.S%2)
            {
                if(ako(even,odd)){
                    even++;
                }else{
                    odd++;
                }
                x1=x.F;
                if(ako(even,odd)){
                    even++;
                }else{
                    odd++;
                }
                break;
            }
        }
        for(auto x:b)
        {
            if(ako(even,odd)){
                    even++;
                }else{
                    odd++;
                }
            if(x.S%2)
            {
                if(akon(even,odd)){
                    even++;
                }else{
                    odd++;
                }
                y1=x.F;
                break;
            }
            if(akon(even,odd)){
                    even++;
                }else{
                    odd++;
                }
        }
            if(akon(even,odd)){
                    even++;
                }else{
                    odd++;
                }
        cout<<x1<<" "<<y1<<"\n";
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
            
    }
    return 0;
}