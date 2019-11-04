#include <iostream>
using namespace std;

class CoPrime
{
    int A, B;

public:
    void getInput()
    {
        cout << "Enter two numbers." << endl;
        cin >> A >> B;
    }

public:
    bool isPrime(int num)
    {
        int f = 0;
        for (int i = 1; i < num; i++)
            if (num % i == 0)
                f++;
        if (f > 1)
            return false;
        else
            return true;
    }

public:
    void countCoPrimeFactors(int num1, int num2)
    {
        int prime[] = {1,1};
        int num = 0;
        if (num1 > num2)
            num = num2;
        else
            num = num1;

        for (int i = 2; i <= num;)
        {
            if (num % i == 0 && isPrime(i) && i!=prime[1])
            {
                num = num / i;
                prime[0]=prime[1];
                prime[1]=i;
            }
            else
                i++;
            cout<<prime[0]<<", "<<prime[1]<<endl;
        }
    }

public:
    void result()
    {
        cout << "CoPrime Factors are "<<endl;
         countCoPrimeFactors(A, B);
    }
};
int main()
{
    CoPrime ob;
    ob.getInput();
    ob.result();
}