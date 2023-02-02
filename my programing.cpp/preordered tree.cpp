// level order traversal?                                                           
void traverse(Node* root)
{
    queue<Node*> q;

    if (root) {
        q.push(root);
    }
    while (!q.empty())
    {
        const Node * const temp_node = q.front();
        q.pop();
        cout<<temp_node->value<<"\n";

        if (temp_node->left) {
            q.push(temp_node->left);
        }
        if (temp_node->right) {
            q.push(temp_node->right);
        }
    }
}


void traverse(Node* root)
{
    queue<Node*> q;

    if (!root) {
        return;
    }
    for (q.push(root); !q.empty(); q.pop()) {
        const Node * const temp_node = q.front();
        cout<<temp_node->value<<"\n";

        if (temp_node->left) {
            q.push(temp_node->left);
        }
        if (temp_node->right) {
            q.push(temp_node->right);
        }
    }
}







