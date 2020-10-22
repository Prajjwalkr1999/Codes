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
        ld i,j,n;
        cin >> n;
        vector<ld> g(n);
        vector<ld> a(n);
        vector<ld> b(n);
        for ( i = 0; i < n; i++) {
            cin >>g[i]>>a[i]>>b[i];
        }
        ld suma1=0,suma2=0,suma3=0,sumb1=0,sumb2=0,sumb3=0;
        for(i=0;i<n;i++){
            suma1+=g[i]*(b[i]/(a[i]+b[i]));
            sumb1+=g[i]*(a[i]/(a[i]+b[i]));
        }

        cout<<fixed<<setprecision(6)<<suma1<<" "<<sumb1<<"\n";
        
    }
    return 0;
}

