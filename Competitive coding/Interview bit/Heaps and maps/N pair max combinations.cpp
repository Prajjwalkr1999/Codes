 // Hint reqd :  Sorting Priority queue and set
// Check i+1,j and i,j+1 
 #include<bits/stdc++.h>
 using namespace std;
 
 #define int long long int
 #define ld long double
 #define F first
 #define S second
 #define P pair<int,int>
 #define pb push_back
 
 const int N = 1e6+7;
 
 
 int32_t main()
 {
 
     ios_base:: sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
 
 
     #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
     #endif
     
     // int t;cin>>t;while(t--)
     {
         int i,j,n;
         cin >> n;
         vector<int> a(n);
         vector<int> b(n);
         for ( i = 0; i < n; i++) {
             cin >> a[i];
         }
          for ( int i = 0; i < n; i++) {
                  cin>>b[i];   
         }

         sort(a.rbegin(),a.rend());
         sort(b.rbegin(),b.rend());

         priority_queue<pair<int,P>> gq;

         gq.push({a[0]+b[0],{0,0}});

         set<P> s;

         vector<int> ans;
         s.insert({0,0});

         while(ans.size()!=n){
            // while(ans.size()<n&&!gq.empty()){
                pair<int,P> temp=gq.top();
                ans.push_back(temp.first);
                gq.pop();
                int i=temp.second.first;
                int j=temp.second.second;
                
                int sum=a[i+1] + b[j];

                if(s.find({i+1,j})==s.end()){
                    gq.push({sum,{i+1,j}});
                    s.insert({i+1,j});
                }

                sum=a[i]+b[j+1];

                if(s.find({i,j+1})==s.end()){
                    gq.push({sum,{i,j+1}});
                    s.insert({i,j+1});
                }
         }

                 for(auto x:ans){
                     cout<<x<<"\n";
                 }
                 cout<<"\n";
        
     }
     return 0;
 }
 
 