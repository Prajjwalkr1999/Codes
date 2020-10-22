// Did it Myself
// See the solution once and understand the use of check
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
 int check=1;
int ispossible(vector<vector<char>> &a,int row,int col,char val){
    
    for(int i=0;i<9;i++){
        if(a[row][i]==val&&row<9){
            return 0;
        }
        if(a[i][col]==val&&col<9){
            return 0;
        }
    }
    int r=row-row%3;
    int c=col-col%3;
    for(int i=r;i<(r+3);i++){
        for(int j=c;j<(c+3);j++){
            if(a[i][j]==val){
                return 0;
            }
        }
    }
return 1;

}
void sudoku(vector<vector<char>> &a,int row,int col){
    if(row==9&&col==0){
        //In apaar's solution we come here and print the grid
        //and exit(0) but we cannot do that on interviewbit and
        //also we cannot return because that was giving runtime
        //error and also we will destroy our answer on returning
        //due to backtracking (a[row][col]='.') so we came up 
        //with check.
        check=0;
        return ;
    }
    if(col==9){
        sudoku(a,row+1,0);
    }
    if(a[row][col]=='.'){
        for(int i=1;i<=9;i++){
            if(ispossible(a,row,col,i+'0')&&check==1){
                a[row][col]=i+'0';
                sudoku(a,row,col+1);
                // After returning we just check this global 
                //variable check's value.
                if(check==0){
                    return ;
                }
                a[row][col]='.';
            }
        }
    }else{
        if(check==1)
        sudoku(a,row,col+1);
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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        vector<vector<char>> a(9,vector<char> (9,0));
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                cin>>a[i][j];
            }
        }
         for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        sudoku(a,0,0);
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        // char c;
        // m=9;
        // char z=(char)(m);
        // c=m+'0';
        // c='.';
        // cout<<c;
    }
}

