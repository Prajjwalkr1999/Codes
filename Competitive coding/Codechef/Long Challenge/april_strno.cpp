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
    
      prime();
    ll t;cin>>t;while(t--)
    {
        ll x,k,check=0;
        cin >>x>>k;
        check=pow(2,k);
        if(x>=check){
           ll count=0;
           
        while (!(x % 2)) { 
        x>>= 1; 
        count++; 
    } 
 
    for (ll i = 3; i <= sqrt(x); i += 2) { 
        while (x % i == 0) { 
            count++; 
            x = x / i; 
        }  
    } 
  
    // if n at the end is a prime number. 
    if (x != 2) 
        count+=1;

           
           if(k<=count){
            cout<<1<<"\n";
           }else{
            cout<<0<<"\n";
           }

        }else{
            cout<<0<<"\n";
        }

    }
}

