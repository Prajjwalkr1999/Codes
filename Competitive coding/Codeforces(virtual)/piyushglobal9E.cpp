#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 100005;

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    //int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;
        int a[n];
        vector<P> v(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            v[i].F = a[i];
            v[i].S = i;
        }

        sort(v.rbegin(), v.rend());

        set<P> inv;
        for(i=0;i<n;i++){
            for(j=v[i].S+1;j<n;j++){
                if(a[j] < v[i].F){
                    inv.insert({v[i].S , j});
                }
            }
        }

        vector<P> rv;
        while(!inv.empty()){

            set<P>:: iterator itr;
            set<P>:: iterator i;
            itr = inv.begin();
            i = inv.begin();
            i++;
            for(i; i!=inv.end();i++){
                if((*itr).F != (*i).F){
                    break;
                }
            }
            i--;
            rv.pb(*i);
            inv.erase(i);

        }
        cout<<rv.size()<<"\n";
        for(auto ele:rv){
            cout<<ele.F+1<<" "<<ele.S+1<<"\n";
        }



    }
    return 0;
}