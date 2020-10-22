#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int solve(vector<int> &a){
    int n=a.size(),ans=0;
    int count=floor(n/2);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>count){
            return a[i];
        }
    }
    for(auto x:mp){
        if(x.second>count){
            return x.first;
        }
    }

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout<<solve(a);
    }
}

