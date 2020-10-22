#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
int calc(vector<int> a, int n) 
{ 
    int index = 0; 
    int gg=0;
    int test=0;
    for (int i = 31; i >= 0; i--) 
    { 
        
        int maxidx = index; 
        int maxEle = INT_MIN; 
        for (int j = index; j < n; j++) 
        { 
            gg++;test++;
            if ( (a[j] & (1 << i)) != 0  && a[j] > maxEle ) 
                maxEle = a[j], maxidx = j; 
        } 
  
        if (maxEle == INT_MIN) 
        continue; 
  
        swap(a[index], a[maxidx]); 
        swap(gg,test);
        // cout<<g<<test<<"\n";
        
        maxidx = index; 
  
        for (int j=0; j<n; j++) 
        { 
            gg++;test++;
            if (j != maxidx && (a[j] & (1 << i)) != 0) 
                a[j] = a[j] ^ a[maxidx]; 
        } 
        gg--;test++;
        swap(gg,test);
  
        index++; 
    } 
  
    int res = 0; 
    for (int i = 0; i < n; i++) {
        gg+=test;
        res ^= a[i]; 
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
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        int res=calc(a,n);
        cout<<res<<"\n";
    }
    return 0;
}

