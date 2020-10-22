#include<bits/stdc++.h>
using namespace std;

#define ll long long int



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
        ll r,c;
        cin >> r>>c;
        if(r!=1||c!=1){
            cout<<"21\n";
            while(r!=c){
                if(r>c){
                    r--;c++;
                }else{
                    r++;c--;
                }
            }
            cout<<r<<" "<<c<<"\n";
            cout<<"1 1\n";
        }else{
            cout<<"19\n";
        }
        ll cdown=1;
        ll cup=6;
        for(ll i=2;i<=4;i++){
            cout<<i<<" "<<i<<"\n";
            cout<<"1 "<<i+cdown<<"\n";
            cout<<cup<<" 8\n";
            cout<<"8 "<<cup<<"\n";
            cup=cup-2;
            cout<<i+cdown<<" 1\n";
            cdown++;
            cout<<i<<" "<<i<<"\n";
        }
        cout<<"8 8\n";




    
    }
}


