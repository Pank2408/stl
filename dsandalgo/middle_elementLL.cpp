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
int countNodesLL(struct Node *head)
{
    struct Node *trav = head;
    int count = 0;
    while (trav != NULL)
    {
        count++;
        trav = trav->next;
    }
    return count;
}
void displayMiddleElement(struct Node *head)
{
    int noElem = countNodesLL(head);
    struct Node *trav = head;
    // LL contains 0 or 1 elements
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        cout << "Middle element is : " << head->data << endl;
        return;
    }

    for (int i = 0; i < noElem / 2 - 1; i++)
        trav = trav->next;

    cout << "Middle element(s) is/are : ";
    if (noElem % 2 == 0)
        cout << trav->data << " and ";
    cout << trav->next->data << endl;
}
// O(n) algorithm to find and display middle element(s)
// in a linked list denoted by head ptr "head"
// in one pass
void displayMiddleElement2(struct Node *head)
{
    struct Node *trav1 = head;
    struct Node *trav2 = head;
    // Empty linked list
    if (head == NULL)
        return;

    while (trav2->next != NULL && trav2->next->next != NULL)
    {
        trav2 = trav2->next->next;
        trav1 = trav1->next;
    }
    cout << "Middle element(s) is/are : ";
    // odd no of elements
    if (trav2->next == NULL)
        cout << trav1->data << endl;
    // even no of elements
    else
        cout << trav1->data << " and " << trav1->next->data << endl;
}
// O(n) algorithm to delete middle element(s)
// in a linked list denoted by head ptr "head"
// in one pass
struct Node *deleteMiddleElement(struct Node *head)
{
    struct Node *trav1 = head; // slow pointer
    struct Node *trav2 = head; // fast pointer
    struct Node *lastTrav1 = NULL;
    // Empty linked list
    if (head == NULL)
        return NULL;

    while (trav2->next != NULL && trav2->next->next != NULL)
    {
        trav2 = trav2->next->next;
        lastTrav1 = trav1;
        trav1 = trav1->next;
    }

    // Odd number of elements case
    if (trav2->next == NULL)
    {
        // only 1 element in linked list
        if (lastTrav1 == NULL)
        {
            free(trav1);
            return lastTrav1;
        }

        lastTrav1->next = trav1->next;
        free(trav1);
    }

    // Even number of nodes case
    else
    {
        // only 2 elements in linked list
        if (lastTrav1 == NULL)
        {
            free(trav1->next);
            free(trav1);
            return lastTrav1;
        }

        lastTrav1->next = trav1->next->next;
        free(trav1->next);
        free(trav1);
    }
    return head;
}
// Function to display a linked list with head pointer "head"
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
    struct Node *head1 = NULL;
    head1 = insertAtEndLL(1, head1);
    head1 = insertAtEndLL(3, head1);
    head1 = insertAtEndLL(3, head1);
    head1 = insertAtEndLL(5, head1);
    // 1 3 3 5
    cout << "LL1:";
    // displayMiddleElement(head1);
    displayMiddleElement2(head1);
    head1 = deleteMiddleElement(head1);
    displayLL(head1);
    // 1 5
    head1 = deleteMiddleElement(head1);
    displayLL(head1);
    //

    struct Node *head2 = NULL;
    head2 = insertAtEndLL(0, head2);
    head2 = insertAtEndLL(3, head2);
    head2 = insertAtEndLL(4, head2);
    head2 = insertAtEndLL(6, head2);
    head2 = insertAtEndLL(7, head2);
    // 0 3 4 6 7
    cout << "LL2 : ";
    // displayMiddleElement(head2);
    displayMiddleElement2(head2);
    head2 = deleteMiddleElement(head2);
    displayLL(head2);
    head2 = deleteMiddleElement(head2);
    displayLL(head2);
    head2 = deleteMiddleElement(head2);
    displayLL(head2);

    return 0;
}