#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        // cout << "this is the  value of inserted at the end :" << temp->data << endl;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtposition(Node *&head, int position, int data)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // updating temp when inserting node at last
    if (temp->next == NULL)
    {
        insertAtTail(head, data);
        return;
    }
    // creating node for data--
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    Node *node1 = new Node(10);
    //  cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    display(head);
    cout << endl;
    insertAtTail(tail, 20);
    display(head);
    cout << endl;
    insertAtTail(tail, 30);
    display(head);
    cout << endl;
    insertAtposition(head, 4, 55);
    display(head);
    return 0;
}