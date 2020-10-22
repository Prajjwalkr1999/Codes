#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll predict(vector<ll> pg,vector<ll> &check,ll n,ll index){
    ll far=index+1,rest=-1,j;
    for(ll i=0;i<check.size();i++){
        for(j=index+1;j<n;j++){
            if(check[i]==pg[j]){
                if(j>far){
                far=j;
                rest=i;}
                break;
            }
        }
        if(j==n){
            return i;
        }
    }
    if(rest==-1){
        return 0;
    }else{
        return rest;
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
    
    
        ll n,cap,hit=0;
        cin >> n;
        vector<ll> pg(n);
        for (ll i = 0; i < n; i++) {
            cin >> pg[i];
        }
        cin>>cap;
        unordered_set<ll> s;
        vector<ll> check;
        for(ll i=0;i<n;i++){
            if(s.find(pg[i])!=s.end()){
                // cout<<"page : "<<pg[i]<<endl;
                hit++;
                continue;
            }
            if(s.size()<cap){
                s.insert(pg[i]);
                check.pb(pg[i]);
            }else{
                int j=predict(pg,check,n,i);
                s.erase(check[j]);
                check[j]=pg[i];
                s.insert(pg[i]);
                // cout<<"insert : "<<pg[i]<<endl;
            }
        }
        cout<<"Number of hits : "<<hit<<"\n";
        cout<<"number of misses : "<<n-hit<<"\n";
    
}

