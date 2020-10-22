//*********************************
// Question was wrongly interpreted : solution needed
// Good Solution 
//*********************************

// There are N children standing in a line. Each child is assigned a rating value.
// You are giving candies to these children subjected to the following requirements:
// 1. Each child must have at least one candy.
// 2. Children with a higher rating get more candies than their neighbors.
// What is the minimum candies you must give?

// Input Format:
// The first and the only argument contains N integers in an array A.
// Output Format:
// Return an integer, representing the minimum candies to be given.
// Example:
// Input 1:
//     A = [1, 2]
// Output 1:
//     3
// Explanation 1:
//     The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. 
//     So rating 2 candidate gets 2 candies. In total, 2 + 1 = 3 candies need to be given out.
// Input 2:
//     A = [1, 5, 2, 1]
// Output 2:
//     7
// Explanation 2:
//     Candies given = [1, 3, 2, 1]

//********************************************************
//Self Input : 1 2 4 6 5 8 3
// Output array containing no. of candies : 1 2 3 4 1 2 1
// Answer : 14
//********************************************************

// Cannot sort array obvious : Was thinking of sorting
int Solution::candy(vector<int> &a) {
    int n=a.size(),ans=0;
    vector<int> cnt(n,1);
    for(int i=1;i<n;i++){
        // Checking from left only changing count for the check
        // which helps in maintaining value of smaller nos.=1
        // or as small as possible
        if(a[i]>a[i-1]){
            cnt[i]=cnt[i-1]+1;
        }
    }
    // self example array : 1 2 4 6 5 8 3
    // self example's cnt array at this point :
    // 1 2 3 4 1 2 1
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
            cnt[i]=max(cnt[i],cnt[i+1]+1);
        }
    }
    for(auto x:cnt){
        ans+=x;
    }
    return ans;
}