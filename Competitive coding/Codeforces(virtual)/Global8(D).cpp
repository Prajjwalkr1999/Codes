#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>
using namespace std;
int TTT=1;
int n,a,b;
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    int n;
    cin>>n;
    vector<long long> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]==1 and k<n){
            k+=1;
        }
        else
        break;
    }
    long long a1,b;
    for(int i=0;i<n*5;i++){
        a1=a[k];
        b=a[n-1];
        a[k]=a1&b;
        if(a[k]==1 and k<n){
            k+=1;
        }
        a[n-1]=a1|b;
        sort(a.begin(),a.end());
        // for(auto x:a)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
    }
    long long ans=0;
    for(int i=0;i<n and k>0;i++){
        if(a[i]%2==1){
            a[i]+=1;
        }
    }
    for(int i=0;i<n;i++){
        ans+=a[i]*a[i];
    }
    cout<<ans;
    return 0;
}