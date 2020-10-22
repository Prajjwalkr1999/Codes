    #include<bits/stdc++.h>
    #include<stdlib.h>
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
            ll k, n, m ,cnt=0;
            cin >>n>>m>>k;
            vector<vector<ll>> c(n,vector<ll>(k,0));
            for(ll i=0;i<n;i++){
                for(ll j=0;j<k;j++){
                    cin>>c[i][j];
                }
            }
            // cout<<1;
            // randomize();
            srand(time(NULL));
            ll pre,minm=0,mini=0;
            vector<ll> anskey;
            vector<ll> check(k,0);
            for(ll i=0;i<n;i++){
                if(i==0){
                    pre=c[i][rand()%m];
                }else{
                pre=c[i][mini];
                }
                cnt=0;
                while(cnt<k){
                    if(c[i][cnt]==pre){
                        check[cnt]++;
                    }
                    cnt++;
                }
                minm=check[0];
                for(ll j=0;j<k;j++){
                    if(minm>check[j]){
                        minm=check[j];
                        mini=j;
                    }
                }
                anskey.pb(pre);
               

            }
            for(auto x:anskey){
                cout<<x<<" ";
            }
            cout<<"\n";
        

        }
    }

