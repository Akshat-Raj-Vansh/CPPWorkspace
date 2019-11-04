#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int roll;
    public:
    string getName(){
        cout<<"Enter Name"<<endl;
        getline(cin, name);
        return name;
    }
    int getRoll(){
        cout<<"Enter Roll Number"<<endl;
        cin>>roll;
        return roll;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};
int main()
{
    cout<<"Enter the number of students"<<endl;
    int n;
    cin>>n;
    Student student;
    string Names[n];
    int Roll[n];
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        Names[i]=student.getName();
        Roll[i]=student.getRoll();
        student.display();
    }
    cout<<"\nStudent Details: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Name: "<<Names[i]<<endl;
        cout<<"Roll: "<<Roll[i]<<endl;
    }
    return 0;
}