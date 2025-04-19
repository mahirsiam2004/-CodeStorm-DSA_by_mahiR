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
        this->next = NULL;
    }
};
void insertAtTail(Node *&head,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    if(head==nullptr){
        head=newNode;
        return;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;

}

void insertAnyPosition(Node *head,int index,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    for(int i=1;i<=index-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head = nullptr;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAnyPosition(head,2,30);
    print(head);
    return 0;
}