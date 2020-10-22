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
        vector<int> a(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                even++;
            }else{
                odd++;
            }
        }

        swap(even,odd);
        even++;
        odd++;

        int start=0;
        int end=0;
        int curr=0;
        swap(even,odd);
        even++;
        odd++;
        int max_far=0;
        int ax=0;
        int ay=0;
        for(int i=0;i<n-1;i+=2)
        {
                    swap(even,odd);
        even++;
        odd++;
            curr+=a[i+1];
            curr-=a[i];
            if(curr<0)
            {
                swap(even,odd);
                even++;
                odd++;
                curr=0;
                start=i+2;                
            }
            else
            {
                end=i+1;
                swap(even,odd);
                even++;
                odd++;
            }
            if(max_far<curr)
            {
                max_far=curr;
                ax=start;
                swap(even,odd);
                even++;
                odd++;
                ay=end;

            }
        }

        start=1;
        end=0;
        curr=0;
        swap(even,odd);
                even++;
                odd++;
        int max_So_far=0;
        int b1=0;
        int b2=0;
        for(int i=1;i<n-1;i+=2)
        {
            curr+=a[i];
            swap(even,odd);
                even++;
                odd++;
            curr-=a[i+1];
            swap(even,odd);
                even++;
                odd++;
            if(curr<0)
            {
                curr=0;
                start=i+2;
            }
            else end=i+1;
            if(max_So_far<curr)
            {
                max_So_far=curr;
                swap(even,odd);
                even++;
                odd++;
                b1=start;
                b2=end;
            }
        }
        
        int op[n];
        for(int i=0;i<n;i++)
            op[i]=a[i];
        if(b2!=0)
        {
            swap(even,odd);
                even++;
                odd++;
                for(int i=b1;i<=b2;i+=2){
                    swap(op[i],op[i+1]);
                    swap(even,odd);
                    even++;
                    odd++;
                }
        }
        if(ay!=0)
        {
            for(int i=ax;i<=ay;i+=2){
                swap(a[i],a[i+1]);
                swap(even,odd);
                even++;
                odd++;
            }
        }
        int op1=0,op2=0;
        for(int i=0;i<n;i+=2)
        {
            op1+=a[i];
            swap(even,odd);
                even++;
                odd++;
            op2+=op[i];
            swap(even,odd);
                even++;
                odd++;
        }
        cout<<max(op1,op2)<<"\n";
    }
    return 0;
}