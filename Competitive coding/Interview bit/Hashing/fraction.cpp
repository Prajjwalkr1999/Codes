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
    
    int t;cin>>t;while(t--)
    {
        int i,j,num,den;
        cin>>num>>den;
        int cnt=0;
        if(num<0){ 
            cnt++;
            num=abs(num);
        }
        if(den<0){
         cnt++;
         den=abs(den);
        }
        string x;
        string temp;
        int rem=num%den;
        unordered_map<int,int> mp;
        int flag=0;
        while(rem!=0&&mp.find(rem)==mp.end()){
            flag=1;
            mp[rem]=temp.length();
            rem*=10;
            int res=rem/den;
            temp+=to_string(res);
            rem=rem%den;
        }
        if(cnt==1) x+="-";
        x+=to_string(num/den);
        if(rem!=0){
            x+=".("+temp.substr(mp[rem])+")";
            return x;
            // cout<<x<<endl;
        }else{
            if(flag)
                x+="."+temp;
            // cout<<x<<endl;
            return x;
        }

    }
    return 0;
}

