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
        ll i=0, j=0, k, n, m, cnt = 0, flag = 1;
        cin >> n>>k;
        string s;
        cin>>s;
        // vector<ll> s(n+1);
        // vector<P> pos(n);
        // pos.clear();
        // for(i=0;i<n;i++){
        //     if(a[i]=='0'){
        //         pos.pb({i,i});
        //     }
        // } 
      
     while(k>0&& i<n)
     {
         if(s[i]=='0')
         {
             if(k>=i-j)
             {
                 k=k-(i-j);
                 swap(s[i],s[j]);
                 j++;
             }
             else
             {
                  j=i-k;
                  swap(s[i],s[j]);
                  
                  k=0;
                   
                 
             }
             
             
             
         }
         
         
         i++;
        
         
     }
       

       cout<<s<<"\n";

    }
}

