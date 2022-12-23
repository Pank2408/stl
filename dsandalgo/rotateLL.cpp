#include <bits/stdc++.h>
using namespace std;
// The structure Node containing data and ptr to next node
struct Node
{
    int data;
    struct Node *next;
};
// Routine to allocate memory required for a Node, set its value
// and return pointer to this newly allocated memory
struct Node *createNode(int val)
{
    struct Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}
// Initialise a linked list using vector
// and return pointer to its head
struct Node *initLL(vector<int> &a)
{
    if (a.size() == 0)
        return NULL;
    struct Node *head = createNode(a[0]);
    struct Node *trav = head;
    for (int i = 1; i < a.size(); i++)
    {
        trav->next = createNode(a[i]);
        trav = trav->next;
    }
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

// Rotate a linked list denoted by head pointer "head"
// by k positions to the left
struct Node *rotateKLeftLL(struct Node *head, int k)
{
    // Will do in class today
    if (head == NULL || k == 0 || head->next == NULL)
        return head;
    int numElem = countNodesLL(head);
    k = k % numElem;
    struct Node *trav = head;
    struct Node *prevHead = head;
    for (int i = 0; i < k - 1; i++)
        trav = trav->next;
    head = trav->next;
    trav->next = NULL;
    trav = head;
    while (trav->next != NULL)
        trav = trav->next;
    trav->next = prevHead;
    return head;
}
// Rotate a linked list denoted by head pointer "head"
// by k positions to the right
struct Node *rotateKRightLL(struct Node *head, int k)
{
    // Will do in class today
    if (head == NULL || k == 0 || head->next == NULL)
        return head;
    struct Node *trav = head;
    int numElem = 1;
    while (trav->next != NULL)
    {
        numElem++;
        trav = trav->next;
    }
    k = k % numElem;
    trav->next = head;
    for (int i = 0; i < numElem - k; i++)
        trav = trav->next;
    head = trav->next;
    trav->next = NULL;
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
// Test the functions
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    struct Node *head = initLL(v);
    displayLL(head);
    // 1 2 3 4 5 6
    rotateKLeftLL(head, 2);
    displayLL(head);
    rotateKRightLL(head, 2);
    displayLL(head);

    return 0;
}