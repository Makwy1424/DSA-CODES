#include <bits/stdc++.h>
using namespace std;
template <class T>
class arithmatic
{
private:
    T a;
    T b;

public:
    arithmatic(T a, T b);
    T add();
    T sub();
};
template <class T>
arithmatic<T>::arithmatic(T c, T d)
{
    a = c;
    b = d;
}
template <class T>
T arithmatic<T>::add()
{
    return a + b;
}
template <class T>
T arithmatic<T>::sub()
{
    return b - a;
}

int main()
{
    arithmatic<int> ar(10, 20);
    cout << ar.add() << " " << ar.sub() << endl;
    arithmatic<float> ar2(5.20, 14.63);
    cout << ar2.add() << " " << ar2.sub() << endl;

    return 0;
}