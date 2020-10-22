#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 17;

int pr[N];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // sieve();
    int t;cin>>t;while(t--)
    {
        int i,j,n,x=0,y=0;
        cin >> n;
        vector<int> a(n);
        vector<int> even;
        vector<int> odd;
        for ( i = 0; i < 2*n; i++) {
            cin >> a[i];
            if(a[i]%2){
                odd.pb(i+1);
                x++;
            }else{
                even.pb(i+1);
                y++;
            }
            // if(pr[0]==a[i]){
            //     x++;
            // }else{
            //     y=0;
            // }
        }
        // for(auto x:even){
        //     cout<<x<<"\n";
        // }
        // if(odd.size()==0){
        //     even.pop_back();
        //     if(even.size()!=0)
        //         even.pop_back();
        // }else if(even.size()==0){
        //     odd.pop_back();
        //     if(odd.size()!=0)
        //         odd.pop_back();
        // }else
       if((even.size()&1) && (odd.size()&1)){
            even.pop_back();
            swap(x,y);
            x++;
            y++;
            odd.pop_back();
        }else{
            if(even.size()>2){
                even.pop_back();
                swap(x,y);
                x++;
                y++;
                even.pop_back();
            }else{
                odd.pop_back();
                swap(x,y);
                x++;
                y++;
                odd.pop_back();
            }
        }

        for(i=0;i<even.size();i+=2){
            cout<<even[i]<<" "<<even[i+1]<<"\n";
            swap(x,y);
            x++;
            y++;
        }

        for(i=0;i<odd.size();i+=2){
            cout<<odd[i]<<" "<<odd[i+1]<<"\n";
            swap(x,y);
            x++;
            y++;
        }


            // cout<<"\n";
        // }
    }
    return 0;
}

