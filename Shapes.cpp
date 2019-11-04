#include <iostream>
using namespace std;

double Area(int x, int y, int z)
{
    return 0.5 * x * z;
}
int Area(int l, int b)
{
    return l * b;
}
double Area(int r)
{
    return 3.14 * r * r;
}
int main()
{
    cout << "Area of:\n1.Triangle\n2.Circle\n3.Rectangle" << endl;
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Area of Triangle of sides 3, 4, 5: " << Area(3, 4, 5) << endl;
        break;
    case 2:
        cout << "Area of Rectangle of sides 4, 5: " << Area(4, 5) << endl;
        break;
    case 3:
        cout << "Area of Circle of radius 5: " << Area(5) << endl;
        break;
    }
    return 0;
}