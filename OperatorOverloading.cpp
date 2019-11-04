#include <iostream>
using namespace std;

class OP
{
public:
    int x;
    int y;

public:
    void getData()
    {
        cout << "Enter real part and imaginary part of the complex number" << endl;
        cin >> x >> y;
    }
    void displayData()
    {
        cout << "x= " << x << "\ny= " << y << endl;
    }
    friend OP operator+(OP A, OP B)
    {
        OP C;
        C.x = A.x + B.x;
        C.y = A.y + B.y;
        return C;
    }
    friend OP operator-(OP A, OP B)
    {
        OP C;
        C.x = A.x - B.x;
        C.y = A.y - B.y;
        return C;
    }
};
int main()
{
    OP A, B, C, D;
    A.getData();
    B.getData();
    A.displayData();
    B.displayData();
    C=A+B;
    D=A-B;
    C.displayData();
    D.displayData();
}