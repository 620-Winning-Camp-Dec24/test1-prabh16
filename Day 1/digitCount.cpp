// count the total no of digits in a given number n. The number can be a positive integer  for ex. for the number 12345, the count of digits is 5. given an integer n your task is to determine how many digits are present in n?
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;

    while(n>0){
        n = n/10;
        count++;
    }

    cout<<count<<endl;
    return 0;
}