    #include <iostream>
    using namespace std;

    class Series
    {
    public:
        int n;

    public:
        virtual void getInput() = 0;

    public:
        virtual void display() = 0;
    };
    class Palindrome : public Series
    {
    public:
        void getInput()
        {
            cout << "Enter the number which you consider palindromic - " << endl;
            cin >> n;
        }

    public:
        void display()
        {
            int num = 0;
            int copy_n = n;
            while (copy_n != 0)
            {
                num = num * 10 + copy_n % 10;
                copy_n = copy_n / 10;
            }
            if (num == n)
                cout << "It is actually a palindromic number." << endl;
            else
                cout << "Well your definition of palindromic number needs brushing." << endl;
        }
    };
    class Armstrong : public Series
    {
    public:
        void getInput()
        {
            cout << "Enter the number which you consider Armstrong - " << endl;
            cin >> n;
        }

    public:
        void display()
        {
            int num = 0;
            int copy_n = n;
            while (copy_n != 0)
            {
                num = num + (copy_n % 10) * (copy_n % 10) * (copy_n % 10);
                copy_n = copy_n / 10;
            }
            if (num == n)
                cout << "It is actually a Armstrong number." << endl;
            else
                cout << "Well your definition of Armstrong number needs brushing." << endl;
        }
    };
    class Quadratic : public Series
    {
    public:
        void getInput()
        {
            cout << "Enter the number of terms for (x^2 + x + 1) series - " << endl;
            cin >> n;
        }

    public:
        void display()
        {
            for (int i = 1; i <= n; i++)
                cout << term(i) << ",";
        }

    public:
        int term(int a)
        {
            return a * a + a + 1;
        }
    };
    class Pascal : public Series
    {
    public:
        void getInput()
        {
            cout << "Enter the number of rows you want - " << endl;
            cin >> n;
        }

    public:
        void display()
        {
            int a[n][n];
            a[0][0] = 1;
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < i + 1; j++)
                {
                    a[i][0] = 1;
                    a[i][i] = 1;
                    if (i != 1 && i != j)
                        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                    else
                        a[i][j] = 1;
                }
            }
            cout << "Pascal Triangle :" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << spaces(n  - i);
                for (int j = 0; j < i + 1; j++)
                    cout << a[i][j] << "     ";
                cout << endl;
            }
        }
    public: string spaces(int sp)
    {
        string spaces="";
        for(int i=0;i<sp*3;i++)
        spaces+=" ";
        return spaces;
    }
    };
    int main()
    {
        Series *ptr;
        Palindrome pd;
        Armstrong ag;
        Quadratic qd;
        Pascal ps;
        cout << "Choose between - \n1.Pascal Triangle\n2.Armstrong Number\n3.Pallindromic Number\n4.Quadratic Series" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            ptr = &ps;
            ptr->getInput();
            ptr->display();
            break;
        case 2:
            ptr = &ag;
            ptr->getInput();
            ptr->display();
            break;
        case 3:
            ptr = &pd;
            ptr->getInput();
            ptr->display();
            break;
        case 4:
            ptr = &qd;
            ptr->getInput();
            ptr->display();
            break;

        default:
            cout << "Invalid Choice entered" << endl;
            break;
        }
        return 0;
    }