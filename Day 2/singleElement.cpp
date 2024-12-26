#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int singleNumber(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int size = arr.size();
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]!=arr[j]){
                return arr[i];
            }

        }
    }

    return -1;
}

int main(){
    vector<int> arr = {2,2,3,1,3,4,4};
    int size = 7;
    cout<<singleNumber(arr)<<endl;

}