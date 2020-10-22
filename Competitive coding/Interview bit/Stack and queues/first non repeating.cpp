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
        int n;
        string a;
        cin>>a;
        n=a.size();
        queue<char> q;
        map<char,int> mp;
        string ans;
        for(int i=0;i<n;i++){
            if(mp[a[i]]==0){
                q.push(a[i]);
            }
            mp[a[i]]++;
            while(!q.empty()&&mp[q.front()]!=1){
                q.pop();
            }
            if(!q.empty()){
                ans+=q.front();
            }
            else{
                ans+="#";
            }
        }
        // cout<<ans<<"\n";
        return ans;

    }
    return 0;
}

