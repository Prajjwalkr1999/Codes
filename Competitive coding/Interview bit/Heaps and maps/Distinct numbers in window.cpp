// Hint reqd.
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
        int n,k;
        cin >> n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(i-k>=0){
                ans.push_back(mp.size());
                mp[a[i-k]]--;
                mp[a[i]]++;
                if(mp[a[i-k]]==0){
                    mp.erase(a[i-k]);
                }
            }else{
                mp[a[i]]++;
            }
        }
        ans.push_back(mp.size());

        // return ans;
                for(auto x:ans){
                    cout<<x<<"\n";
                }
                cout<<"\n";
        // cout<<ans<<"\n";
    }
    return 0;
}

