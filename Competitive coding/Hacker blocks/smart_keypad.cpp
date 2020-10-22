#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
char keypad[][11] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void sub(char* in,char* out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    int digit=in[i]-'0';
    // if(digit==0){
    //     sub(in,out,i+1,j);
    // }
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        sub(in,out,i+1,j+1);
    }
}

const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    
        char a[20];
        cin>>a;
        char out[100];
        sub(a,out,0,0);
    

}

