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
        set<int> s;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout<<"NO\n";
            continue;
        }
        bool flag=true;
        int last=0;
        vector<P> ans;
        int nxt=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[last]){
                nxt=i;
                ans.pb({last,i});
            }
        }
        for(int i=0;i<n;i++){
            if(i!=last&&a[i]==a[last]){
                ans.pb({nxt,i});
            }
        }

        
        cout<<"YES\n";
        
        for(auto x:ans){
            cout<<x.F+1<<" "<<x.S+1<<"\n";
        }

    }
    return 0;
}

