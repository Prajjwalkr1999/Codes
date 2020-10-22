#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

// const int N = 1e6+7;

string substring(string s,int a,int b) 
{ 
    string s1=""; 
      
    // extract the specified poition of 
    // the string 
    for(int i = a; i < b; i++) 
        s1 = s1 + s[i]; 
          
    return s1; 
} 
  
// can get palindrome string from a 
// given string 
// string findpal(string s) 
// { 
//     vector<string> v ; 
  
//     // moving the pivot from starting till 
//     // end of the string 
//     for (float pivot = 0; pivot < s.length(); pivot += .5) 
//     { 
  
//         // set radius to the first nearest 
//         // element on left and right 
//         float palindromeRadius = pivot - (int)pivot; 
  
//         // if the position needs to be  
//         // compared has an element and the 
//         // characters at left and right 
//         // matches 
//         while ((pivot + palindromeRadius) 
//          < s.length() && (pivot - palindromeRadius)  
//          >= 0 && s[((int)(pivot - palindromeRadius))] 
//              == s[((int)(pivot + palindromeRadius))]) 
//         { 
  
//             v.push_back(substring(s,(int)(pivot -  palindromeRadius), (int)(pivot + palindromeRadius + 1))); 
  
//             // increasing the radius by 1 to point 
//             // to the next elements in left and right 
//             palindromeRadius++; 
//         } 
//     } 
//     // for(auto x:v){
//     //     cout<<x<<"\n";
//     // }
//     int ans=0;
//     int prev=0;
//     for(int i=0;i<v.size();i++){
//         string check=v[i];
//         int x=check.size();
//         if(x>prev){
//             prev=x;
//             ans=i;
//         }
//     }
//     // cout<<v[ans];
//     return v[ans];
// }
bool ispal(string s){
    int n=s.size();

    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
string findpal(string s){
    int n=s.size();
    string ans,val;
    for(int i=0;i<n;i++){
        ans+=s[i];
        if(ispal(ans)){
            val=ans;
        }
    }

    return val;
}

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
        int i=0,j,n;
        string a;
        cin >> a;
        // cout<<a;
        n=a.size();
        string ans;
        while(i<n/2&&a[i]==a[n-i-1]){
            ans+=a[i];
            i++;
        }
        string ans1=ans;
        string a1=substring(a,i,n-i);
        // cout<<a1<<"\n";
        string temp1=findpal(a1);
        reverse(a1.begin(),a1.end());
        string temp2=findpal(a1);
        if(temp1.size()>temp2.size())
            ans+=temp1;
        else
            ans+=temp2;
        // cout<<ans<<" "<<temp1<<"\n";
        reverse(ans1.begin(),ans1.end());
        ans+=ans1;

        cout<<ans<<"\n";


    }
    return 0;
}

