#include<bits/stdc++.h>
using namespace std;
class Node     // node class বা গ্রুপ
{
    public:
        int val; //node এর value
        Node* next; //next node এর address বা pointer
};
int main()
{
    Node a,b; // দুইটা node a এবং b নেয়া হচ্ছে।


    a.val=10;    // a তে value রাখা হচ্ছে।
    b.val=20; // b তে value রাখা হচ্ছে।


    a.next=&b; // a এর next/pointer এ b node এর address রাখা হচ্ছে
    b.next=NULL; // b যেহেতু last node তাই b এর next এ NULL রাখা হচ্ছে।


    cout<<a.val<<endl;  // এখানে a এর value print করে দেখলাম।
    cout<<b.val<<endl; // এখানে b এর value print করে দেখলাম।
    cout<<(*a.next).val<<endl; // এখানে b এর value a কে dereference করে print করে দেখলাম।
    cout<<a.next->val<<endl; // এখানে b এর value a কে অন্যভাবে dereference করে print করে দেখলাম।
    return 0;
}