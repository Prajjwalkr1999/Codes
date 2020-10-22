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
    // if(r-l<17){
    //     for(int j=l;j<r+1;j++){
    //         cout<<j<<endl;
    //         char ch;
    //         cin>>ch;
    //         if(ch=='E'){
    //             exit(0);
    //         }
    //     }
    //     return;
    // }
    int mid =l+(r-l)/2;
    cout<<mid<<endl;

    char ch1;
    cin>>ch1;

    cout<<mid<<endl;
    char ch3;
    cin>>ch3;

    if(ch1==ch3){
        if(ch1=='G'){
            solve(mid+1,r);
            return;
        }else{
            solve(l,mid-1);
            return;
        }
    }

    if(ch1=='E'){
        exit(0);
    }
    int half;
    int nmid=(mid/2) -1;
    // if(nmid%2){
    //     nmid-=1;
    // }
    if(ch1=='G'){
        half=l+(mid-l)/2;
    }else{
        half=mid+(r-mid)/2;
    }
    cout<<half<<endl;
    char ch2;
    cin>>ch2;

    if(ch2=='E'){
        exit(0);
    }

    if(ch1==ch2){
        if(ch1=='G'){
            int low=half+1;
            solve(low,r);
            return;
        }else{
            int high=half-1;
            solve(l,high);
            return;
        }
    }else{
         if(ch2=='G'){
            solve(l,mid-1);
            solve(half+1,r);
            return;
            // return;
        }else{
            solve(mid+1,r);
            solve(l,half-1);
            return;
            // return;
        }
    }
    return;
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

