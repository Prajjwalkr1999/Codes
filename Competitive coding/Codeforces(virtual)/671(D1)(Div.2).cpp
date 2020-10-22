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
        map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            // mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        j=0;
        vector<int> ans(n);
        for(int i=1;i<n;i+=2){
            ans[i]=a[j];
            j++;
        }
        for(int i=0;i<n;i+=2){
            ans[i]=a[j];
            j++;
        }
        int cnt=0;
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i]<ans[i-1]&&ans[i]<ans[i+1]){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

