#include<bits/stdc++.h>
using namespace std;

// #define int long long int
// #define ld long double
// #define F first
// #define S second
// #define P pair<int,int>
#define pb push_back
const int N = 107;
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
int n;
 int a=1,b=2;
void solve(int l,int r){

    if(l>r || l<=0 || r>n){
        return;
    }
    swap(a,b);
    int mid = (l+r)/2;
    cout<<mid<<endl;

    char ch1;
    cin>>ch1;

    if(ch1=='E'){
        exit(0);
    }
    // cout<<mid<<endl;
    // char ch4;
    // cin>>ch4;
    
    // if(ch1==ch4){
    //     if(ch1=='L'){
    //         solve(l,mid-1);
    //     }else{
    //         solve(mid+1,r);
    //     }
    //     // return ;
    // }else{
    // cout<<"1"<<endl;
    // char ch2;
    // cin>>ch2;
    
    // if(ch2=='E'){
    //     exit(0);
    // }

    // if(ch2=='L'){
    //     if(ch1=='L'){
    //         solve(l,mid-1);
    //     }else{
    //         solve(mid+1,l);
    //     }
    // }
    
    char ch2;
    int count=0;
    char ch5;
    // cout<<l<<endl;
    //         cin>>ch2;
    //         if(ch2=='E'){
    //             exit(0);
    //         }
    //         l++;
    //  cout<<r<<endl;
    //         cin>>ch5;
    //         if(ch5=='E'){
    //             exit(0);
    //         }
    //         r--;
    while(ch2!='L'&&ch5!='G'){
        swap(a,b);
        if(count%2){
            cout<<l<<endl;
            cin>>ch2;
            if(ch2=='E'){
                exit(0);
            }
            l++;
            // mid=(l+r)/2;
            // char ans;
            // cin>>ans;
            // if(ans=='E'){
            //     exit(0);
            // }
        }else{
            cout<<r<<endl;
            cin>>ch5;
            if(ch5=='E'){
                exit(0);
            }
            r--;
            // mid=(l+r)/2;
            // char ans;
            // cin>>ans;
            // if(ans=='E'){
            //     exit(0);
            // }
        }
        count++;
    }
    mid=(l+r)/2;
    cout<<mid<<endl;
    char ch3;
    cin>>ch3;
    if(ch3=='E'){
        exit(0);
    }

     // if(ch2=='L'){
        if(ch3=='L'){
           
            
            swap(a,b);
            solve(l,mid-1);
        }else{
            swap(a,b);
            solve(mid+1,r);
        }
    // }
    // }

}
int main()
{

    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);


    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    // int t;cin>>t;while(t--)
    // {
        // int n;
    // sieve();
        cin >> n;

        solve(1,n);
        
    // }
    // return 0;
}

