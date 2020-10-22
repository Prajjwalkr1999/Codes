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
        ll n,cnt=0;
        cin >> n;
        if(n<2){
            cout<<0<<"\n";
            continue;
        }
        ll nc=n;
        // nc=nc/3;
        while(1){
        ll i=1,sum=0;
        if(nc<2){
            break;
        }
        if(nc<=3){
            cnt++;
            break;
        }
        while(sum<=nc){
            sum=((3*i*i)+ i)/2;
            i++;
        }
        i=i-2;
        // cout<<i<<endl;
        sum=(((3*i*i)+ i)/2);
        // cout<<"sum : "<<sum<<endl;
        nc=nc-sum;
        // cout<<nc<<endl;
        cnt++;
        }

        cout<<cnt<<"\n";
    }
}

