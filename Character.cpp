#include <iostream>
using namespace std;

class Parent{
public: char ch;
void getCharacter()
{
    cout<<"Enter a character."<<endl;
    cin>>ch;
}
};
class Child: public Parent{
   public: void displayASCII(){
        cout<<"Character : "<<ch<<endl;
        cout<<"ASCII : "<<int(ch)<<endl;
    }
};

int main(){
    Child child;
    child.getCharacter();
    child.displayASCII();
}