//Did it myself after running test cases and figuring out many 
//mistakes in my original aprroach.
//Took a lot of time in implementation
// Example : A= 1 2 2 2 1 1 1 1 2 , Sum = 2  
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


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
        int i,j,n,k;
        cin >>n>>k;
        vector<int> a(n);
        map<int,vector<int>> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        int indx1=INT_MAX,indx2=INT_MAX,flag=0,i1,i2;
        for(int i=0;i<n;i++){
            int y=k-a[i];
            if(mp.find(y)!=mp.end()){
                i1=i;
                i2=i;
                for(auto x:mp[y]){
                    if(x!=i){
                        flag=1;
                        i2=x;
                        break;
                    }
                }
                if(i1<i2){
                if(i2<indx2){
                    indx2=i2;
                    indx1=i1;
                }else if(i2==indx2){
                    if(i1<indx1){
                        indx2=i2;
                        indx1=i1;
                    }
                }
             }
            }
        }
        vector<int> ans;
        if(flag){
            if(indx1>indx2) swap(indx1,indx2);
            ans.push_back(indx1+1);
            ans.push_back(indx2+1);
        }
        // for(auto x:ans){
        //     cout<<x<<"\n";
        // }
        return ans;
    }
    return 0;
}

