#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
     
int subArraySum(int arr[], int n, int sum)  
{  
    int curr_sum, i, j;  
  
     
    for (i = 0; i < n; i++)  
    {  
        curr_sum = arr[i];  
  
       
        for (j = i + 1; j <= n; j++)  
        {  
            if (curr_sum == sum)  
            {  
                cout << "Sum found between indexes " 
                     << i << " and " << j - 1;  
                return 1;  
            }  
            if (curr_sum > sum || j == n)  
                break;  
        curr_sum = curr_sum + arr[j];  
        }  
    }  
  
    cout << "No subarray found";  
    return 0;  
}  
int pr[N];
vector<int> primes;

void seive() {
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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    seive();
    ll t,x=1;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        std::vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        for ( i = 0; i < n; ++i)
        {   cnt++;
            for( j=i;j<n;j++){
                sum=0;
                for( k=i;k<=j;k++){
                    cnt++;
                    sum+= a[k];
                }
                ll chk = sqrt(sum);
                if((chk*chk)==sum){
                    cnt++;
                    ans++;
                }
                
            }           
        }
        cnt=cnt/(ans+1);
           cout<<"Case #"<<x<<": ";x++;
        cout<<ans<<"\n";
    }
}

