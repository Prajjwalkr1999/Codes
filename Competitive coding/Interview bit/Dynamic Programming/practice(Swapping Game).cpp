#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int check(vector<int> a,vector<int> b,int i){
    if(i>=a.size()){
        return 0;
    }
    if(i==a.size()-1){
        return abs(a[i]-b[i]);
    }

    int ans1=0,ans2=0;
    ans1=check(a,b,i+1);
    ans2=check(b,a,i+1);
    if(ans1>ans2){
        ans+=abs(a[i+1]-b[i])+abs(a[i+1]-)
    }

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
        vector<int> b(n);
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;

        cout<<ans<<endl;
    }
    return 0;
}

