// reverse the digits of a given number n, for eg if the input no is 12345 output should be 54321.(loops and modulo)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while(n>0){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
        
    }

    cout << rev;

    return 0;
}