#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int factorial(int n) 
{ 
    // single line to find factorial 
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); 
} 

int solve(int n, int k) 
{ 
    int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of 
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1] 
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
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
        int i,j,n;
        cin >> n;
        if(n==2){
            cout<<1;
            return 0;
        }
        if(n==4){
            cout<<3;
            return 0;
        }
        int ans=factorial(n/2-1)*factorial(n/2-1);
        ans/=2;
        ans*=solve(n,n/2);
        cout<<ans<<"\n";
        

    }
    return 0;
}

