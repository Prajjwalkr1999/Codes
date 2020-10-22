    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define F first
    #define S second
    #define P pair<int,int>
    #define pb push_back


    const ll mod = 1e9+7;
    vector<vector<ll>>v;
    vector<ll> a;
    
    

    void addEdge( ll x,ll y) 
    { 
        v[x].push_back(y); 
        v[y].push_back(x); 
    }
    void factors(vector<ll> st){
        map<ll,ll> cnt;

        for(ll i=0;i<st.size();i++){
            ll num = a[st[i]-1];
            ll temp = num;
            while(temp%2 == 0){
                temp = temp/2;
                cnt[2] = (cnt[2] + 1)%mod;
            }
            for(ll i=3;i*i<=num;i+=2){
                if(temp == 1){
                    break;
                }

                while(temp%i == 0){
                    temp = temp/i;
                    cnt[i] = (cnt[i] + 1)%mod;
                }
            }
            if(temp!=1){
                cnt[temp] = (cnt[temp]+1)%mod;
            }

        }

        ll ans = 1;
        for(auto i:cnt){
            ans = ((ans%mod)*((i.second+1)%mod))%mod;
        }

        cout<<ans%mod<<"\n";

    }
    void DFS(ll x, ll y, vector<ll> &st,vector<bool> &vis,bool flag) 
    {   
        if(flag==false){
            return;
        }
        st.push_back(x); 
        if (x == y) { 
            flag=false;
            factors(st);
            return; 
        } 
        vis[x] = true; 
      
        // ll flag = 0; 
        if (!v[x].empty()) { 
            for (ll j = 0; j < v[x].size(); j++) { 
                if (vis[v[x][j]] == false) { 
                    DFS(v[x][j], y ,st,vis,flag); 
                    // flag = 1; 
                } 
            } 
        } 
        vis[x]=false;
        // if (flag == 0) { 
            st.pop_back(); 
        // } 
    } 
    
    int main()
    {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);

        // prime();
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
        
        ll t;cin>>t;while(t--)
        {
            ll n,z,y;
            cin >> n;
            // if(n==1){
            //     ll s,q;
            //     cin>>s;
            //     st.pb(s);
            //     cin>>q;
            //     while(q--){
            //         ll u,vi;
            //         cin>>u>>vi;
            //          factors();

            //     }
            // }else
            {
            v.resize(n+1);
            for(ll i=0;i<n-1;i++){
                cin>>z>>y;
                addEdge(z,y);
            }
            a.resize(n);
            for(ll i=0;i<n;i++){
                cin>>a[i];
            }
            ll q,u,vi,x=1;
            cin>>q;
            while(q--){
                cin>>u>>vi;
                vector<bool> vis;
                vis.resize(n+2);
                for(ll j=0;j<n+2;j++){
                    vis[j]=false;
                }
                vector<ll> st;
                DFS(u,vi,st,vis,true);
                // for(auto x:st){
                //     cout<<"St : "<<x<<endl;
                // }
                // factors();
                st.clear();
                vis.clear();
                }
                    v.clear();
                    a.clear();
                }
        }
        return 0;
    }

