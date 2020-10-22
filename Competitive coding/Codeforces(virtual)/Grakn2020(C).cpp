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
        ld i,j,n,l;
        cin >> n>>l;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        ld xpos=0,ypos=l,xspeed=1,yspeed=1;
        ld ans=0;
        int x=0,y=n-1;
        while(xpos<=ypos){
            if(x>y){
                ans+=((ypos-xpos)/(xspeed+yspeed));
                break;
            }
            ld xval=a[x]-xpos;
            ld yval=ypos-a[y];
            ld xtime=xval/xspeed;
            ld ytime=yval/yspeed;
            if(xtime>ytime){
                ans+=ytime;
                ypos=a[y];
                xpos+=ytime*xspeed;
                yspeed++;
                y--;
            }else if(ytime>xtime){
                ans+=xtime;
                xpos=a[x];
                ypos-=xtime*yspeed;
                xspeed++;
                x++;
            }else{
                ans+=xtime;
                xpos=a[x];
                ypos=a[y];
                xspeed++;
                yspeed++;
                x++;
                y--;
            }
        }
        cout<<fixed<<setprecision(6)<<ans<<"\n";
    }
    return 0;
}

