#include <iostream>
using namespace std;

class Parent{
    public: int x;
    public: virtual void display(){
       cout<<"Virtual Function"<<endl;
    }
};
class Child: public Parent{
    public:
    void getInput(){
        cout<<"Enter a value"<<endl;
        cin>>x;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
};
int main(){
Parent *ptr;
Child child;
ptr = &child;
child.getInput();
ptr->display();
return 0;
}