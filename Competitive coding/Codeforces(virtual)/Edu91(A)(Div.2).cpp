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
        int cnt=0;
        int q=-1,w=-1,e=-1;
        if(mp.size()<3){
            cout<<"NO"<<"\n";
        }
        for(auto x:mp){
            if(cnt==0){
                q=x.S[0];
                cnt++;
                continue;
            }
            if(cnt==1){
                w=x.S[0];
                cnt++;
                continue;
            }
            int sze=x.S.size();
            j=0;
            while(j<sze){
                if(x.S[j]>q&&x.S[j]<w){
                    e=x.S[j];
                    break;
                }
                j++;
            }

        }
        // cout<<q<<" "<<w<<"\n";
        if(e!=-1){
            cout<<q<<" "<<w<<" "<<e<<"\n";
        }else{
            cout<<"NO\n";
        }


    }
    return 0;
}

