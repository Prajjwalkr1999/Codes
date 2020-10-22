#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int logz(double base, double x) {
    return (int)(log(x) / log(base));
}
int powr(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}

int factor(int n){
    vector<P> factors;
    int cnt=0;
    while(n%2==0){
        n/=2;
        cnt++;
    }
    factors.pb({2,cnt});
    for(int i=3;i*i<=n;i+=2){
        cnt=0;
        while(n%i==0){
            n/=i;
            cnt++;
        }
        factors.pb({i,cnt});
    }
    int val=factors[0].S,flag=0;
    for(auto x:factors){
        if(x.S!=val){
            flag++;
            break;
        }
    }
    if(flag) return -1;
    else return val;
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
        unordered_map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        // vector<int> pre[N];
        // for(int i=2;i<=1e5;i++){
        //     for(int j=2;;j++){
        //         if(j>log(i,1e9)){
        //             break;
        //         }
        //         int val=powr(j,i);
        //         pre[i].pb(val);
        //     }   
        // }

        sort(a.begin(),a.end());
        factor(1200);
        // if(a[0]!=1){
        //     cost+=abs(a[0]-1);
        // }
        // for(int i=1;i<n;i++){
        //     int val=factor(a[i]);
        //     if(val==-1){
        //         int z=lower_bound(pre[i].begin(),pre[i].end(),a[i]);
        //     }
        // }
        int ans=3e18;
        int gg=0,pg=0;
        for(int x=0;(x)<=logz(n-1,1e10);x++){
            int cost=0;
            gg++;pg++;swap(gg,pg);
            for(int i=0;i<n;i++){
                gg++;pg++;swap(gg,pg);
                cost+=abs(a[i]-powr(x,i));
            }
            gg++;pg++;swap(gg,pg);
            ans=min(cost,ans);
        }

        cout<<ans<<"\n";



    }
    return 0;
}

