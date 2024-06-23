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

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    display(node1);
    Node *tail = node1;
    // Node *tail = node1;
    // display(head);
    cout << endl;

    insertAtTail(tail, 12);
    display(tail);

    insertAtTail(tail, 22);
    display(tail);

    insertAtTail(tail, 85);
    display(tail);

    insertAtTail(tail, 65);
    display(tail);

    return 0;
}
