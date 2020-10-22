    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define F first
    #define S second
    #define P pair<int,int>
    #define pb push_back


    const int N = 100005;
    int main()
    {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);


        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
        
        ll t;cin>>t;while(t--)
        {
            ll i, j, k, n, m, cnt = 0, sum = 0;
            cin >> n;
            vector<ll> a(n);
            for ( i = 0; i < n; i++) {
                cin >> a[i];
            }
            vector<ll> vis(n);
            vector<ll> ans(n);
             for ( i = 0; i < n; i++) {
                  vis[i]=-1;      
                    }


            for( i=0;i<n;i++){
                vector<ll> st;
                if(vis[i]==-1){
                    // cout<<"enter : "<<i<<endl;
                    j=i;
                while(a[j]!=i+1){
                    // cout<<"child : "<<a[j]<<endl;;
                    st.pb(a[j]);
                    vis[a[j]-1]++;
                    j=a[j]-1;
                }
                vis[i]++;
                // cout<<"child : "<<i<<endl;
                // cout<<vis[i]<<" "<<i<<endl;
                st.pb(i+1);
                for(auto x:st){
                    ans[x-1]=st.size();
                }
              }
            }
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<"\n";

        }
    }

