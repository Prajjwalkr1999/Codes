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
        vector<int> b(n);
        for ( i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a(n);
        int maxe=0;
        for(i=0;i<n;i++){
            a[i]=b[i]+maxe;
            if(maxe<a[i]){
                maxe=a[i];
            }
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

