// Sigly Linked List oparations with  optimization by MahiR
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int size(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

void InsertAnyPositiin(Node *head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void deleteAnyPosition(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = nullptr;
    // int n;
    // cin >> n;
    // cout << "1 FOR INPUT" << endl;
    // cout << "2 FOR Insert At Any Position" << endl;
    // cout << "3 FOR Insert At Head" << endl;
    // cout << "4 FOR Delete At Any Position" << endl;
    // cout << "Exit" << endl;

    // switch (n)
    // {
    // case 1:
    //     while (true)
    //     {
    //         int value;
    //         cin >> value;
    //         insertAtTail(head, 20);
    //         if (value == -1)
    //             break;
    //     }
    //     break;
    // case 2:
    //     int n, val;
    //     cout << "Which index you want to insert -> ";
    //     cin >> n;
    //     cout << "Which value you want to insert -> ";
    //     cin >> val;
    //     InsertAnyPositiin(head, n, val);
    // default:
    //     cout << "none";
    //     break;
    // }

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    InsertAnyPositiin(head, 2, 200);
    insertAtHead(head, 0);
    deleteAnyPosition(head, 4);
    print(head); // complixity of o(N)
    return 0;
}
//  /\_/\  
// ( o.o )
//  > ^ <_M_FOR_MAHIR