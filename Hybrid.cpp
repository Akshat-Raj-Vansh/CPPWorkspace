#include <iostream>
using namespace std;

class A
{
public:
    int x;

public:
    void display()
    {
        cout << "Inside A" << endl;
    }
    void getInput()
    {
        cout << "Enter x" << endl;
        cin >> x ;
    }
};
class B : virtual public A
{
public:
    int bval;

public:
    void display()
    {
        cout << "Inside B" << endl;
    }
    void getInput()
    {
        cout << "Enter b" << endl;
        cin >> bval;
    }
};
class C : virtual public A
{
public:
    int cval;

public:
    void display()
    {
        cout << "Inside C" << endl;
    }
    void getInput()
    {
        cout << "Enter c" << endl;
        cin >> cval;
    }
};
class D : public B, public C
{
public:
    void display()
    {
        cout << "Inside D" << endl;
    }
    void showSum()
    {
        cout << "x+b=" << x + bval << endl;
        cout << "x+c=" << x + cval << endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    D d;
    A *ptrB = &b;
    A *ptrC = &c;
    B *ptrBD = &d;
    C *ptrCD = &d;
    d.A::getInput();
    ptrB->display();//function of A will be called
    d.B::getInput();
    ptrC->display();//function of A will be called
    d.C::getInput();
    ptrBD->display();//function of B will be called
    ptrCD->display();//function of C will be called
    d.showSum();
    return 0;
}