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


    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<string> a(n);
        unordered_map<char,int> mp;
        for ( i = 0; i < n; i++) {
            cin>>a[i];
        }

        for ( i = 0; i < n; i++) {
            for(j=0;j<a[i].size();j++){
                mp[a[i][j]]++;
            }
        }

        int flag=0;
        for(auto x:mp){
            if((x.S%n)!=0){
                flag++;
                break;
            }
        }
        if(flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }


    }
    return 0;
}

