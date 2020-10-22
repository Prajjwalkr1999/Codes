#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int powr(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b /= 2;
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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        int cnt=0,ans=0,diff=0,maxe;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(i==0){
                maxe=a[i];
                continue;
            }
            if(a[i]<maxe){
                diff=max(diff,maxe-a[i]);
            }
            maxe=max(maxe,a[i]);
        }

        while(diff){
            diff/=2;
            ans++;
        }

        cout<<ans<<"\n";

    }
    return 0;
}

