#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<ll> arr;

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

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t,x=1;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0,flag=0;
        cin>>n>>k;
        arr.resize(n);
       
        for ( i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cnt=k;
        
        for(i=0;i<n;i++){
            m++;
            if(arr[i]==cnt){
                flag=1;
                m++;
                for(j=i+1;j<i+cnt&&j<n;j++){
                    if(arr[j]!=arr[j-1]-1){
                        flag = 0;
                        m++;
                        break;
                    }
                }
                if(arr[j-1]!=1){
                    flag=0;
                }

                if(flag==1){
                    ans++;
                    i = j-1;
                }
            }

        }
        cout<<"Case #"<<x<<": ";x++;
        cout<<ans<<"\n";   
}
}

