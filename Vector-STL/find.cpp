#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v = {1,2,3,4,7,6,4,5,4,3,4} ;

auto it = find(v.begin() , v.end() , 6) ; // ৬ ভ্যালুটি ভেক্টরের মধ্যে পেলে প্রথম যে জায়গায় ভ্যালুটি আছে তার ইটারেটর টা রিটার্ন করা হবে


if( it != v.end()){ // যদি ভ্যালুটি পাওয়া না যায় তবে it তে v.end() স্টোর হবে। 
cout << "found the value " << *it << endl } // যেহেতু ইটারেটর একটি পয়েন্টার এর মতো কাজ করে , তাই আমরা it কে dereferencing করে তার ভ্যালু দেখতে পারবো
else {
cout << "not found" << endl ;
} 
    return 0;
}