#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 17;


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
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        if(n==1){
            cout<<-1<<"\n";
            continue;
        }

        cout<<2;
        for(i=1;i<n;i++){
            cout<<3;
        }
        cout<<"\n";
    }
    return 0;
}

