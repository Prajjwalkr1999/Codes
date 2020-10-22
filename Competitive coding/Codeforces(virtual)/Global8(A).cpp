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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,a,b;
        cin >> a>>b>>n;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        int ans=0;
        int x=max(a,b);
        while(x<=n){
            if(a>b){
                b+=a;
            }else{
                a+=b;
            }
            x=max(a,b);
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

