#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


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

        // int n=a.size();
        vector<int> left(n+1,INT_MAX);
        vector<int> right(n+1,INT_MAX);
      
        for(int i=0;i<n;i++){
            if(a[i]==1){
                left[i]=0;
            }else{
                if(i>0)
                left[i]=left[i-1]+1;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==1){
                right[i]=0;
            }else{
                if(i<n-1)
                    right[i]=right[i+1]+1;
            }
        }
        for(auto x:left){
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto x:right){
            cout<<x<<" ";
        }
        cout<<"\n";
        int ans=INT_MIN,res=0;
        for(int i=0;i<n;i++){
            int x=min(left[i],right[i]);
            if(ans<x){
                res=i;
                ans=x;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

