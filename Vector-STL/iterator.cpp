#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector <int> v = { 1, 2 ,3 ,4 ,5 ,6 } ;

    vector<int>::iterator it = v.begin() ; 
  
    cout << *it << endl ; // 1 
  
     auto it = v.begin() ; // auto keyword এর সাহায্যে সহজে ইটারেটর ডিক্লেয়ার করা যায়
  
     while(it!=v.end()){
       cout << *it << endl ; 
       it++ ;
     }   
    return 0;
}