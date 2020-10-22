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
        ll a,b;
            cin >>a>>b;
     if(a>b){
        if(a%2==0&&b%2==0){
            cout<<1<<"\n";
        }else if(a%2!=0&&b%2!=0){
            cout<<1<<"\n";
        }else if(a%2==0&&b%2!=0){
            cout<<2<<"\n";
        }else if(a%2!=0&&b%2==0){
            cout<<2<<"\n";
        }
     }else if(a==b){
        cout<<0<<"\n";        
     }else{
        if(a%2==0&&b%2==0){
            cout<<2<<"\n";
        }else if(a%2!=0&&b%2!=0){
            cout<<2<<"\n";
        }else if(a%2==0&&b%2!=0){
            cout<<1<<"\n";
        }else if(a%2!=0&&b%2==0){
            cout<<1<<"\n";
        }
     }

    }
}

