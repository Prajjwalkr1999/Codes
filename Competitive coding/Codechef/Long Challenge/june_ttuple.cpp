#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 100005;
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
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        n = 3;
        int p[3];
        int a[3];
        int diff[3];
        int q[3];
        for(i=0;i<n;i++){
            cin>>p[i];
        }
        set<int> sd;
        set<int> sq;
        int one = 0;
        int nc = 0;
        for(i=0;i<n;i++){
            cin>>a[i];
            diff[i] = a[i] - p[i];
            if(p[i] != 0){
                if(a[i]%p[i] == 0){
                    q[i] = a[i]/p[i];
                    if(q[i] == 1){
                        one++;
                    }
                    if(q[i] != 1){
                        sq.insert(q[i]);
                    }
                }else{
                    nc++;
                }
            }else{
                nc++;
            }
            if(diff[i] != 0){
                sd.insert(diff[i]);
            }

        }


        //0 step
        
        if(sd.size() == 0){
            cout<<0<<"\n";
            continue;
        }
        //1 step
        if(sd.size() == 1){
            cout<<1<<"\n";
            continue;
        }
        if(nc == 0 && sq.size() == 1){
            cout<<1<<"\n";
            continue;            
        }


        //2 step
        if(sd.size() == 2 ){
            cout<<2<<"\n";
            continue;
        }

        if((nc == 0 && sq.size() == 2) || (nc == 1 && sq.size() == 1)){
            cout<<2<<"\n";
            continue;            
        }
    
        //2 operations of all three
        if(p[1] - p[0] != 0){
            if( ( (a[1]-a[0])%(p[1]-p[0]) == 0 ) && ( ( p[2] * ((a[1]-a[0])/(p[1]-p[0])) + a[0] - p[0] * ((a[1]-a[0])/(p[1]-p[0])) ) == a[2] ) ){
                cout<<2<<"\n";
                continue;
            }    
        }
        

        bool check = false;
        //1 step applied to all, 1 is completed other two completed in another step
        for(i=0;i<n;i++){
            int x,y,z;

            {
                y = p[(i+1)%3] + diff[i];
                z = p[(i+2)%3] + diff[i];
                if(y != 0 && z != 0){
                    if( a[(i+1)%3] * z == a[(i+2)%3] * y ){
                        check = true;
                    }
                }
            }

            {
                if(p[i] == 0 ){
                    continue;
                }
                if(a[i]%p[i] != 0){
                    continue;
                }
                y = p[(i+1)%3] * q[i];
                z = p[(i+2)%3] * q[i];
                if(a[(i+1)%3] - y == a[(i+2)%3] - z){
                    check = true;
                }
            }
        }

        //2 perform 1 operation other two perform 1 different operation
        for(i=0;i<n;i++){
            int x,y,z;
            {
                x = p[i] + diff[(i+1)%3];    

                if(x!=0 && a[i]%x==0){
                    if(p[(i+2)%3] != 0 && a[(i+2)%3] % p[(i+2)%3] == 0){
                        if(a[i]/x == a[(i+2)%3]/p[(i+2)%3]){
                            check = true;
                        }
                    }
                }

                x = p[i] + diff[(i+2)%3];   

                if(x!=0 && a[i]%x==0){
                    if(p[(i+1)%3] != 0 && a[(i+1)%3] % p[(i+1)%3] == 0){
                        if(a[i]/x == a[(i+1)%3]/p[(i+1)%3]){
                            check = true;
                        }
                    }
                }

            }

            {
                if(p[(i+1)%3] != 0 && a[(i+1)%3]%p[(i+1)%3] == 0){

                    x = p[i] * q[(i+1)%3];    

                    if(a[i] - x == a[(i+2)%3] - p[(i+2)%3]){
                        check = true;
                    }
                    
                    
                }
                if(p[(i+2)%3] != 0 && a[(i+2)%3]%p[(i+2)%3] == 0){

                    x = p[i] * q[(i+2)%3];    

                    if(a[i] - x == a[(i+1)%3] - p[(i+1)%3]){
                        check = true;
                    }
                }

            }

            {
                x = p[i] + diff[(i+1)%3];    

                if(a[i] - x == a[(i+2)%3] - p[(i+2)%3]){
                    check = true;
                }
                
                x = p[i] + diff[(i+2)%3];    

                if(a[i] - x == a[(i+1)%3] - p[(i+1)%3]){
                    check = true;
                }
                
            }

            {
                if(p[(i+1)%3] != 0 && a[(i+1)%3]%p[(i+1)%3] == 0){

                    x = p[i] * q[(i+1)%3];    

                    if(x!=0 && a[i]%x==0){
                        if(p[(i+2)%3] != 0 && a[(i+2)%3]%p[(i+2)%3] == 0){
                            if(a[i]/x == a[(i+2)%3]/p[(i+2)%3]){
                                check = true;
                            }
                        }
                    }
                    
                    
                }
                if(p[(i+2)%3] != 0 && a[(i+2)%3]%p[(i+2)%3] == 0){

                    x = p[i] * q[(i+2)%3];

                    if(x!=0 && a[i]%x == 0){
                        if(p[(i+1)%3] != 0 && a[(i+1)%3]%p[(i+1)%3] == 0){
                            if(a[i]/x == a[(i+1)%3]/p[(i+1)%3]){
                                check = true;
                            }
                        }
                    }
                }
            }
        }

        //multiply in 2 add in 3
        for(i=0;i<n;i++){
            int x,y,z;
            y = a[(i+1)%3] - diff[i];
            z = a[(i+2)%3] - diff[i];
            if(p[(i+1)%3] != 0 && p[(i+2)%3] != 0 && y%p[(i+1)%3] == 0 && z%p[(i+2)%3] == 0){
                if(y/p[(i+1)%3] == z/p[(i+2)%3]){
                    check = true;
                }
            }
        }


        if(check){
            cout<<2<<"\n";
            continue;
        }


        //3 step
        cout<<3<<"\n";

    }
    return 0;
}