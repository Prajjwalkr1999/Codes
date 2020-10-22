#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
const int N=17;
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
        sieve();
        int n;
        cin>>n;
        int a[n];
        int test[100];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            test[0]++;test[1]++;
            swap(test[0],test[1]);
        }
            test[0]++;test[1]++;
            swap(test[0],test[1]);
        string gg="";
            test[0]++;test[1]++;
            swap(test[0],test[1]);
        for(int i=0;i<a[0];i++)
        {
            test[0]++;test[1]++;
            swap(test[0],test[1]);
            gg+='a';
        }
        // for(int i=0;i<55;i++)
        //     gg+='a';

        vector<string> ans;
       if(gg.size()==0)
             gg+='a';

            test[0]++;test[1]++;
            swap(test[0],test[1]);
        ans.pb(gg);

        for(int i=1;i<n;i++)
        {   
            string curr="";
            for(int j=0;j<a[i-1];j++)
                curr+=gg[j];
            if(a[i]>a[i-1])
            {
                test[0]++;test[1]++;
                swap(test[0],test[1]);
                for(int j=a[i-1];j<a[i];j++){
                    curr+='a'+(i%26);
                        test[0]++;test[1]++;
                    swap(test[0],test[1]);
                }
            }
            if(curr.size()==0){
                    test[0]++;test[1]++;
            swap(test[0],test[1]);
                curr+='a'+(i%26);
            }
            ans.pb(curr);
            gg=curr;
        }
        string curr="";
        for(int i=0;i<a[n-1];i++)
        {
                test[0]++;test[1]++;
            swap(test[0],test[1]);
            curr+=gg[i];
        }
        if(curr.size()==0){
                test[0]++;test[1]++;
            swap(test[0],test[1]);
            curr+='a'+(n)%26;
        }
        ans.pb(curr);
        for(auto x:ans)
            cout<<x<<"\n";
        // cout<<endl;
        

            
    }
    return 0;
}