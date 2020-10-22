#include<bits/stdc++.h>
using namespace std;

// #define int long long int
// #define ld long double
// #define F first
// #define S second
// #define P pair<int,int>
// #define pb push_back

const int N = 17;
int pr[N];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.push_back(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}
vector<vector<int>> a;
void solve(int s1,int e1,int s2,int e2){
    int z=s1;
    int b=s2;
    if(s1==s2&&e1==e2){
        a[s1][e1]=1;
        z++;
        b++;
        return ;
    }
    int mid=(s2-s1)/2;
    int ans;
    if(!(s1==(s1+mid) && e1==(e1+mid) && a[s1][e1]==1)){
        cout<<1<<" "<<s1<<" "<<e1<<" "<<s1+mid<<" "<<e1+mid<<endl;
        cin>>ans;
        if(ans){
            // swap(z,b);
            z=s1;b=s2;
            solve(s1,e1,s1+mid,e1+mid);
        }
    }
    if(!(s1==(s1+mid) && e2==(e2-mid) && a[s1][e2]==1)){
        z=b;
        z++;
        // swap(z,b);
        cout<<1<<" "<<s1<<" "<<e2-mid<<" "<<s1+mid<<" "<<e2<<endl;
        cin>>ans;
        if(ans){
            solve(s1,e2-mid,s1+mid,e2);
        }
    }
    if(!(s2==(s2-mid) && e1==(e1+mid) && a[s2][e1]==1)){
        z=e1;
        b=e2;
        cout<<1<<" "<<s2-mid<<" "<<e1<<" "<<s2<<" "<<e1+mid<<endl;
        cin>>ans;
        if(ans){
            // swap(z,b);
            b++;
            solve(s2-mid,e1,s2,e1+mid);
        }
    }

    if(!(s2==(s2-mid) && e2==(e2-mid) && a[s2][e2]==1)){
        cout<<1<<" "<<s2-mid<<" "<<e2-mid<<" "<<s2<<" "<<e2<<endl;
        cin>>ans;
        if(ans){
            // swap(z,b);
            z++;
            b=e2;
            solve(s2-mid,e2-mid,s2,e2);
        }
    }
}
int main()
{

    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);


    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    sieve();
    int t;cin>>t;while(t--)
    {
        int n,p,x,y;
        cin>>n>>p;
        
        a.resize(n,vector<int> (n,0));
        solve(1,1,n,n);
        y=p/100;
        y*=n;
        // for(int i=0;i<(n);i++){
        //     for(int j=0;j<n;j++){
        //         cout<<1<<i+1<<j+1<<i+1<<j+1<<endl;
        //         cin>>y;
        //         if(y){
        //             a[i][j]=1;
        //         }
        //     }
        // }

        cout<<2<<endl;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<a[i][j]<<' ';
            }
                y--;
            cout<<endl;
        }

        cin>>x;
        if(x==-1){
            break;
        }
        a.clear();
    }
    // return 0;
}

