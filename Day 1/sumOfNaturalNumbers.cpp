// calculate the sum of all  natural numbers from 1 to n where n is a positive integer. you have to take n as input and output the result as sum.
// sum = n(n + 1) / 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
   sum = n * (n+1)/2;
    cout << sum <<endl;
    return 0;

}