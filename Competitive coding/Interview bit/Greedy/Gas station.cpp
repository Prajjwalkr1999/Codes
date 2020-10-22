//**********************************************************
// Good question : Approach was correct : solution reqd. for 
// implementation.
// Revise it
//**********************************************************

// Given two integer arrays A and B of size N.
// There are N gas stations along a circular route, where the amount of gas at station i is A[i].
// You have a car with an unlimited gas tank and it costs B[i] of gas to travel from station i
// to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.
// Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1.
// You can only travel in one direction. i to i+1, i+2, … n-1, 0, 1, 2.. Completing the circuit means starting at i and
// ending up at i again.

// Input Format
// The first argument given is the integer array A.
// The second argument given is the integer array B.
// Output Format
// Return the minimum starting gas station's index if you can travel around the circuit once, otherwise return -1

int Solution::canCompleteCircuit(const vector<int> &a, const vector<int> &b) {
    int n=a.size(),sum=0,fuel=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]-b[i]);
        fuel+=(a[i]-b[i]);
        if(fuel<0){
            fuel=0;
            ans=i+1;
        }
    }
    if(sum>=0){
        return ans;
    }
    return -1;
}