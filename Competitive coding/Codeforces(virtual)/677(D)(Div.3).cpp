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
        map<int,vector<int>> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].pb(i);
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            cout<<i->F<<": ";
            vector<int> temp=i->S;
            for(int j=0;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
            cout<<endl;
        }
        vector<int> vis(n+1,-1);
        cout<<"hello";
        int cnt=0;
        vector<P> ans;
        bool flag=true;
        while(flag){
            flag=false;
            // cout<<1;
            for(auto i=mp.begin();i!=mp.end();i++){
                vector<int> temp=i->S;
                ++i;
                if(i==mp.end()){
                    break;
                }
                vector<int> temp2=(i)->S;
                // --i;
                int x=-1,y=-1;
                for(int j=0;j<temp.size();j++){
                    if(vis[temp[j]]==-1){
                        vis[temp[j]]=1;
                        x=temp[j];
                        break;
                    }
                }
                for(int j=0;j<temp2.size();j++){
                    if(vis[temp2[j]]==-1){
                        vis[temp2[j]]=1;
                        y=temp2[j];
                        break;
                    }
                }
                if(x!=-1&&y!=-1){
                    ans.pb({x,y});
                    flag=true;
                    cnt++;
                }
                --i;
            }
        }
        if(ans.size()==n-1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
            continue;
        }
        for(auto x:ans){
            cout<<x.F<<" "<<x.S<<"\n";
        }

    }
    return 0;
}

