#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data2)
    {
        data = data2;
        left = nullptr;
        right = nullptr;
    }
};
Node *buildtree()
{
    int data1;
    cin >> data1;
    Node *root;
    if (data1 == -1)
    {
        return nullptr;
    }
    root = new Node(data1);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void print(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    Node *root = buildtree();
    print(root);
    return 0;
}
