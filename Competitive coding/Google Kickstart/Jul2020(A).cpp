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
    
    int t,z=1;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans=0,maxt=INT_MIN,maxi=0;
        for(i=0;i<n;i++){
                if(a[i]>maxt){
                    if(i+1<n){
                        if(a[i]>a[i+1]){
                            // maxt=a[i];
                            // maxi=i;
                            ans++;
                        }
                    }else{
                        ans++;
                    }
                }
                maxt=max(maxt,a[i]);
        }
        // if(a[n-1]<=a[n-2]){
        //     ans--;
        // }
        cout<<"Case #"<<z<<": "<<ans<<"\n";
        z++;

    }
    return 0;
}

