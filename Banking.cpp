#include <iostream>
#include <string>

using namespace std;

class RBI
{
    int minRate = 4;

public:
    int getminRate()
    {
        return minRate;
    }
};
class Customer
{
public:
    string name;

public:
    string getName()
    {
        return name;
    }
    void inputName()
    {
        cout << "Enter Account Username" << endl;
        getline(cin, name);
    }
};
class Account
{
    string acType;

public:
    void setType(string type)
    {
        acType = type;
    }
    string getType()
    {
        return acType;
    }
};
class SBI : public RBI, public Customer, public Account
{
    int rate;

public:
    void setRate()
    {
        cin >> rate;
        if (rate < getminRate())
            cout << "Less than minimum interest not allowed" << endl;
    }
    int getRate()
    {
        return rate;
    }
};
class ICICI : public RBI, public Customer, public Account
{
    int rate;

public:
    void setRate()
    {
        cin >> rate;
        if (rate < getminRate())
            cout << "Less than minimum interest not allowed" << endl;
    }
    int getRate()
    {
        return rate;
    }
};
int main()
{
    cout << "Choose Bank: \n1.SBI\n2.ICICI" << endl;
    int ch;
    cin>>ch;
    cin.ignore();
    if (ch == 1)
    {
        ICICI icici;
        cin.ignore();
        icici.inputName();
        cout<<"Enter type of account"<<endl;
        string type;
        getline(cin, type);
        icici.setType(type);
        cout<<"Enter required rate of interest"<<endl;
        icici.setRate();
        cout<<"Voila Account Made"<<endl;
    }
    if (ch == 2)
    {
        SBI sbi;
        sbi.getName();
        cout<<"Enter type of account"<<endl;
        string type;
        getline(cin, type);
        sbi.setType(type);
        cout<<"Enter required rate of interest"<<endl;
        sbi.setRate();
        cout<<"Voila Account Made"<<endl;
    }
    return 0;
}
