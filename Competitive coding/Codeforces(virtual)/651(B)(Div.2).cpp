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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> a(2*n);
        vector<int> even;
        vector<int> odd;
        for ( i = 0; i < 2*n; i++) {
            cin >> a[i];
            if(a[i]%2){
                odd.pb(i+1);
            }else{
                even.pb(i+1);
            }
        }
        // for(auto x:even){
        //     cout<<x<<"\n";
        // }
        if(odd.size()==0){
            even.pop_back();
            if(even.size()!=0)
                even.pop_back();
        }else if(even.size()==0){
            odd.pop_back();
            if(odd.size()!=0)
                odd.pop_back();
        }else if(even.size()>odd.size()){
            even.pop_back();
            if(even.size()!=0)
            even.pop_back();
        }else if(odd.size()>even.size()){
            odd.pop_back();
            if(odd.size()!=0)
            odd.pop_back();
        }else{
            if(even.size()!=0)
            even.pop_back();
            if(odd.size()!=0)
            odd.pop_back();
        }
        // if(even.size()==odd.size()){
        //     for(i=0;i<even.size();i++){
        //         cout<<even[i]<<" "<<odd[i]<<"\n";
        //     }
        //     // cout<<"\n";
        // }else if(odd.size()==0){
            for(i=0;i<even.size();i+=2){
                cout<<even[i]<<" ";
                if(i+1<even.size()){
                    cout<<even[i+1]<<"\n";
                }
            }
            // cout<<"\n";
        // }else if(even.size()==0){
            for(i=0;i<odd.size();i+=2){
                cout<<odd[i]<<" ";

                if(i+1<odd.size()){
                    cout<<odd[i+1]<<"\n";
                }else{
                    cout<<"\n";
                }
            }
            // cout<<"\n";
        // }
    }
    return 0;
}

