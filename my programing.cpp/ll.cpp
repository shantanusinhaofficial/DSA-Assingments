#include <iostream>
#include <stdio.h>
using namespace std;
struct node
{
    int value;
    node *next;
};
struct node *newnode(int input)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    (new_node)->value = input;
    (new_node)->next = nullptr;
    return new_node;
}
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
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != nullptr)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
}
int main()
{
    struct node *head = nullptr;
    insert(1, head);
    insert(2, head);
    insert(3, head);
    display(head);
}