#include <bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v = {5,2,7,4};
    sort(v.begin(), v.end());

    for (int i = 0; i < 4; ++i)
    {
        cout << v[i] << " ";
    }
return 0;
}