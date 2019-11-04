#include <iostream>
using namespace std;

class ParentParent
{
public:
    char ch;
    void getCharacter()
    {
        cout << "Enter a character." << endl;
        cin >> ch;
    }
};
class Parent : public ParentParent
{
public:
    void displayASCII()
    {
        cout << "Character : " << ch << endl;
        cout << "ASCII : " << int(ch) << endl;
    }
};
class Child : public Parent
{
public:
    void displayMessage()
    {
        cout << "Done" << endl;
    }
};
int main()
{
    Child child;
    child.getCharacter();
    child.displayASCII();
    child.displayMessage();
    return 0;
}