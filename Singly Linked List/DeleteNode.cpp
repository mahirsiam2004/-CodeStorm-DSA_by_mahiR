#include<bits/stdc++.h> 
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next; 
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linekd_list(head);
    int pos;
    cin >> pos;                    // ডিলিট করার পজিশন ইনপুট নিচ্ছি। 
    if (pos >= size(head))         // পজিশন যদি সাইজের সমান অথবা বেশি হয় তাহলে ইনভেলিড হবে। এক্ষেত্রে সাইজের সমান হলেও ইনভেলিড হবে কারন কোন লিঙ্কড লিস্ট এর সাইজ যদি ৫ হয় তাহলে তার নোড পজিশন থাকবে ০ থেকে ৪ পর্যন্ত। ৫ পজিশনে যেহেতু কোন নোড নেই তাই সেটি ডিলিটও করা যাবে না।
    {
        cout << "Invalid" <<endl;
    }
    else
    {
        delete_node(head, pos);   // ভেলিড হলে ডিলিট ফাংশনকে কল করা হচ্ছে।
    }
    print_linekd_list(head);

    return 0;
}