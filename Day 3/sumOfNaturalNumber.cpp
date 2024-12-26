// Q3.Sum of Natural Number Using Recursion
//     Given a number n,
//     find sum of first n natural numbers.To calculate the sum, we will use a recursive function recur_sum().Examples 1 : Input : 3 Output : 6 Explanation : 1 + 2 + 3 = 6 Examples 2 : Input : 5 Output : 15 Explanation : 1 + 2 + 3 + 4 + 5 = 15 Below is code to find the sum of natural numbers up to n using recursion : Time complexity : O(n) Auxiliary space : O(n)

#include<iostream>
using namespace std;
int sum(int n){
    if(n<=1){
        return n;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    cout<<sum(n);
    return 0;
}