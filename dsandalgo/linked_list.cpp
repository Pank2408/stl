#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int val)
{
    struct Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}
struct Node *insertAtEndLL(int val, struct Node *head)
{
    struct Node *newNode = createNode(val);
    if (head == NULL)
        return newNode;

    struct Node *trav = head;
    while (trav->next != NULL)
        trav = trav->next;
    trav->next = newNode;
    return head;
}
struct Node *insrtAtBeginLL(int val, struct Node *head)
{
}
void displayLL(struct Node *head)
{
    struct Node *trav = head;
    while (trav != NULL)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
}
int main()
{
    struct Node *head = NULL;
    // Empty Linked List(Head is created by ptr "head")
    head = insertAtEndLL(3, head);
    head = insertAtEndLL(7, head);
    head = insertAtEndLL(1, head);
    head = insertAtEndLL(5, head);
    displayLL(head);
    return 0;
}
// we have created a function to store the elements in the linked list
// we have created a function to create a node
// we have created a function to display entire linked list