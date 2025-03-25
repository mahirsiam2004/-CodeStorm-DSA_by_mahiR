#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next; 
    Node *prev;
    Node(int val)
    {
        this->val = val; //এখানে value রাখা হচ্ছে।
        this->next = NULL; //এখানে  by default next এ NULL রাখা হচ্ছে।
        this->prev = NULL; //এখানে by default previous এ NULL রাখা হচ্ছে।
    }
};

//এই function এর মাধ্যমে head value থেকে last value অব্দি print করা হচ্ছে।

void print_normal(Node *head) //head node কে parameter এ নেয়া হচ্ছে।
{
    Node *tmp = head; //আপাতত headকে tmp এ রাখা হচ্ছে। যাতে হারিয়ে না যায়।

//Singly Linked List এর মতো করে next value গুলো print করা হচ্ছে।
    while (tmp != NULL)  
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

//এই function এর মাধ্যমে tail value থেকে head value অব্দি print করা হচ্ছে।
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev; // যেহেতু reverse print করা হচ্ছে, তাই next এর বদলে previous node assign করা হচ্ছে।
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10); // mandetory কাজ head create করা হচ্ছে।
// অন্যান্য node গুলোও নেয়া হচ্ছে।
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b; // আরেকটা mandetory কাজ tail create করা হচ্ছে।

    // connection
    head->next = a; // head  এর next এ a রাখা হচ্ছে।
    a->prev = head; // a এর previous এ head রাখা হচ্ছে। এতে করে head ও a এর মধ্যে একটা দুই মূখি relation create হচ্ছে।
    a->next = b;
    b->prev = a;

// a এবং b এর মধ্যেও relation create করা হচ্ছে।

    print_normal(head); //এখানে normal head থেকে tail অব্দি print করার function call করা হচ্ছে।
    print_reverse(tail); //এখানে normal tail থেকে head অব্দি print করার function call করা হচ্ছে।

    return 0;
}
