#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // int t; cin>>t; while(t--)
    {
        int n,k,m;
        cin>>n>>m>>k;
        // int a[n][3];
        vector<P> a,b,c,d;
            for(int i=0;i<n;i++)
            {
                int x,y,z;
                cin>>x>>y>>z;
                if(y==1&&z==1)
                    c.pb({x,i});
                else if(y==1&&z==0)
                    b.pb({x,i});
                else if(y==0&&z==1)
                    a.pb({x,i});
                else if(y==0&&z==0)
                    d.pb({x,i});
            }
        if(a.size()+c.size()<k||b.size()+c.size()<k)
        {
            cout<<"-1\n";
            return 0;
        }

        // if((2*k)>m){
        //     cout<<-1<<"\n";
        //     return 0;
        // }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        sort(d.begin(), d.end());

        int ans=0;
        vector<int> val;
        for(int i=0;i<2*k&&val.size()<m;i++)
        {   

            int x=INT_MAX;
            int y=INT_MAX;
            int idx1=INT_MAX;
            int idx2=INT_MAX;
            if(a.size()>0&&b.size()>0){
               x=a.back().F+b.back().F;
               idx1=a.back().S;
               idx2=b.back().S;
            }
            if(c.size()>0){
                y=c.back().F;
                idx1=c.back().S;
            }
            if(y<x)
            {
                ans+=y;
                c.pop_back();
                val.pb(idx1);
            }
            else
            {
                ans+=x;
                val.pb(idx1);
                val.pb(idx2);
                a.pop_back();
                b.pop_back();

            }
        }
        m=m-(val.size());
        cout<<m<<endl;
        if(m>0){
            if(a.size()!=0){
            while(a.size()!=0){
                int x=a.back().F;
                int y=a.back().S;
                a.pop_back();
                d.pb({x,y});
            }
            }
            if(b.size()!=0){
            while(b.size()!=0){
                int x=b.back().F;
                int y=b.back().S;
                b.pop_back();
                d.pb({x,y});
            }
            }
            if(c.size()!=0){
            while(c.size()!=0){
                int x=c.back().F;
                int y=c.back().S;
                c.pop_back();
                d.pb({x,y});
            }
            }
            sort(d.rbegin(), d.rend());
            while(m--){
                ans+=d.back().F;
                val.pb(d.back().S);
                d.pop_back();
            }
        }
        // if(m==0)
        // cout<<m;
        if(m>0){
            cout<<-1<<"\n";
            return 0;
        }
        cout<<ans<<"\n";
        for(auto x:val){
            cout<<x+1<<" ";
        }
    //     else{
    //         cout<<"hi";
    //         cout<<-1<<"\n";
            
    // }
    return 0;
        }
}