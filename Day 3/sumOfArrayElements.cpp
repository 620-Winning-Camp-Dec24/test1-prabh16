// Q4.Sum of Array Elements Using Recursion
//     Given an array of integers,
//     find sum of array elements using recursion.Examples 1 : Input : A[] = {1, 2, 3} Output : 6 1 + 2 + 3 = 6

//     Examples 2 : Input : A[] = {15, 12, 13, 10} Output : 50

#include<iostream>
using namespace std;
int arrayElementSum(int arr[], int n){
    if(n<=0){
        return 0;
    }
    else{
        return (arrayElementSum(arr,n-1) + arr[n-1]);
    }
}

int main(){
    int arr[] = {15,12,13,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arrayElementSum(arr,n);
    return 0;
}
