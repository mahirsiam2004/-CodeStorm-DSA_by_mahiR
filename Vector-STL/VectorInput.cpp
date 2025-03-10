#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v = {1,2,3,4} ;

v.push_back(6) ; // ডান সাইডে ভ্যালু ৬ insert করবে

for(int i =0 ;i<v.size() ;i++) {

cout << v[i] << endl ;

} // 1 2 3 4 5 6

vector<int>v = {5,6,7,8,9} ;

v.pop_back() ; // ডান সাইডে ভ্যালু 9 delete হয়ে যাবে

for(int i =0 ;i<v.size() ;i++) {

cout << v[i] << endl ;

} // 5 6 7 8 
    return 0;
}