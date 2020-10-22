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
        map<char ,int> mp;
        mp[a[0]]++;
        for(i=1;i<n;i++){
            mp[a[i]]++;
        }
                // for(auto x:mp){
                //     cout<<x.F<<" "<<x.S<<"\n";
                // }
        bool check=false;
        for(auto x:mp){
            if(x.S%2){
                check =true;
                break;
            }
        }   
        if(check){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        // cout<<"\n";
    }
    return 0;
}

