#include<bits/stdc++.h>
using namespace std;

#define ll long long int


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
        ll i, n,q,count=0;
        cin >> n>>q;
        ll a[n];
        ll ch,odd=0,even=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            ll temp=a[i];
            count=0;
            while(temp>0){
                temp=temp&(temp-1);
                count++;
            }
                if(count%2==0){
                    even++;
                }else{
                    odd++;
                }
        }

        while(q--){
            ll p;
            cin>>p;
            ll chp=p;
            count=0;
            while(chp>0){
                chp=chp&(chp-1);
                count++;
            }

            if(count%2==0){
            cout<<even<<" "<<odd<<endl;
            }else{
                cout<<odd<<" "<<even<<endl;
            }
        }

    }
}

