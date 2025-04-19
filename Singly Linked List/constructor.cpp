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
int main()
{
    Node a(10);
    Node b(20);
    a.next = &b;
    cout << "value of a is " << a.val << endl;
    cout << "address of b is stored in a.next " << a.next << endl;
    cout << "value of b useing (*a.next).val " << (*a.next).val << endl;
    cout << "value of b useing a.next->val " << a.next->val << endl;
    cout << "value of b is " << b.val << endl;
    cout << b.next << endl;
    return 0;
}