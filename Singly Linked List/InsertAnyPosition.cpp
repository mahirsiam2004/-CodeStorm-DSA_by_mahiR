#include <bits/stdc++.h>
using namespace std;

class Node // একটা node class create করবো।
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


void insert_at_position(Node *&head, int index, int value)
{

    Node *newNode = new Node(value); // নতুন Node বানিয়ে নিলাম 

    Node *temp = head; // temp পয়েন্টার এ head রেখে দিলাম 

    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    // এখানে temp এ যে index এ Node insert করতে হবে তার previous Node আছে
    // temp->next এ আছে তার পরের Node 
    newNode->next = temp->next; // New_node এর next পয়েন্টার এ  next_node কে রেখে দিলাম
    temp->next = newNode; //Previous_Node এর next পয়েন্টার এ  new_node এর এড্রেস রেখে দিলাম
}
