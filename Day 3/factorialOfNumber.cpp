// Q2.Factorial Of Number Using Recursion
// Write a program that returns the value of N !(N factorial) using recursion.Note that N != -1 * 2 * ... * N Also,
// 0 != 1 and 1 != 1. Input Format One number, N.
// Constraints 0 <= N <= 15 Output Format
// Output the value of N factorial.

#include<iostream>
using namespace std;
int factNumber(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * factNumber(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"The factorial of number "<<n<<" is: "<<endl;
    cout<<factNumber(n);
    return 0;
}