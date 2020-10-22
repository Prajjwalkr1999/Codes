#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const ll x=9;
ll grid[x][x]={0};

void print_grid(){
      for ( ll i = 0; i < 9; i++) {
            for(ll j=0;j<9;j++){
                cout << grid[i][j] << " " ;
            }
            cout<<endl;
        }
}
bool check(ll r,ll c,ll num){
    for(ll i=0;i<9;i++){
        if(grid[i][c]==num) return false;
    }
    for(ll i=0;i<9;i++){
        if(grid[r][i]==num) return false;
    }
    ll row=r-r%3;
    ll col=c-c%3;
    for(ll i=row;i<(row+3);i++){
        for(ll j=col;j<(col+3);j++){
            if(grid[i][j]==num) return false;
        }
    }
    return true;
}
void sudoku(ll r,ll c){
    if(c==9){
        sudoku(r+1,0);
        return;
    }
    if(r==9&&c==0){
        print_grid();
        exit(0);
    }
    if(grid[r][c]==0){
    for(ll i=1;i<=9;i++){
        if(check(r,c,i)){
            grid[r][c]=i;
            sudoku(r,c+1);
            grid[r][c]=0;
        }
    }
}else{
    sudoku(r,c+1);
}

}
int main()
{
   ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
        // cout<<"Ch";
        ll n;
        cin >> n;
        // cout<<"ch";
        for ( ll i = 0; i < 9; i++) {
            for(ll j=0;j<9;j++){
                cin>>grid[i][j];
            }
        }

        // for ( ll i = 0; i < 9; i++) {
        //     for(ll j=0;j<9;j++){
        //         cout << grid[i][j] << " " ;
        //     }
        //     cout<<endl;
        // }
        // cout<<"Hoo";
        // cout<<"Work";
      sudoku(0,0);
      // cout<<"Working";
    
}


