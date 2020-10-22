#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define dd pair<int,pair<int,int>>
#define F first
#define S second
#define pb push_back


void BTGT(vector<int> &a, int s, int e, int *segment, int kk)
{
    if (s == e)
    {
        segment[kk] = a[s];
        return;
    }
    int mm = (s + e) / 2;
    BTGT(a, s, mm, segment, 2 * kk);
    BTGT(a, mm + 1, e, segment, 2 * kk + 1);
    segment[kk] = max(segment[2 * kk], segment[2 * kk + 1]);        
}

int query(int *segment, int pp, int oo, int ww, int zz, int kk)
{
    if (pp >= ww && oo <= zz)
    {
        return segment[kk];
    }
    if (zz < pp || ww > oo)
    {
        return INT_MIN;
    }
    int mm = (pp + oo) / 2;
    int ggpg = query(segment, pp, mm, ww, zz, 2 * kk);
    int hole = query(segment, mm + 1, oo, ww, zz, 2 * kk + 1);
    int cnt = max(ggpg, hole);
    return cnt;
}
struct segmenttreelazy1 {
    vector<int> st, lz;
    void init(int n) {
        st.resize(4 * n+1, 0);
        lz.resize(4 * n+1, 0);
    }
    void build(vector<int> a,int start, int end, int node) {
        if (start == end) {
            st[node] = a[start];
            return ;
        }
        int mid = (start + end) / 2;
        build(a,start, mid, 2 * node );
        build(a,mid + 1, end, 2 * node + 1);
        st[node] = st[2 * node ] + st[2 * node + 1];
    }
    // add in l to r
    void update(int start, int end, int l, int r, int val, int node) {
        if (lz[node] != 0) {
            // update segment tree node with lazy val
            st[node] += lz[node] * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node ] += lz[node];
                lz[2 * node + 1] += lz[node];
            }
            lz[node] = 0;
        }
        // no overlap
        if (l > end || r < start) {
            return ;
        }
        // complete overlap
        if (l >= start && r <= end) {
            st[node] += val * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node ] += val;
                lz[2 * node + 1] += val;
            }
            return ;
        }
        int mid = (start + end) / 2;
        update(start, mid, l, r, val, 2 * node );
        update(mid + 1, end, l, r, val, 2 * node + 1);
        st[node] = st[2 * node ] + st[2 * node + 1];
    }

    int query(int start, int end, int l, int r, int node) {
        if (lz[node] != 0) {
            // update segment tree node with lazy val
            st[node] += lz[node] * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node + 1] += lz[node];
                lz[2 * node + 2] += lz[node];
            }
            lz[node] = 0;
        }
        if (l > end || r < start) {
            return 0;
        }
        if (l >= start && r <= end) {
            return st[node];
        }
        int mid = (start + end) / 2;
        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, end, l, r, 2 * node + 2);
        return q1 + q2;
    }
};
struct segmenttreelazy2 {
    vector<int> st, lz;
    void init(int n) {
        st.resize(4 * n+1, 0);
        lz.resize(4 * n+1, 0);
    }
    void build(vector<int> a,int start, int end, int node) {
        if (start == end) {
            st[node] = a[start];
            return ;
        }
        int mid = (start + end) / 2;
        build(a,start, mid, 2 * node );
        build(a,mid + 1, end, 2 * node + 1);
        st[node] = st[2 * node ] + st[2 * node + 1];
    }
    // add in l to r
    void update(int start, int end, int l, int r, int val, int node) {
        if (lz[node] != 0) {
            // update segment tree node with lazy val
            st[node] += lz[node] * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node ] += lz[node];
                lz[2 * node + 1] += lz[node];
            }
            lz[node] = 0;
        }
        // no overlap
        if (l > end || r < start) {
            return ;
        }
        // complete overlap
        if (l >= start && r <= end) {
            st[node] += val * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node ] += val;
                lz[2 * node + 1] += val;
            }
            return ;
        }
        int mid = (start + end) / 2;
        update(start, mid, l, r, val, 2 * node );
        update(mid + 1, end, l, r, val, 2 * node + 1);
        st[node] = st[2 * node ] + st[2 * node + 1];
    }

    int query(int start, int end, int l, int r, int node) {
        if (lz[node] != 0) {
            // update segment tree node with lazy val
            st[node] += lz[node] * (end - start + 1);
            if (start != end) {
                // forward update to children
                lz[2 * node ] += lz[node];
                lz[2 * node + 1] += lz[node];
            }
            lz[node] = 0;
        }
        if (l > end || r < start) {
            return 0;
        }
        if (l >= start && r <= end) {
            return st[node];
        }
        int mid = (start + end) / 2;
        int q1 = query(start, mid, l, r, 2 * node );
        int q2 = query(mid + 1, end, l, r, 2 * node + 1);
        return q1 + q2;
    }
};
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // int t; cin>>t; while(t--)
    {
        int n,k,cnt=0,ret,gg=0,pp,temp=0;
        cin>>n>>k;
        vector<int> a(n+2,0);
        for(int i=1;i<=n;i++)
            cin>>a[i];

        vector<int> b(n+2,0);

        for (int i = 1; i <= n; ++i)
        {
            cnt++;
            cin>>b[i];
        }

        vector<dd> ips(k);

        for(int i=0;i<k;i++)
        {
            cin>>ips[i].F>>ips[i].S.F>>ips[i].S.S;
        }
        vector<int> prefix2;
        vector<int> prefix;
        vector<int> next;
        vector<int> next2;


        next.resize(n+3);
        next2.resize(n+3);

        stack<int> s;
        s.push(n);
        next[n]=n;

        for(int i=n-1;i>=1;i--)
        {
            while(!s.empty()&&a[s.top()]<=a[i])
                s.pop();
            if(s.empty())
                next[i]=i;
            else next[i]=s.top();

            s.push(i);
        }
        while(!s.empty())
            s.pop();

        next2[1]=1;
        s.push(1);
        for(int i=2;i<=n;i++)
        {
            while(!s.empty()&&a[s.top()]<=a[i])
                s.pop();
            if(s.empty())
            {
                next2[i]=i;
            }
            else next2[i]=s.top();

            s.push(i);
        }
        while(!s.empty())
            s.pop();
        prefix.clear();
        prefix.resize(n+3,0);
        for(int i=n;i>=1;i--)
        {
            if(next[i]==i)
                prefix[i]=b[i];
            else prefix[i]=prefix[next[i]]+b[i];
        }    
        
        prefix2.clear();
        prefix2.resize(n+3,0);
        for(int i=1;i<=n;i++)
        {
            if(next2[i]==i)
                prefix2[i]=b[i];
            else
            {

                prefix2[i]=prefix2[next2[i]]+b[i];
            }
        }

        while(!s.empty())
            s.pop();

        s.push(n);
        next[n]=n;

        for(int i=n-1;i>=1;i--)
        {
            while(!s.empty()&&a[s.top()]<a[i])
                s.pop();
            if(s.empty())
                next[i]=i;
            else next[i]=s.top();

            s.push(i);
        }
        while(!s.empty())
            s.pop();

        next2[1]=1;
        s.push(1);
        for(int i=2;i<=n;i++)
        {
            while(!s.empty()&&a[s.top()]<a[i])
                s.pop();
            if(s.empty())
            {
                next2[i]=i;
            }
            else next2[i]=s.top();

            s.push(i);
        }
        while(!s.empty())
            s.pop();

        int segment[4 * (n+1) + 1];
        BTGT(a, 1, n, segment, 1);
        segmenttreelazy1 G1;
        segmenttreelazy2 G2;
        G1.init(n);
        G2.init(n);
     // void build(vector<int> a,int start, int end, int node) {
        G1.build(prefix,1,n,1);
        G2.build(prefix2,1,n,1);
        int l=1,r=3;
        int x=G1.query(1,n,l,l,1);
        int y=G1.query(1,n,r,r,1);
        cout<<x<<" "<<y<<endl;
        for(auto x:ips)
        {
            if(x.F==1)
            {
                //Update query

                int r=x.S.F;

                int val=x.S.S-b[r];
                int l,l1,r1;
                //for prefix 1 updates in g1
                if(next2[r]==r)
                    l=1;
                else l=next2[r]+1;
                l1=min(l,r);
                r1=max(l,r);
                // g1.update(1,n,0,l1,r1,val);
                // cout<<l1<<" "<<r1<<endl;
                // for(int i=l1;i<=r1;i++)
                //     prefix[i]+
                =val;
            // void update(int start, int end, int l, int r, int val, int node) {
                G1.update(1,n,l1,r1,val,1);
                b[r]=x.S.S;
                //for prefix 2
                if(next[r]==r)
                    l=n;
                else l=next[r]-1;
                l1=min(l,r);
                r1=max(l,r);
                // cout<<l1<<" "<<r1<<endl;
                G2.update(1,n,l1,r1,val,1);
                continue;

            }
            if(x.S.F==x.S.S)
            {
                cout<<b[x.S.S]<<"\n";
                continue;
            }

            if(x.S.F>x.S.S)
            {
                

                int l=x.S.S;
                int r=x.S.F;
               
                // cout<<upd<<endl;
                if(query(segment,1,n,l,r,1)==query(segment,1,n,l,r-1,1))
                {
                    cout<<"-1\n";
                    continue;
                }

                else
                {
                // int query(int start, int end, int l, int r, int node) {
                    int x=G1.query(1,n,l,l,1);
                    int y=G1.query(1,n,r,r,1);
                    cout<<x<<" "<<y<<endl;
                    cout<<x-y+b[r]<<"\n";
                }
            }

            else
            {
                int l=x.S.S;
                int r=x.S.F;
                if(query(segment,1,n,r,l,1)==query(segment,1,n,r+1,l,1))
                {
                    cout<<"-1\n";
                    continue;
                }
                else
                {
                    int x=G2.query(1,n,l,l,1);
                    int y=G2.query(1,n,r,r,1);
                    cout<<x<<" "<<y<<endl;
                    cout<<x-y+b[r]<<"\n";
                }
            }

        }             

    }
    return 0;
}