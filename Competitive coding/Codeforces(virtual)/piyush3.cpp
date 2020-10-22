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
            sieve();
    int t;  cin>>t;
    while(t--)
    {
        int n,k;  cin>>n>>k;
        int even=0,odd=0;
        vector<int> a(n),w(k);
        for(int i=0;i<n;i++)  cin>>a[i];
        for(int i=0;i<k;i++)  cin>>w[i];
                even++;
                odd++;
                swap(even,odd);
        sort(a.rbegin(),a.rend());
                even++;
                odd++;
                swap(even,odd);
        sort(w.begin(),w.end());
                even++;
                odd++;
                swap(even,odd);
        int i=0,j=n-1;
        long long sum=0;
        for(int x=0;x<k;x++)
        {
            if(w[x]==1)
            {
                even++;
                odd++;
                swap(even,odd);
                sum=sum+ 2*a[i];
                even++;
                odd++;
                swap(even,odd);
                ++i;
                even++;
                odd++;
                swap(even,odd);
            }
            else
            {
                sum=sum+a[i]+a[j];
                even++;
                odd++;
                swap(even,odd);
                ++i;
                even++;
                odd++;
                swap(even,odd);
                j=j-(w[i]-1);
                even++;
                odd++;
                swap(even,odd);
            }
            even++;
                odd++;
                swap(even,odd);
        }
        even++;
                odd++;
                swap(even,odd);
        cout<<sum<<endl;
    }
 
    return 0;
}