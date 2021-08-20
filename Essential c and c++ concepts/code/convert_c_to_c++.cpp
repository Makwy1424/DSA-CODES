#include <bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changelength(int l)
    {
        length = l;
    }
};
int main()
{
    rectangle r(10, 5);
    int area = r.area();
    r.changelength(5);
    int area2 = r.area();
    cout << area << " " << area2;

    return 0;
}