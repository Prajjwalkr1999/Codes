#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans=0;
        string s1,s2;
        cin>>s1>>s2;
        vector<P> v;
        n = s1.size();
        bool check = false;
        for(i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                if(!check){
                    v.pb({i,i});
                    check = true;
                }else{
                    v[v.size()-1].S++;
                }
            }else{
                if(check){
                    check = false;
                }
            }
        }
        k=0;
        for(auto ele:v){
            k+=ele.S-ele.F+1;
        }
        ans = v.size()*k;
        if(ans>n){
            ans = n;
        }
        cout<<ans<<"\n";


    }
    return 0;
}