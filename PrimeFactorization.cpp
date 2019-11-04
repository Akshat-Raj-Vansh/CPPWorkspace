#include <iostream>
using namespace std;

class PrimeFact
{
    int p, l, r;
   public: void getInput()
    {
        cout << "Enter the prime number." << endl;
        cin >> p;
        cout << "Enter the range." << endl;
        cin >> l >> r;
    }
   public: bool isPrime(int num)
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
    public: int countPrimeFactors(int num, int prime)
    {
        int count = 0;
        for (int i = 2; i <= num;)
        {
            if (num % i == 0 && isPrime(i))
            {
                num = num / i;
                if (i == prime)
                    count++;
            }
            else
                i++;
        }
        return count;
    }
    public: void result()
    {
        for (int i = l; i <= r; i++)
            cout << "Frequency of Prime Factor " << p << " in " << i << " is " << countPrimeFactors(i, p) << endl;
    }
};
int main()
{
    PrimeFact ob;
    ob.getInput();
    ob.result();
}