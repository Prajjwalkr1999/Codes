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

        vector<int> v(n,0);
        int count=0;
        for(int i=0;i<n-1;i+=2){
            if(a[i]-a[i+1]!=0){
                if(a[i]==1) v[i]++;
                else v[i+1]++;
                count+=1;
            }
        }
        // if(count==n){
        //     cout<<n/2<<"\n";
        //     for(int i=0;i<n/2;i++){
        //         cout<<0<<" ";
        //     }
        //     cout<<"\n";
        //     continue;
        // }
        cout<<n-count<<"\n";
        for(int i=0;i<n;i++){
            if(v[i]==0){
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

