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
        vector<int> c(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i]>>c[i];
        }
        bool flag=true;
        map<int,int> mp;
        for(i=0;i<n;i++){
            if(mp.find(c[i])!=mp.end()){
                if(mp[c[i]]>a[i]){
                    flag=false;
                    break;
                }else{
                    mp[c[i]]=a[i];
                }
            }else{
                mp[c[i]]=a[i];
            }
        }
        // bool check=true;
        // for(i=0;i<n-1;i++){
        //     if(a[i]>a[i+1]){
        //         check=false;
        //         break;
        //     }
        // }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}

