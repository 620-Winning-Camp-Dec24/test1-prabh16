// Q5.To Find Reverse Of String Using Recursion
// Write a recursive function to print the reverse of a given string.

// Examples 1 : Input : String str =”Hello”
// Output : olleH

// Examples 2 : Input : String str =”Recursion”
// Output : noisruceR
// Time Complexity : O(n)
// Auxiliary Space : O(n)

#include<iostream>
using namespace std;
void reverse (string str){
    if(str.size() == 0){
        return;
    }
    reverse(str.substr(1));
    cout<<str[0];
}

int main(){
    string str = "No Time To Die";
    reverse(str);
    return 0;
}