#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 17;
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

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        sieve();   
        int n;
        cin>>n;
        vector<int> a(n);
     
        vector<int> visited(n+10,0);
     
       
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            visited[a[i]]=1;
        }        
        int flag=0,even=0,odd=0;
       for (int i = 0; i < n; ++i)
       {
            if(a[i]>i+1)
            {
                flag++;
                break;
            }
            if(a[i]%2){
                even++;
            }else{
                odd++;
            }
       }

             if(flag)
             {
                cout<<"-1\n";
                return 0;
             }
             vector<int> ans(n);
             
             int st=0;
             for (int i = 0; i < n+5; ++i)
             {
                if(visited[i]==0)
                {
                    st=i;
                    break;
                }
                if((even-odd)>i){
                    even++;
                    odd--;
                }
             }
             ans[0]=st;
             for(int j=st+1;j<n+5;j++)
             {
                if(visited[j]==0)
                {
                    st=j;
                    break;
                }
                if(even>visited[j]){
                    swap(even,odd);   
                }
             }
            for(int i=1;i<n;i++)
            {
                if(a[i]==a[i-1])
                {
                    if(st<=n)
                        ans[i]=st;
                    else ans[i]=ans[i-1];

                    for(int j=st+1;j<n+5;j++)
                     {
                        if(visited[j]==0)
                        {
                            st=j;
                            break;
                        }
                        if(even>visited[j]){
                            swap(even,odd);   
                        }
                     }

                }
                else ans[i]=a[i-1];
                if(even>ans[i]){
                    swap(even,odd);   
                }

            }

            for (int i = 0; i < n; ++i)
            {
                cout<<ans[i]<<" ";
            }   

    }
    return 0;
}

