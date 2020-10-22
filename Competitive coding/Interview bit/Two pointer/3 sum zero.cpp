#define ll long long int
vector<vector<int> > Solution::threeSum(vector<int> &a) {
        sort(a.begin(), a.end());
        int n=a.size();
        vector<vector<int>> result;
        vector<int> v(3);
        ll i=0,val=0;
        while(i<n){
            if (i>0 && a[i]==a[i-1]){
                i++;
                continue;
            } 
            ll left=i+1,right=n-1;
            while(left<right){
                ll x=a[i];
                ll y=a[left];
                ll z=a[right];
                ll temp=x+y+z;
                if(temp==0){
                    v[0]=a[i];
                    v[1]=a[left];
                    v[2]=a[right];
                    sort(v.begin(),v.end());
                    int s = result.size();
                if(s>0 && result[s-1][0]==v[0] && result[s-1][1]==v[1] && result[s-1][2]==v[2]){
                }
                else{
                 result.push_back(v);   
                }
                    // if(find(result.begin(),result.end(),v)==result.end())
                    //     result.push_back(v);
                    
                    left++;
                    right--;
                }
                else if(temp<0){
                    left++;
                }else{
                    right--;
                }
            }
            i++;
        }
        return result;
}
