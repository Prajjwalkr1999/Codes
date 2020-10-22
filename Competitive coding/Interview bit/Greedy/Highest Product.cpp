// Highest product
// No hint Required

// Given an array A, of N integers A.
// Return the highest product possible by multiplying 3 numbers from the array.

// Input Format:
// The first and the only argument is an integer array A.

// Output Format:
// Return the highest possible product.

// Constraints:
// 1 <= N <= 5e5

// Example:
// Input 1:
// A = [1, 2, 3, 4]
// Output 1:
// 24

// Explanation 1:
// 2 * 3 * 4 = 24

// Input 2:
// A = [0, -1, 3, 100, 70, 50]
// Output 2:
// 350000

// Explanation 2:
// 70 * 50 * 100 = 350000

int highestProduct(vector<ll> &v){
    int n=v.size(),ans=0;
    vector<int> pos;
    vector<int> neg;
    sort(v.rbegin(),v.rend());
    int anspos=a[0]*a[1]*a[2];
    int ansneg=a[0]*a[n-1]*a[n-2];
    ans=max(anspos,ansneg);
    return ans;
}