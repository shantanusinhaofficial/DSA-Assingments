Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@shantanusinhaofficial 
vishalkumarsing
/
DSA-2nd-year
Public
Fork your own copy of vishalkumarsing/DSA-2nd-year
Code
Issues
Pull requests
Actions
Projects
Security
Insights
DSA-2nd-year/ASSIGNMENT 10/HEIGHT OF BUNARY TREE.CPP
@vishalkumarsing
vishalkumarsing Create HEIGHT OF BUNARY TREE.CPP
Latest commit 38937d2 9 hours ago
 History
 1 contributor
55 lines (46 sloc)  1.08 KB

#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};
*/
    int height(Node* root) {
        if(root==NULL){
            return-1;
        }
        
        return max(height(root->left),
        height(root->right))+1;
        
        
        // Write your code here.
    }

}; //End of Solution
