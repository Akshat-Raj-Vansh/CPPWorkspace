#include <iostream>
using namespace std;

inline int Multiply(int x, int y)
{
    return x * y;
}
inline int Cubic(int x)
{
    return x * x * x;
}
int main()
{
    cout << "Enter an operation:\n1.Multiplication\n2.Power 3" << endl;
    int ch;
    cin >> ch;
    int x, y;
    if (ch == 1)
    {
        cout << "Enter two numbers:" << endl;
        cin >> x >> y;
        cout << "Multiplication of " << x << ", " << y << ": " << Multiply(x, y) << endl;
    }
    else if (ch == 2)
    {
        cout << "Enter a number:" << endl;
        cin >> x;
        cout << "Cube of " << x << ": " << Cubic(x) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    return 0;
}