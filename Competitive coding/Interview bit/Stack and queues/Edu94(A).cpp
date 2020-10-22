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
        string a;
        cin>>a;
        vector<string> v;
        for(i=0;i<n;i++){
            string x=a.substr(i,n);
            // cout<<x<<endl;
            v.pb(x);
        }
        int cnt1=0,cnt2=0;
        string ans="";
        int vis[n];
        memset(vis,0,sizeof(vis));
        int flag=1;
        char maxm;
        for(i=0;i<n;i++){
            cnt1=0;cnt2=0;flag=1;
            for(j=0;j<v.size();j++){
                if(vis[j]) continue;
                if(v[j][i]=='0'){
                    flag=0;
                    cnt2++;
                }else{
                    flag=0;
                    cnt1++;
                }
            }
            if(flag==1){
                break;
            }
            if(cnt1>cnt2){
                ans+='1';
                maxm='1';
            }else{
                ans+='0';
                maxm='0';
            }
            for(j=0;j<v.size();j++){
                if(vis[j]) continue;
                if(v[j][i]==maxm){
                    vis[j]++;
                }
            }
        }
        while(ans.size()<n){
            ans+='0';
        }
        cout<<ans<<"\n";
    }
    return 0;
}

