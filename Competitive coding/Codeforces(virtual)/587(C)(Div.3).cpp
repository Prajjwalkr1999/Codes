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
        ll x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;
        if(y5<=y1&&y6>=y2){
            // cout<<1;
            if(x5<=x1&&x6>=x2){
            cout<<"NO\n";
            }else if(y3<=y1&&y4>=y2){
                if(x3<=x1&&x4>=x2){
                    cout<<"NO\n";
                }else{
                    if(x3<=x1&&x6>=x2&&(x5==x4)){
                        cout<<"NO\n";
                    }else if(x5<=x1&&x4>=x2&&(x6==x3)){
                        cout<<"NO\n";
                    }else{
                        cout<<"YES\n";
                    }
                }
            }else{
                cout<<"YES\n";
            }
        
        }else if(y3<=y1&&y4>=y2){
            // cout<<1;
            if(x3<=x1&&x4>=x2){
                cout<<"NO\n";
            }else if(y5<=y1&&y6>=y2){
                if(x5<=x1&&x6>=x2){
                    cout<<"NO\n";
                }else{
                    if(x3<=x1&&x6>=x2&&(x5==x4)){
                        cout<<"NO\n";
                    }else if(x5<=x1&&x4>=x2&&(x6==x3)){
                        cout<<"NO\n";
                    }else{
                        cout<<"YES\n";
                    }
                }
            }else{
                cout<<"YES\n";
            }
        }else if(((y3<=y1)&&(y6>=y2)&&(y4==y5)) || ((y5<=y1)&&(y4>=y2)&&(y3==y6))){
            if((x3<=x1)&&(x5<=x1)&&(x4>=x2)&&(x6>=x2)){
                cout<<3;
                cout<<"NO\n";
            }else{
                // cout<<2;
                cout<<"YES\n";
            }
        }else{
            // cout<<3;
            cout<<"YES\n";
        }

    }
}

