#include <iostream>
#include <math.h>
using namespace std;
typedef unsigned long long ull;

class Parent
{
public:
    int num;

public:
    int power;

public:
    void getNumber()
    {
        cout << "Enter a number." << endl;
        cin >> num;
        cout << "Enter the power." << endl;
        cin >> power;
    }
};

class Child : public Parent
{
public:
    void displayPower1()
    {
        cout << "Number : " << num << endl;
        cout << "Power : " << power << endl;
        cout << "Result using predefined function : " << pow(num, power) << endl;
        cout << "Result using userdefined function : " << powerFinder() << endl;
    }

public:
    ull powerFinder()
    {
        ull result = 1;

        for (int i = 1; i <= power; i++)
            result *= num;
        return result;
    }
};

int main()
{
    Child child;
    child.getNumber();
    child.displayPower1();
}