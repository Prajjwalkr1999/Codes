
int isprime(int b){
    for(int i=2;i<=b*b;i++){
        if(b%i==0){
            return 0;
        }
    }
    return 1;
}
int divide(int b,int c){
    int ans=b;
    if(c<=1){
        return 1;
    }
    for(int i=2;i<=b*b;i++){
            if(b%i==0){
                if(b/i!=i){
                    int ans1=b/i;
                    int ans2=i;
                    if(ans1<ans&&ans1>=c){
                        ans=ans1;
                    }
                    if(ans2<ans&&ans2>=c){
                        ans=ans2;
                    }
                }else{
                    int ans1=b/i;
                    if(ans1<ans&&ans1>=c){
                        ans=ans1;
                    }
                }
            }
    }
    return ans;
}
int Solution::solve(int a, int b, int c) {
    bool win=true;
    if(isprime(b)){
        return 0;
    }
    int flag=0;
    while(b!=1){
        int div=divide(b,c);
        if(div==b){
            break;
        }
        if(div%2==0&&div!=b){
            win=!win;
        }
        b/=div;
        flag=1;
        if(div==1){
            b=1;
        }
    }
    if(flag==0){
        return 0;
    }
    if(a%2==0){
        win=!win;
    }
    if(win){
        return 1;
    }else{
        return 0;
    }
    
    
}
