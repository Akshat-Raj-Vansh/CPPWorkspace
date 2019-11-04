#include <iostream>
using namespace std;

class OddEven
{
public:
    int L = 0;
    int R = 0;
    int sumE = 0;
    int sumO = 0;
    int count = 0;

public:
    void input()
    {
        cout << "Enter L and R" << endl;
        cin >> L >> R;
    }
    bool sum(int num)
    {
        sumE = 0;
        sumO = 0;
        int r = 0;
        while (num > 0)
        {
            r = num % 10;
            if (r % 2 == 0)
                sumE += r;
            else
                sumO += r;
            num = num / 10;
        }
        if (sumE > sumO)
            return true;
        else
            return false;
    }

    void runLoop()
    {
        for (int i = L; i <= R; i++)
            if (sum(i))
                count++;
        cout << count << endl;
    }
};

int main()
{
    OddEven ob;
    ob.input();
    ob.runLoop();
    return 0;
}