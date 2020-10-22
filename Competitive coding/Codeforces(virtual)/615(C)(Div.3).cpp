#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<int> primes;
int pr[N];

void prime(){
    // primes.pb(2);
    for(ll i=2;i<N;i++){
        if(!pr[i]){
            primes.pb(i);
        }
        for(ll j=i*i;j<N;j=j+i){
            pr[j]++;
        }
    }
}
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
        ll n;
        cin >> n;
        ll count=0,jump=0;
        ll a[N]={0};
        for(auto x:primes){
            if(n%x==0){
                jump=0;
                count++;
                while(n%x==0){
                    n=n/x;
                    a[x]++;
                }
            }
            if(count>=3){
                break;
            }
        }
        ll a1,b,c,x,i,flag=0;
        ll ans[3];
        if(count==1){
            for(i=0;i<N;i++){
                if(a[i]!=0){
                    break;
                }
            }
            if(a[i]>=6){
                a1=i;
                b=i*i;
                c=i*i*i;
            }else{
                flag=1;
            }

        }else if(count==2){
            ll z=0;
            for(ll i=0;i<N;i++){
                if(a[i]!=0){
                    x=x+a[i];
                    ans[z++]=i;
                }
            }
            if(x>=4){
                a1=ans[0];
                b=ans[1];
                if(a[a1]>=3){
                    c=a1*a1;
                }else{
                    c=b*b;
                }
            }else{
                flag=1;
            }

        }else if(count==3){
            ll z=0;
            for(ll i=0;i<N;i++){
                if(a[i]!=0){
                    x=x+a[i];
                    ans[z++]=i;
                }
            }
            a1=ans[0];
            b=ans[1];
            c=ans[2];

        }else if(count==0){
            flag=1;
        }

        if(flag==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<a1<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }

    }
}

