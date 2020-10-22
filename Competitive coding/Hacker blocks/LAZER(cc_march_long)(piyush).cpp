#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 100005;

vector< P > a(N);

struct segmentTree
{
    vector< vector<int> > st;
    void init(int n){
        st.resize(4*n);
    }
    void build(int start, int end, int node){           //start at 0,n-1,0  {0th node for the segment tree vector.}
        if(start == end){
            // cout<<1;
            if(a[start].S>0){
                for(int i=0; i<a[start].S;i++){
                    st[node].pb(a[start].F + i);
                }
            }else{  
                for(int i=(-a[start].S-1); i>=0;i--){
                    st[node].pb(a[start].F - i);
                }
            }
            return;
        }
        int mid = start + ((end-start)>>1);
        build(start,mid,2*node+1);
        build(mid+1,end,2*node+2);

        

        merge(st[2*node+1].begin(), st[2*node+1].end(), st[2*node+2].begin(), st[2*node+2].end(), back_inserter(st[node]));
    }
    int query(int start,int end,int node, int left, int right,int y){
        if( right < start || left > end){
            return 0;
        }
        if(end<=right && start>=left){
            return (upper_bound(st[node].begin(), st[node].end(), y) - lower_bound(st[node].begin(), st[node].end(), y));
        }

        int mid = start + ((end - start)>>1);
        
        return query(start,mid,2*node+1,left,right,y) + query(mid+1,end,2*node+2,left,right,y);
    }
    
}g;


int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin>>t; while(t--)
    {
        int i,j,n,q,ans = 0;
        cin>>n>>q;
        vector<P> v(n+1);
        for(i=1;i<=n;i++){
            v[i].F = i+1;
            cin>>v[i].S;
            if(i==1){
                continue;
            }
            a[i-2].F = v[i-1].S;
            a[i-2].S = v[i].S - v[i-1].S;
            // if(v[i-1].S<v[i].S){
            //  for(int y = v[i-1].S; y < v[i].S; y++){
            //      a[i-2][y]++;
            //  }
            // }else{
            //  for(int y = v[i-1].S; y > v[i].S; y--){
            //      a[i-2][y]++;
            //  }
            // }
        }
        
        g.init(n-2);
        g.build(0,n-2,0);


        while(q--){
            int x1,x2,y;
            cin>>x1>>x2>>y;

            ans = g.query(0,n-2,0,x1-1,x2-2,y);

            if(v[x2].S == y)
                ans++;          

            cout<<ans<<"\n";
        }

        
    }
    return 0;
}