#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    {
        ll k, n, m, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll head;
        cin>>head;

        vector<bool> vis(n,false);
        vector<ll> ans;
        ll min_dis=INT_MAX,idx=0;
        for(ll i=0;i<n;i++){
        min_dis=INT_MAX;
        idx=0;
            for(ll j=0;j<n;j++){
                if(!vis[j]){
                    ll dis=abs(a[j]-head);
                    if(dis<min_dis){
                        min_dis=dis;
                        idx=j;
                    }
                }
            }
            head=a[idx];
            cnt+=min_dis;
            vis[idx]=true;
            ans.push_back(a[idx]);
        }

        cout<<"Total number of seek operations = "<<cnt<<endl;

        cout<<"Seek Sequence is : "<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
    }
}

