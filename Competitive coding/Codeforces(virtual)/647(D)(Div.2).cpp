#include<bits/stdc++.h>
    using namespace std;
    
    #define int long long int
    #define P pair<int,int>
    #define pb push_back
    #define F first
    #define S second
    const int N=105;
    
    int pr[N];
    vector<int> primes;
    
    void sieve() {
        int i, j;
        for (i = 2; i < N; i++) {
            if (!pr[i]) {
                primes.pb(i);
                for (j = i; j < N; j += i) {
                    pr[j]++;
                }
            }
        }
    }
    int32_t main(){
    
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif
        sieve();
        //int t; cin>>t; while(t--)
        {
            int n,m;
            cin>>n>>m;
            int a[n];
            vector<vector<int>> gr(n+1);
            for(int i=0;i<m;i++)
            {
                int x,y;
                cin>>x>>y;
                gr[x].pb(y);
                gr[y].pb(x);
            }
            // for(auto x:gr)
            // {
            //     for(auto y:x)
            //         cout<<y<<" ";
            //     cout<<endl;
            // }
            vector<P> reqd(n+1);
            vector<int> need(n+1);
            // requireqdred.pb({0,0});
            for (int i = 1; i <= n; ++i)
            {
                int x;
                cin>>x;
                
                reqd[i]={x,i};
                need[i]=x;
            }
            sort(reqd.begin(), reqd.end());
            int g=n,z=m;
            swap(g,z);
            // for(auto x:required)
            // {
            //     cout<<x.F<<" "<<x.S<<endl;

            // }
            int flag=0;
            swap(g,z);
            for(auto x:reqd)
            {
                swap(g,z);
                if(x.F==0&&x.S==0)
                    continue;
                int curr=x.S;
                int req=x.F;
                // cout<<x.F<<" "<<x.S<<endl;
                set<int> gg;
                // cout<<curr;
                for(auto y:gr[curr])
                {
                    // cout<<y;
                    // cout<<"sfsf";
                    int temp=(need[y]);
                    // cout<<temp;
                    if(temp<req)
                        gg.insert(temp);
                    else if(temp==req)
                    {
                        // cout<<"sfsf";
                        flag++;
                        break;
                    }
                }
                if(flag)
                    break;

                if(gg.size()!=req-1)
                {
                        // cout<<"sfsf";
                    // for(auto x:gg)
                    //     cout<<x<<" ";
                    flag=1;
                    swap(g,z);
                    break;
                }
            }
            if(flag)
            {
                cout<<"-1\n";
            }
            else 
            {
                for(auto x:reqd)
                {
                    if(x.F==0)
                        continue;
                    cout<<x.S<<" ";
                }
            }
            
        }
        return 0;
    }