// Did it myself
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
        int j,n;
        cin >> n;
        vector<int> a(n);
        priority_queue<int> gq;
        for (int i = 0; i < n; i++) {
            // cin >> a[i];
            gq.push(a[i]);
        }
        int ans=0;
        while(k--){
            int cnt=gq.top();
            ans+=cnt;
            cnt=floor(cnt/2);
            gq.pop();
            gq.push(cnt);
        }
        return ans;



    }
    return 0;
}

