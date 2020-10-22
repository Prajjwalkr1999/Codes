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
        int i,j,n,k;
        cin >> n>>k;
        vector<int> a(n);
        map<int,int> mp;
        int flag=0,flag2=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if(a[i]==0){
                flag++;
            }else{
                flag2++;
            }
        }
        if(mp.size()<=k){
            cout<<1<<"\n";
            continue;
        }
        if(k==1){
            cout<<-1<<"\n";
            continue;
        }

            int sz=mp.size()-k;
            int ans=1;
            ans+=(sz/(k-1));
            if(sz%(k-1)){
                ans++;
            }
            cout<<ans<<"\n";

    }
    return 0;
}

