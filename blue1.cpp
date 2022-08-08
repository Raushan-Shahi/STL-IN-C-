#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    cout << v.size() << "\n";

    // cout<< v[0]<<" " << v[1] << " " << v[2];

    v.pop_back();
    cout<< v.size()<< "\n";

    v.push_back(8);
    cout << v.size() << "\n";

    v.clear();
    cout<< v.size()<< endl;

    return 0;
}