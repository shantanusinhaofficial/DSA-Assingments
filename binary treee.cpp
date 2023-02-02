#include <bits/stdtr1c++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    // constuctor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter the data for node" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for inserting in left" << endl;
    root->left = buildtree(root->left);
    cout << "enter data for inserting in right" << endl;
    root->right = buildtree(root->right);
    return root;
}
void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "";
    preorder(root->left);

    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    preorder(root->left);

    preorder(root->right);
    cout << root->data << "";
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        temp = q.front();
        cout << temp->data;
        q.pop();
        if (temp = NULL)
        {
            // purana level complete traverse ho chukah
            cout << endl;
            if (!q.empty())
            {
                // q still have somew child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    node *root = NULL;
    // tree is created
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level ordered traversal
    cout << "printing the level order traversal output" << endl;
    levelordertraversal(root);
    cout << "inorder traversal is";
    inorder(root);
    cout << "perorder traversal is";
    preorder(root);
    cout << "postorder traversal is";
    postorder(root);
    return 0;
}
