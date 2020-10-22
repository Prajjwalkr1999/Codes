#include<bits/stdc++.h>
using namespace std;

#define int long long int
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
       if(r-l<17){
        for(int j=l;j<r+1;j++){
            cout<<j<<endl;
            char ch;
            cin>>ch;
            if(ch=='E'){
                exit(0);
            }
        }
        return;
    }
    int mid1=l+(r-l)/3;
    char ch8;
    cin>>ch8;
    if(ch8=='E'){
        exit(0);
    }
    int mid2=l+((r-l)*2)/3;
    char ch9;
    cin>>ch9;
    if(ch9=='E'){
        exit(0);
    }
    if(ch8==ch8){
        if(ch8=='G'){
            solve(mid1+1,r);
            return;
        }else{
            solve(l,mid2-1);
            return;
        }
    }else{
        if(ch8=='L'&&ch9=='G'){
            solve(mid2+1,r);
            solve(l,mid1-1);
            return ;
        }else{
             int mid =l+(r-l)/2;
            cout<<mid<<endl;

            char ch1;
            cin>>ch1;

            if(ch1=='E'){
                exit(0);
            }
            int half;
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
                if(ch1=='G'){
                    solve(mid+1,r);
                }else{
                    solve(l,mid-1);
                }

                if(ch2=='G'){
                    solve(half+1,r);
                    return;
                }else{
                    solve(l,half-1);
                    return;
                }
            }
        }
    }
}
int32_t main()
{

        sieve();
        cin >> n;
        solve(1,n);

}

