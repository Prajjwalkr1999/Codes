#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int power(int x, int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
int modInverse(int n, int p) 
{ 
    return power(n, p-2, p); 
} 

int calc(int n, int r, int p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    int fac[n+1]; 
    fac[0] = 1; 
    for (int i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n,m;
        cin >> n>>m;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        int ans=0,mod=1e9+7;
        ans=calc(n+2*m-1,2*m,mod);
        cout<<ans<<"\n";
    }
    return 0;
}

