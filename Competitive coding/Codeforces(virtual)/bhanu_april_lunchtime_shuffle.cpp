#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
void sub(){
    int n;
    for(int i=0;i<pow(2,n);i++){
            
            int j = 0;
            
            while(i!=0){
                int last_bit = i&1;
                if(last_bit==1){
                    // cout<<a[j]<<"\n";
                }
                j++;
                i= i/2;
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
    
    ll t;cin>>t;while(t--)
    {
        ll n,k;
        cin >> n>>k;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }


        bool check=false;
        while(!check){
            check=true;
            for(ll i=0;i<n-k;i++){
                if(arr[i]>arr[i+k]){
                   swap(arr[i],arr[i+k]);
                    check=false;
                }
            }
        }
        // check sorted or not
        ll x=0;
       
        for(ll z=0;z<n-1;z++){
            if(arr[z+1]<arr[z]){
                x++;
            }
        }

        if(x==0){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }

    }
}

