#include<bits/stdc++.h>
using namespace std;

#define int long long


const int N = 15;

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

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
                                
    int t; cin>>t; while(t--)
    {
        sieve();
        int i,j,k,n,ans = 0,cnt = 0,sum = 0;
        int l,r,m;
        cin>>l>>r>>m;
        int a,b,c;
        vector<int> test(200);
        for(i=l;i<=r;i++){
            a = i;
            int temp = r-l;
            test[0]++;
            int f = m + temp;
            test[1]++;
            int div = f/a;

            int temp1 = m - a*div;
            test[2]++;
            if(div == 0){
                b = l;
                c = l;
                break;
            }
            test[3]++;
            swap(test[2],test[3]);
            if(temp1<=(r-l) && temp1 >= (l-r)){
                if(temp1 > 0){
                    test[1]++;
                    swap(test[1],test[2]);
                    b = r;
                    c = b-temp1;
                }else{
                    test[4]=temp1;
                    b = l;
                    c = b-temp1;
                }
                break;
            }
        }

        cout<<a<<" "<<b<<" "<<c<<"\n";

    }
    return 0;
}