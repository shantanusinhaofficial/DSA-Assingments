#include<bits/stdc++.h>
using namespace std;
// node created hua h
struct node
{
    int value;
    node *next;
};
// constructor called
struct node newnode(int input)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    (new_node)->value = input;
    (new_node)->next = nullptr;
    // cout<<"input ka next"<<next;
}
// inset element in node
void insert(int input, struct node *&head)
{
    struct node *new_node = newnode(input);
    if (head == nullptr)
    {

        head = new_node;
        return;
    }
    struct node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
// print the node
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != nullptr)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
}
void insertattail(int input )
int main()
{
   
    
    // function called
    struct node *head = nullptr;
    insert(1, head);
    insert(2, head);
    insert(3, head)
    display(head);
}
