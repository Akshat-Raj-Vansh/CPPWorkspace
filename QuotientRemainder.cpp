#include <iostream>
using namespace std;

class Parent{
public: int divisor;
public: int dividend;
Parent(){
divisor = 10;
dividend = 10;
}
void getDivisor(){
cout<<"Enter the divisor."<<endl;
cin>>divisor;
}
void getDividend(){
cout<<"Enter the dividend."<<endl;
cin>>dividend;
}
};

class Child: public Parent{
public: int quotient;
public: int remainder;
Child(){
quotient = dividend/divisor;
remainder = dividend%divisor;
}
void getQuotient(){
quotient = dividend/divisor;
}
void getRemainder(){
remainder = dividend%divisor;
}
};
int main(){
cout<<"MAIN"<<endl;
Child child;
child.getDivisor();
child.getDividend();
child.getQuotient();
child.getRemainder();
cout<<"Quotient : "<<child.quotient<<"."<<endl;
cout<<"Remainder : "<<child.remainder<<"."<<endl;
return 0;
}
