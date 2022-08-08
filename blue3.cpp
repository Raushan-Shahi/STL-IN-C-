#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4] = {5, 2, 7, 4};
    sort(a, a + 4);

    for (int i = 0; i < 4; ++i)
    {
        cout << a[i] << " ";
    }
    int b[] = {5, 2, 7, 4};
    cout <<endl;
    sort(a, a + 3);

    for (int i = 0; i < 4; ++i)
    {
        cout << b[i] << " ";
    }

    return 0;
}