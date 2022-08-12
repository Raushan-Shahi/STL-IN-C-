#include <bits/stdc++.h>
using namespace std;
    
int main(){
    set<int> s;

    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(15);
    
    cout<< s.count(10)<<endl;
    cout<< s.count(1)<<endl;
    cout<< s.count(9)<<endl;
    cout<< s.count(10)<<endl;

    s.erase(10);

    cout<<s.count(10)<<endl;



return 0;
}