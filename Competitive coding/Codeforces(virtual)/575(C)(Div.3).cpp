#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,n,x,y,f1,f2,f3,f4,minx=(1e5),miny=(1e5),maxx=((-1)*1e5),maxy=((-1)*1e5);
        cin >> n;
        for ( i = 0; i < n; i++) {
            cin>>x>>y>>f1>>f2>>f3>>f4;

            if(!f1){
                maxx=max(maxx,x);
            }
            if(!f2){
                miny=min(miny,y);
            }
            if(!f3){
                minx=min(minx,x);
            }
            if(!f4){
                maxy=max(maxy,y);
            }
        }

        if(maxx<=minx && maxy<=miny){
            cout<<"1 "<<minx<<" "<<miny<<"\n";
        }else{
            cout<<0<<"\n";
        }

    }
}

