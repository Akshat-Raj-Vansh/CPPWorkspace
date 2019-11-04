#include <iostream>
#include <string>
using namespace std;

class Decimal
{
public:
    int dec;

public:
    void getNumber()
    {
        cout << "Enter a decimal number" << endl;
        cin >> dec;
    }
    void displayDec()
    {
        cout << "Decimal Number : " << dec << endl;
    }
};
class Binary : public Decimal
{
public:
    string bin = "";

public:
    void getBinary()
    {
        int num = dec;
        while (num != 1)
        {
            bin = to_string(num % 2) + bin;
            num/=2;
        }
        bin = "1"+bin;
    }
    void displayBin()
    {
        cout << "Binary Number : " << bin << endl;
    }
};
class Gray : public Binary
{
public:
    string gray = "";

public:
    void getGray()
    {
        for (int i = bin.length()-1; i >0; i--)
        {
            if (bin.at(i) == '1' && bin.at(i - 1) == '1')
                gray += "0";
            else if (bin.at(i) == '0' && bin.at(i - 1) == '1')
                gray += "1";
            else if (bin.at(i) == '1' && bin.at(i - 1) == '0')
                gray += "1";
            else if (bin.at(i) == '0' && bin.at(i - 1) == '0')
                gray += "0";
        }
        gray = bin.at(0)+gray;
    }
    void displayGray()
    {
        cout << "Gray Code : " << gray << endl;
    }
};
int main()
{
    Gray ob;
    ob.getNumber();
    ob.displayDec();
    ob.getBinary();
    ob.displayBin();
    ob.getGray();
    ob.displayGray();
    return 0;
}