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
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL; //এখানে একটা doubly linked list এর head নেয়া হচ্ছে।
    Node *tail = NULL;  //এখানে একটা doubly linked list এর tail নেয়া হচ্ছে।
    int sz = 0;  //এখানে size এর জন্য একটা variable নেয়া হচ্ছে।
    
// এখানে doubly linked list এর tail এ value insert করার function নেয়া হচ্ছে।
    void push(int val)
    {
        sz++; //size track রাখা হচ্ছে।
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

// এখানে doubly linked list এর tail এর value delete করার function নেয়া হচ্ছে।
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }

//এখানে tail এর value  return করার function নেয়া হচ্ছে।
    int top()
    {
        return tail->val;
    }
//এখানে size method এর মাধ্যমে track রাখা size variable return করা হচ্ছে।
    int size()
    {
        return sz;
    }
// size variable কোনো value না থাকলে আমরা empty true দিচ্ছি।
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    // st.pop();
    cout << st.top() << endl;

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.push(x);
    // }
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    return 0;
}