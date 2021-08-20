#include <bits/stdc++.h>
using namespace std;
class arithmatic
{
private:
    int a;
    int b;

public:
    arithmatic(int c, int d)
    {
        a = c;
        b = d;
    }
    int add();
    int sub();
};
int arithmatic::add()
{
    return a + b;
}
int arithmatic::sub()
{
    return b - a;
}

int main()
{
    arithmatic t(10, 20);
    cout << t.add() << " " << t.sub() << endl;
    return 0;
}