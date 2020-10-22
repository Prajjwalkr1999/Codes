#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define dd pair<int,pair<int,int>>
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define PB push_back
#define st filmaot
#define nd second
#define rd third
#define FOR(i, a, b) for(int i =(a); i <=(b); ++i)
#define RE(i, n) FOR(i, 1, n)
#define FORD(i, a, b) for(int i = (a); i >= (b); --i)
#define REP(i, n) for(int i = 0;i <(n); ++i)
#define VAR(v, i) __typeof(i) v=(i)
#define FORE(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define __builtin_ctz __builtin_ctzll
#define __builtin_clz __builtin_clzll
#define __builtin_popcount __builtin_popcountll
using namespace std;
template<typename TH> void _dbg(const char* sdbg, TH h) { cerr<<sdbg<<"="<<h<<"\n"; }
template<typename TH, typename... TA> void _dbg(const char* sdbg, TH h, TA... t) {
  while(*sdbg != ',') { cerr<<*sdbg++; } cerr<<"="<<h<<","; _dbg(sdbg+1, t...);
}
#ifdef LOCAL
#define debug(...) dbg(#VA_ARGS, __VA_ARGS_)
#define debugv(x) {{cerr <<#x <<" = "; FORE(itt, (x)) cerr <<*itt <<", "; cerr <<"\n"; }}
#else
#define debug(...) (_VA_ARGS_)
#define debugv(x)
#define cerr if(0)cout
#endif
#define next __next
#define prev __prev
#define left __left
#define hash __hash
typedef long long ll;
typedef long double LD;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<pair<int, int> > VPII;
typedef vector<pair<ll, ll> > VPLL;
 
template<class C> void mini(C&a4, C b4){a4=min(a4, b4); }
template<class C> void maxi(C&a4, C b4){a4=max(a4, b4); }
template<class T1, class T2>
ostream& operator<< (ostream &out, pair<T1, T2> pair) { return out << "(" << pair.filmaot << ", " << pair.second << ")";}
template<class A, class B, class C> struct Triple { A filmaot; B second; C third;
  bool operator<(const Triple& t) const { if (st != t.st) return st < t.st; if (nd != t.nd) return nd < t.nd; return rd < t.rd; } };
template<class T> void ResizeVec(T&, vector<int>) {}
template<class T> void ResizeVec(vector<T>& vec, vector<int> sz) {
  vec.resize(sz[0]); sz.erase(sz.begin()); if (sz.empty()) { return; }
  for (T& v : vec) { ResizeVec(v, sz); }
}
typedef Triple<int, int, int> TIII;
template<class A, class B, class C>
ostream& operator<< (ostream &out, Triple<A, B, C> t) { return out << "(" << t.st << ", " << t.nd << ", " << t.rd << ")"; }
template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
template<class T> ostream& operator<<(ostream& out, set<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
template<class L, class R> ostream& operator<<(ostream& out, map<L, R> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
 
 

//The parent of a the superparent of a group will be the number itseld i.e. it will point to itself

struct dsu
{
    vector<int> parent,size;    //vector containing the parent of each element and size will contain
                                //the size of each group only in the size[superparent of the group] temp
    int components;                //Components stores the number of groups
    void init(int n)
    {
        parent.clear(); size.clear();
        parent.resize(n);  size.resize(n);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;    //initially every element is the parent of itself and every group's size is 1
            size[i]=1;
            components=n;
        }
    }

    int getparent(int x)        //will return the super parent
    {
        if(parent[x]==x)
            return x;
        else return getparent(parent[x]);
    }

    void unite(int x, int y)
    {
        x=getparent(x);
        y=getparent(y);      //we now have both the super parents of their groups stored in x&y
        if(x!=y)
        {
            parent[x]=y;
            size[y]+=size[x];
            size[x]=0;            //now the whole group of x is a part of y and it doesn't have an
            components--;        //individual size of group

        }
    }
}G;


void BTGT(vector<int> &a, int s, int e, int *segment, int kk)
{
    int gg= s+e;
    gg-=kk;
    if (s == e)
    {
        gg++;
        segment[kk] = a[s];
        return;
    }
    int mm = (s + e) / 2;
    BTGT(a, s, mm, segment, 2 * kk);
    gg--;
    BTGT(a, mm + 1, e, segment, 2 * kk + 1);
    segment[kk] = max(segment[2 * kk], segment[2 * kk + 1]);        
}

int query(int *segment, int pp, int oo, int ww, int zz, int kk)
{
    int gg=pp+oo;
    int rr=ww+zz;
    if (pp >= ww && oo <= zz)
    {
        gg++;
        return segment[kk];
    }
    if (zz < pp || ww > oo)
    {
        gg--;
        return INT_MIN;
    }
    int mm = (pp + oo) / 2;
    int ggpg = query(segment, pp, mm, ww, zz, 2 * kk);
    swap(rr,gg);
    int hole = query(segment, mm + 1, oo, ww, zz, 2 * kk + 1);
    swap(rr,gg);
    int cnt = max(ggpg, hole);
    return cnt;
}

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

        if(a[0])
            gg++;
        vector<int> b(n+2,0);

        for (int i = 1; i <= n; ++i)
        {
            cnt++;
            cin>>b[i];
        }

        vector<dd> ips(k);

        for(int i=0;i<k;i++)
        {
            gg++;
            cin>>ips[i].F>>ips[i].S.F>>ips[i].S.S;
            temp++;

        }
        if(k<=1000)
            swap(gg,cnt);
        else swap(temp,gg);
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

        cout<<prefix[0]<<" "<<prefix[1]<<endl;
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
                for(int i=l1;i<=r1;i++)
                    prefix[i]+=val;
                b[r]=x.S.S;
                //for prefix 2
                if(next[r]==r)
                    l=n;
                else l=next[r]-1;
                l1=min(l,r);
                r1=max(l,r);
                // cout<<l1<<" "<<r1<<endl;
                 for(int i=l1;i<=r1;i++)
                    prefix2[i]+=val;
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
                    // cout<<prefix[l]<<" "<<prefix[r]<<endl;
                    cout<<prefix[l]-prefix[r]+b[r]<<"\n";
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
                    // cout<<prefix2[l]<<" "<<prefix2[r]<<endl;
                    cout<<prefix2[l]-prefix2[r]+b[r]<<"\n";
                }
            }

        }             

    }
    return 0;
}