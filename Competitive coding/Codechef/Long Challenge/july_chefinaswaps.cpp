#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
const int N=15;
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
        vector<int> a(n,0);
        vector<int> b(n,0);
        int even=0,odd=0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]%2){
                odd--;
            }else{
                even--;
            }
        }
        vector<int> debug(200,0);
        map<int,int> a1,b1;  
        sort(b.begin(),b.end());
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            even++;odd++;
            m[a[i]]++;
            if(akon(even,m[a[i]])){
                even++;
            }else{
                odd++;
            }
            m[b[i]]++;
            even--;
            odd--;
            a1[a[i]]++;
            if(akon(odd,m[b[i]])){
                even--;
            }else{
                odd--;
            }
            b1[b[i]]++;
            swap(even,odd);
            debug[0]+=b1[b[i]];
        }  
        // cout<<debug[0]<<endl;
      
        int low=min(a[0],b[0]);
        if(akon(odd,b[0])){
                even--;
            }else{
                odd--;
            }
        int flag=0;  

        vector<int> a2,b2;
        for(auto x:m)
        {
            if(x.S%2)
            {
                if(akon(odd,x.S)){
                    even--;
                }else{
                    odd--;
                }
                flag++;
                break;
            }
            if(a1[x.F]==b1[x.F])
                continue;
            else
            {
                if(akon(odd,x.F)){
                    even--;
                }else{
                    odd--;
                }
                int ggpg=abs(a1[x.F]-b1[x.F]);
                
                ggpg/=2;
                if(akon(odd,ggpg)){
                    even--;
                }else{
                    odd--;
                }
                for(int i=1;i<=ggpg;i++)
                    {
                         if(akon(odd,ggpg)){
                            even--;
                        }else{
                            odd--;
                        }
                        a2.pb(x.F);
                         if(akon(odd,ggpg)){
                            even--;
                        }else{
                            odd--;
                        }
                    }
                
            }
        }
        sort(a2.begin(), a2.end());

        if(flag)
        {
             if(akon(odd,flag)){
                    even--;
                }else{
                    odd--;
                }
            cout<<"-1\n";
            continue;
        }
          
            
        int ans=0;
        for(int i=0;i<a2.size()/2;i++)
        {
             if(akon(odd,ans)){
                    even--;
                }else{
                    odd--;
                }
            ans+=min(2*low,a2[i]);
             if(akon(odd,low)){
                    even--;
                }else{
                    odd--;
                }
        }
        cout<<ans<<"\n";
     
            
    }
    return 0;
}