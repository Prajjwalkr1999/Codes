#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > v;

int minsum(int n, int x, int sum){
    if(n<=0){
        return sum;
    }
    int ans = 1e9;
    for(int i=0;i<3;i++){
        if(i==x){
            continue;
        }
        ans = min(ans,minsum(n-1,i,sum+v[n-1][i]));
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t; while(t--){
        int n,i,j;
        cin>>n;
        v.resize(n,vector<int>(3));
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                cin>>v[i][j];
            }
        }
        cout<<minsum(n,-1,0)<<"\n";

        
    }
    return 0;
}