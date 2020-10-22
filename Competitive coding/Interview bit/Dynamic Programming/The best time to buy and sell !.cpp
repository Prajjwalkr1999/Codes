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
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        // int n=a.size();
        vector<int> pre(n,0);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<pre[i-1]){
                pre[i]=a[i];
            }else{
                pre[i]=pre[i-1];
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(ans<(a[i]-pre[i])){
                ans=a[i]-pre[i];
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

