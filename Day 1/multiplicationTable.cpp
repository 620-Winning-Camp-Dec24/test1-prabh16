// print multiplication table of given number n. A multiplication table for a number n is a list of products of n with integers

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mul;
    for(int i=1; i<=10; i++){
        cout<< n << "*" << i << "="<< n*i <<endl;   
    }

   
}