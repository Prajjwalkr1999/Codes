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
        vector<int> a(n);
        vector<int> pos,neg;
        int sum=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]>=0){
                pos.pb(a[i]);
            }else{
                neg.pb(a[i]);
            }
            sum+=a[i];
        }

        if(sum==0){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        if(sum>0){
            sort(a.rbegin(),a.rend());
        }else{
            sort(a.begin(),a.end());
        }
            for(auto x:a){
                cout<<x<<" ";
            }
            cout<<"\n";

    }
    return 0;
}

