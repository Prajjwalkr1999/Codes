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
        int flag=0;
        vector<int> a(n);
        map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if(mp[a[i]]>2){
                flag++;
            }
        }
        if(flag){
            cout<<"NO\n";
            continue;
        }
                // for(auto x:mp){
                //     cout<<x.F<<" "<<x.S<<"\n";
                // }
                // cout<<"\n";
        // cout<<mp[2];
        int mine=*min_element(a.begin(),a.end());
        vector<int> ans;
        int cnt=1;
        int maxe=*max_element(a.begin(),a.end());
        // cout<<min<<" "<<max<<"\n";
        for(i=mine;i<=maxe&&i>=mine;){
                // cout<<i<<" "<<mp[i]<<endl;
            if(mp[i]){
               ans.pb(i);
                mp[i]--;
               if(i==maxe){
                cnt=0;
               }
                if(cnt!=0){
                    // cout<<i<<"\n";
                    i++;
                }else{
                    i--;
                }
            }else {
                // cout<<i<<endl;
                if(ans.size()!=n){
                flag=1;}
                break;
            }
            // cout<<1;
        }

        if(flag){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";


    }
    return 0;
}

