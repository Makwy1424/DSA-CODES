#include <bits/stdc++.h>
using namespace std;
class polygon
{
private:
    int size_of_polygon;
    int side;

public:
    polygon(int j, int k)
    {
        size_of_polygon = j;
        side = k;
    }
    int outside()
    {
        return size_of_polygon * side;
    }
    void changeside(int l)
    {
        side = l;
    }
};
int main()
{
    int n;
    cout << "THe size of the polygon";
    cin >> n;
    polygon r(n, 5);
    int out = r.outside();
    r.changeside(3);
    int out2 = r.outside();
    cout << "For the side size 5 the perimeter is: " << out << " " << endl
         << "For the side size 3 the perimeter is:" << out2;

    return 0;
}