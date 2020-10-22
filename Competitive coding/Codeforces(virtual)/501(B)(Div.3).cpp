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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        string s,t;
        cin>>s>>t;
        set<char> st;
        set<char> st1;
        for(auto x:s){
            st.insert(x);
        }
        for(auto x:t){
            st1.insert(x);
        }
        if(st.size()!=st1.size()){
            cout<<-1<<"\n";
        }else{
            vector<ll> v;
            for(i=0;i<n;i++){
                if(s[i]==t[i]){
                    continue;
                }
                for(j=i+1;j<n;j++){
                    if(t[i]==s[j]){
                        break;
                    }
                }

                if(j==n){
                   ans=1;
                   break;
                }
                for(;j>i;j--){
                    swap(s[j],s[j-1]);
                    v.pb(j);
                }
            }
            // for(i=0;i<n;i++){
            //     if(s[i]!=t[i]){
            //         ans=1;
            //         break;
            //     }
            // }
            if(ans){
                cout<<-1<<"\n";
            }else{
                cout<<v.size()<<"\n";
                for(auto x:v){
                    cout<<x<<" ";
                }
                cout<<"\n";

            }
        }

    }
}

