#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll i, j=0, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> pre(n,0);

        for(i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                pre[i]+=1;
            }
            pre[i+1]+=pre[i];
        }
        // for(auto x: pre){
        //     cout<<"Pre : "<<x<<endl;
        // }
        for(i=0;i<n-k+1;i++){
            if(ans<(pre[i+k-2]-pre[i])){
                ans=pre[i+k-2]-pre[i];
                j=i+1;
            }
        }
        
        if(j==0){
            j=j+1;
        }
        cout<<ans+1<<" "<<j<<"\n";

    }
}

