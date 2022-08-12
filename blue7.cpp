#include <bits/stdc++.h>
using namespace std;
    
int main(){
    set<int> s;

    s.insert(10);
    s.insert(1);
    s.insert(3);
    s.insert(4);

    cout<< (*s.begin())<<endl;


    s.erase(s.begin());
    cout << (*s.begin())<<endl;

    s.insert(-1);
    cout << (*s.begin())<<endl;
return 0;
}