// Given an integer array number where the elements are sorted in ascending order. Convert it to a height balanced binary search tree.
#include<iostream>
using namespace std;
struct TreeNode{
    int value;
    TreeNode* left;
    TreeNode*right;
    TreeNode(int x) : value(x), left(NULL), right(NULL) {}
};

TreeNode* sortedArrayToBST(int arr[], int start, int end){
    if(start>end){
        return NULL;
    }

    int mid = start + (end-start)/2;
    TreeNode* root = new TreeNode(arr[mid]);

    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;
}

void print(TreeNode* root){
    if(root!=NULL){
        print(root->left);
        cout<<root->value<<" ";
        print(root->right);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    TreeNode* root = sortedArrayToBST(arr,0,size-1);

    cout<<"In-order traversal of the constructed BST: ";
    print(root);
    cout<<endl;

    return 0;
}