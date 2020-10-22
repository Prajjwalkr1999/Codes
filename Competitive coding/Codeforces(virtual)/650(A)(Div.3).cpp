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
        string s;
        cin >> s;
        if(s.size()<=2){
            cout<<s<<"\n";
            continue;
        }
        n=s.size();
        // vector<int> a(n);
        string ans;
        ans.pb(s[0]);
        for ( i = 1; i < n-1; i++) {
            if(s[i]==s[i+1]){
                ans.pb(s[i]);
                i++;
            }
        }
        ans.pb(s[n-1]);
        cout<<ans<<"\n";

    }
    return 0;
}

