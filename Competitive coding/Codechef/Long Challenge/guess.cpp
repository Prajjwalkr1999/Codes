#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int N=17;
int pr[N];
vector<int> primes;
int n;
int a=10,b=20;

struct dsu {
    vector<int> p, sz;
    int comp;
    void init(int NN) {
        sz.clear(); p.clear();
        p.resize(NN); sz.resize(NN, 1);
        iota(p.begin(), p.end(), 0);
        comp = NN;
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y) {
        x = get(x);
        y = get(y);
        if (x != y) {
            p[x] = y;
            sz[y] += sz[x];
            sz[x] = 0;
            comp--;
        }
    }
} G;


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
void solve(int l , int r)
{
   if(l>r || l<=0 || r>n){
        return;
    }
    swap(a,b);
    // if(r-l<17){
    //     for(int j=l;j<r+1;j++){
    //         cout<<j<<endl;
    //         char ch;
    //         cin>>ch;
    //         if(ch=='E'){
    //             exit(0);
    //         }
    //     }
    //     return;
    // }
    int mid =l+(r-l)/2;
    cout<<mid<<endl;

    char ch1;
    cin>>ch1;

    if(ch1=='E'){
        exit(0);
    }
    int half;
    swap(a,b);
    int nmid=(mid/2) -1;
    // if(nmid%2){
    //     nmid-=1;
    // }
    if(ch1=='G'){
        half=l+(mid-l)/2;
    }else{
        half=mid+(r-mid)/2;
    }
    cout<<half<<endl;
    swap(a,b);
    char ch2;
    cin>>ch2;

    if(ch2=='E'){
        exit(0);
    }

    if(ch1==ch2){
        if(ch1=='G'){
            int low=half+1;
            swap(a,b);
            solve(low,r);
            return;
        }else{
            int high=half-1;
            solve(l,high);
            swap(a,b);
            a++;b++;
            return;
        }
    }else{
        if(ch1=='G'){
            swap(a,b);
            solve(mid+1,r);
            // return;
        }else{
            solve(l,mid-1);
            // return;
        }

        if(ch2=='G'){
            swap(a,b);
            solve(half+1,r);
            return;
        }else{
            swap(a,b);
            solve(l,half-1);
            return;
        }
    }
    return;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    sieve();
    int isprime=0;
    cin >> n;
    int l = 1,r = n, mid,mid2,lg,rg;
    char ch1;
    char ch2 = 'x';
    int limit = 1000000000;
    if(find(primes.begin(),primes.end(),n)!=primes.end()){
      isprime=1;
    }else{
      isprime=0;
    }
    
    if(n == limit - 1) {

    while(l <= r)
    {
       mid = l + (r - l)/2;
       if(isprime){
        mid2=l+mid/2;
        lg=l/2;
       }else{
        mid2=r-mid/2;
        rg=r/2;
       }
       ch2 = 'x';
       cout << mid << endl;
       cin >> ch1;
       if(ch1 == 'E')
        return 0;
        if(mid2!=0){
          swap(lg,rg);
        }else{
          lg+=rg;
          rg=mid/2;
        }
       while(ch1!=ch2)
       {
        if(lg!=rg){
          mid2=(l+r)/2;
        }else{
          mid2=mid/2;
        }
         ch2 = ch1;
         cout << mid << endl;
         cin >> ch1;

         if(ch1 == 'E')
          exit(0);
       }

       if(ch1 == 'L'){
        if(lg==rg){
          mid2=mid+1;
        }
        r = mid - 1;}
       else if(ch1 == 'G')
       { 
            if(lg==rg){
              mid2=mid/2+1;
            }
           l = mid + 1;
       }
        else
          return 0;
    }
  }
  
    else {
     solve(1,n);
     return 0;
   }

    return 0;
}