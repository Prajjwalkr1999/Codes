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
        map<int,int> freq;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(mp.find(a[i])==mp.end()){
                mp[a[i]]=i;
            }
            freq[a[i]]++;
        }

        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            if(mp.find(a[i])!=mp.end()){
                p[i].first=freq[a[i]];
                p[i].second=mp[a[i]];
                mp.erase(a[i]);
                freq.erase(a[i]);
            }
        } 
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<p[i].first;j++){
                cout<<a[p[i].second]<<" ";
            }
        }
        cout<<endl;



    }
    return 0;
}

