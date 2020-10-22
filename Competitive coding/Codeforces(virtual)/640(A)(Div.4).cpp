#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, x=0,b=0,sumj=0, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        j=n-1;
        i=0;
        if(n==1){
            cout<<1<<" "<<a[0]<<" "<<0<<"\n";
            continue;
        }
        while(i<=j){
            if(i==0){
                x+=a[i];
                sum=a[i];
                cnt++;
                i++;
            }
            while(j>=i&&j>0){
                // cout<<"j "<<j<<endl;
                sumj+=a[j];
                // cout<<sumj<<" \n";
                j--;
                if(sumj>sum){
                    b+=sumj;
                    sum=0;
                    cnt++;
                    break;
                }
                if(i>j){
                    b+=sumj;
                    sum=0;
                    cnt++;
                    // break;
                }
            }
            // cout<<0;
            while(i<=j&&i<n){
                // cout<<"i "<<i<<"\n";
                sum+=a[i];
                // cout<<sum<<" \n";
                i++;
                if(sum>sumj){
                    x+=sum;
                    sumj=0;
                    cnt++;
                    break;
                }
                if(i>j){
                    x+=sum;
                    sumj=0;
                    cnt++;
                    // break;
                }

            }
        }
        cout<<cnt<<" ";
        cout<<x<<" "<<b<<"\n";

    }
}

