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
    vector< unordered_map<int,int> > st;
    void init(int n){
        st.resize(4*n);
    }
    void build(int start, int end, int node){           //start at 0,n-1,0  {0th node for the segment tree vector.}
        if(start == end){
            // cout<<1;
            if(a[start].S>0){
                for(int i=0; i<a[start].S;i++){
                    st[node][a[start].F + i]++;
                }
            }else{  
                for(int i=0; i<(-a[start].S);i++){
                    st[node][a[start].F - i]++;
                }
            }
            return;
        }
        int mid = start + ((end-start)>>1);
        build(start,mid,2*node+1);
        build(mid+1,end,2*node+2);

        
        for(auto ele:st[2*node+1]){
            st[node][ele.F] += ele.S;
        }
        for(auto ele:st[2*node+2]){
            st[node][ele.F] += ele.S;
        }
        // st[node] = temp;
    }
    int query(int start,int end,int node, int left, int right,int y){
        if( right < start || left > end){
            //map<int,int> temp;
            return 0;
        }
        if(end<=right && start>=left){
            return st[node][y];
        }

        int mid = start + ((end - start)>>1);
        // for(auto ele:q1){
        //  q2[ele.F] += ele.S;
        // }
        return query(start,mid,2*node+1,left,right,y) + query(mid+1,end,2*node+2,left,right,y);
    }
    // void update(int start,int end,int node,int index,int value){
    //  if(start == end){
    //      a[index] = st[node] = value;
    //      return;
    //  }
    //  int mid = start + ((end-start)>>1);
    //  if(index<=mid){
    //      update(start,mid,2*node+1,index,value);
    //  }else{
    //      update(mid+1,end,2*node+2,index,value);
    //  }
    //  st[node] = st[2*node+1] + st[2*node+2];
    // }
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
        // for(auto ele:a[2]){
        //  cout<<ele.F<<" "<<ele.S<<"\n";
        // }
        g.init(n-2);
        g.build(0,n-2,0);

        // for(auto ele:v){
        //  cout<<ele.F<<" "<<ele.S<<"\n";
        // }

        while(q--){
            int x1,x2,y;
            cin>>x1>>x2>>y;

            ans = g.query(0,n-2,0,x1-1,x2-2,y);

            if(v[x2].S == y)
                ans++;          

            // for(i=x1;i<=x2-1;i++){
            //  if( y <= v[i+1].S && y >= v[i].S ){
            //      ans++;
            //  }else if( y >= v[i+1].S && y <= v[i].S ){
            //      ans++;
            //  }

            // }
            cout<<ans<<"\n";
        }

        
    }
    return 0;
}