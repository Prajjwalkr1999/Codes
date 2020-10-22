#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

bool check(char a,char b,map<char,vector<char>> mp){
    for(auto x:mp[a]){
            // cout<<x;
        for(auto y:mp[b]){
            if(x==b){
                continue;
            }
            // cout<<x<<" "<<y<<endl;
            if(x==y){
                x='0';
                y='0';
                // cout<<x<<" "<<y<<endl;
                return true;
            }
           }
    }
    return false;
}
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
        string a,b;
        cin>>a>>b;
        int ans=n;
        map<char,vector<char>> mp;
        int flag=0;
        for(i=0;i<n;i++){
            if((b[i])<(a[i])){
                // cout<<a[i]<<" "<<b[i]<<endl;
                flag++;
                break;
            }
        }
        if(flag){
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<n;i++){
            if(a[i]==b[i]){
                ans--;
                continue;
            }
            if(mp.find(a[i])!=mp.end()){
                if(find(mp[a[i]].begin(),mp[a[i]].end(),b[i])!=mp[a[i]].end()){
                    ans--;
                }
                else{
                    mp[a[i]].pb(b[i]);
                }
            }else{
                mp[a[i]].pb(b[i]);
            }
            
        }
                // for(auto x:mp){
                //     for(auto y:x.S){
                //         cout<<x.F<<" "<<y<<endl;
                //     }
                //     // cout<<x<<"\n";
                // }
                // cout<<"\n";
        for(auto x:mp){
            for(auto z:x.S){
                    // cout<<z<<" ha\n";
                if(mp.find(z)!=mp.end()){
                   if(check(x.F,z,mp)){
                        ans--;
                   }
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}

