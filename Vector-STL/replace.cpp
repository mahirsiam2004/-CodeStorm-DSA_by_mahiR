#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v = {1,2,3,4,7,6,4,5,4,3,4} ;

replace(v.begin() , v.end() , 4, 100); // এই ফাংশন টি ভেক্টরের যে যে স্থানে ভ্যালু 4 আছে তা চেঞ্জ করে 100 করে দিবে 

for(int i=0;i<v.size();i++) {

cout << v[i] << endl ;

} // Output :  1 2 3 100 7 6 100 5 100 3 100 

    return 0;
}