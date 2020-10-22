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
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int,int> mp;
        // int n=a.size();
        int sum=0,ans=0,st=0,en=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==0){
                ans=1;
            }
            if(sum==0){
                st=0;
                en=i;
                ans=i+1;
            }
            if(mp.find(sum)!=mp.end()){
                if(ans<(i-mp[sum])){
                    ans=i-mp[sum];
                    st=mp[sum];
                    en=i;
                }
            }else{
                mp[sum]=i;
            }
        }
        vector<int> v;
        for(int i=st+1;i<=en;i++){
            // cout<<a[i]<<" ";
            v.push_back(a[i]);
        }
        return v;
    }
    return 0;
}

