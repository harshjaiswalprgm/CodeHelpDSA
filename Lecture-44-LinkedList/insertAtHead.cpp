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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "displaying the data of temp->data :" << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // cout << node->data << endl;
    // cout << node->next << endl;

    Node *head = node1;

    insertAtHead(head, 20);
    display(head);
    cout << endl;
    insertAtHead(head, 45);
    display(head);
    cout << endl;
    insertAtHead(head, 84);
    display(head);
    return 0;
}