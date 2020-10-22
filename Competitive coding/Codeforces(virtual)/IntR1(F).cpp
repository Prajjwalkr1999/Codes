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
        vector<int> a(n);
        vector<int> b(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int,int> mp;
        set<int> s;
        for(i=0;i<n;i++){
            cin>>b[i];
            mp[b[i]]++;
            s.insert(b[i]);
        }
        vector<int> c;
        for(i=0;i<n;i++){
            if(a[i]==0){
                auto it=s.lower_bound(a[i]);
                int x=*it;
                // cout<<x<<"\n";
                c.pb(x%n);
                mp[x]--;
                if(mp[x]==0){
                    s.erase(x);
                }
            }else{
                int x=n-a[i];
                auto it=s.lower_bound(x);
                if(s.lower_bound(x)==s.end()){
                    it=(s.lower_bound(0));
                }
                // cout<<*it<<" "<<a[i]<<"\n";
                int y=*it;
                c.pb((a[i]+y)%n);
                mp[y]--;
                if(!mp[y]){
                    s.erase(y);
                }

            }
        }

                for(auto x:c){
                    cout<<x<<" ";
                }
                cout<<"\n";

    }
    return 0;
}

