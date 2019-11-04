#include <iostream>
using namespace std;

class Parent{
public: char ch;
public: Parent(){
cout<<"Parent: Constructor."<<endl;
}
public: void getCharacter(){
cout<<"Parent: Enter a character."<<endl;
cin>>ch;
}
};

class Child: public Parent{
public: Child(){
cout<<"Child: Constructor."<<endl;
}
public: void getASCII(){
cout<<"ASCII Value of "<<ch<<" is "<<int(ch)<<"."<<endl;
}
};

int main(){
cout<<"MAIN"<<endl;
Child child;
child.getCharacter();
child.getASCII();
return 0;
}
