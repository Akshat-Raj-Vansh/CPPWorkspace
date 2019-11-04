#include <iostream>
using namespace std;

class Parent
{
public: Parent()
{
cout<<"This is parent class constructor."<<endl;
}
public: void getData()
{
cout<<"Get data function of parent class."<<endl;
}
};

class Child: public Parent
{
public: Child()
{
cout<<"This is child class constructor."<<endl;
}
public: void getData(){
cout<<"Get data function of child class."<<endl;
}
};

int main()
{
cout<<"This is function."<<endl;
Child child;
child.getData();
return 0;
}
