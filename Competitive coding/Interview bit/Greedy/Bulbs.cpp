// Good Question - Take a glance at the solution.

// N light bulbs are connected by a wire.
// Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb.
// Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all the bulbs.
// You can press the same switch multiple times.

// Input Format:
// The first and the only argument contains an integer array A, of size N.
// Output Format:
// Return an integer representing the minimum number of switches required.

// Constraints:
// 1 <= N <= 5e5
// 0 <= A[i] <= 1

// Example:
// Input 1:
//     A = [1]
// Output 1:
//     0
// Explanation 1:
//     There is no need to turn any switches as all the bulbs are already on.

// Input 2: 
//     A = [0 1 0 1]
// Output 2:
//     4
// Explanation 2:
//     press switch 0 : [1 0 1 0]
//     press switch 1 : [1 1 0 1]
//     press switch 2 : [1 1 1 0]
//     press switch 3 : [1 1 1 1]

int bulbs(vector<int> &a){
    int n=a.size(),cnt=0;
    
    // cnt indicates the no. of switches we have pressed till
    // current switch.

    // If cnt is even then current switch is in it's original
    // state. 

    for(int i=0;i<n;i++){
        if(a[i]==1){
            if(cnt%2){
                cnt++;
            }else{
                continue;
            }
        }
        if(a[i]==0){
            if(cnt%2){
                continue;
            }else{
                cnt++;
            }
        }
    }
    return cnt;
}