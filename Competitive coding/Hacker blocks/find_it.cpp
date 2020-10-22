#include<bits/stdc++.h>
using namespace std;

int main()
{    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n,a[n];
    cin>>n;
     for ( int i = 0; i < n; i++) {
            cin>>a[i];    
            }
             for ( int i = 0; i < n; i++) {
                        cout<<a[i];
                    }
    int q;
    cin>>q;
    while(q--){
        int k,count=0;
        cin>>k;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                count++;
            }
        }
        cout<<count<<endl;
    }


}


