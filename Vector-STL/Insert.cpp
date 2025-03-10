#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v = {5,6,7,8,9} ;

v.insert(v.begin()+2 , 10 ) // ভেক্টর টির ২ নাম্বার index ১০ insert হয়ে যাবে। 

for(int  i =0 ;i< v.size() ;i++){
cout << v[i] << " " ; 
} 
// 5 6 10 7 8 9 

vector<int> v2 = {100,1000} ;

v.insert( v.begin()+3, v2.begin(),v2.end()) // এর মাধ্যমে ভেক্টর v এর ৩ নাম্বার পজিশন থেকে v2 insert হয়ে যাবে

// v হবে 5 6 10 100 1000 7 8 9
    return 0;
}