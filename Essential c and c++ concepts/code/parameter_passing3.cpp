#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
//Machine code is monolithic and source code is procedural.
//This is not a good idea for complex funtion
