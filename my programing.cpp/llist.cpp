#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructur
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "";
        cout << temp->next;
    }
    cout << endl;
}
int main()
{
    // creating a new node
    node *node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    print(head);
    // head pointed to node 1
    node *head = node1;
    insertathead(head, 12);

    print(head);
    return 0;
}