#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v = {5,6,7,8,9} ;

v.erase(v.begin()+2) // ভেক্টর টির ২ নাম্বার index ১০ insert হয়ে যাবে। 

for(int  i =0 ;i< v.size() ;i++){
cout << v[i] << " " ; 
} 
// 5 6 8 9 

vector<int>v2 = {1,2,3,4,5} ;

v2.erase(v.begin()+1, v.begin()+3) // ১ নাম্বার ইন্ডেক্স থেকে ৩ নাম্বার ইন্ডেক্সের ভ্যালু গুলা ডিলিট করে দিবে
// v2 হবে  1 5 
    return 0;
}