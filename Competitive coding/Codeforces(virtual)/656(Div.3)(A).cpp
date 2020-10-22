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
        int i,j,x,y,z;
        set<int> s;
        cin>>x>>y>>z;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        s.insert(x);
        s.insert(y);
        s.insert(z);
        if(s.size()>=3){
            cout<<"NO\n";
            continue;
        }
        if(x==y&&y==z){
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<"\n";
            continue;
        }
        vector<int> v;
        v.pb(x);
        v.pb(y);
        v.pb(z);
        sort(v.begin(), v.end());
        if(v[0]==v[1]){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<v[0]<<" "<<v[0]<<" "<<v[1]<<"\n";
            continue;
        }
    }
    return 0;
}

