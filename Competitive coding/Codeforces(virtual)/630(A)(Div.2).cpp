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
        ll a,b,c,d,x,y,x1,y1,x2,y2;
        
        cin >>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        
        ll xf=0,yf=0;

        if(a>b){
            a=a-b;
            if(x1<=x-a){
                xf=1;
            }
        }else{
            b=b-a;
            if(x2>=x+b){
                xf=1;
            }
        }
        if(c>d){
            c=c-d;
            if(y1<=y-c){
                yf=1;
            }
        }else{
            d=d-c;
            if(y2>=y+d){
                yf=1;
            }
        }

        if(x==x1&&x==x2){
            xf=0;
        }
        if(y==y1&&y==y2){
            yf=0;
        }
        if(a==0&&b==0){
            xf=1;
        }
        if(c==0&&d==0){
            yf=1;
        }

        if(xf==1&&yf==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        

    }
}

