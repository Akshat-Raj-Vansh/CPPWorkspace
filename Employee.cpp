#include <iostream>
#include <string>
using namespace std;

string words(int num)
{
    string word = "";
    string numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teen[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (num % 100 - num % 10 > 19)
        return tens[(num % 100 - num % 10) / 10 - 1] + " " + numbers[num % 10];
    else if (num % 100 - num % 10 > 9)
        return teen[num % 10];
    else
        return numbers[num % 10];
}
int size(int x)
{
    int s = 0;
    while (x > 0)
    {
        x = x / 10;
        s++;
    }
    return s;
}
int main()
{
    int salary;
    int id;
    cout << "Enter your salary" << endl;
    cin >> salary;
    cout << "Enter your id" << endl;
    cin >> id;

    string idW = "";
    string salW = "";
    string help = to_string(salary);
    int digits[size(salary)];

    for (int i = 0; i < size(salary); i++)
    {
        digits[size(salary) - i - 1] = (int)help[i] - 48;
    }
    if (size(salary) >= 3)
    {
        salW = words(digits[2]) + " Hundred and " + words(digits[1] * 10 + digits[0]);
        if (size(salary) == 4)
            salW = words(digits[3]) + " Thousand, " + salW;
        else if (size(salary) == 5)
            salW = words(digits[4] * 10 + digits[3]) + " Thousand, " + salW;
        else if (size(salary) == 6)
            salW = words(digits[5]) + " Lakh, " + words(digits[4] * 10 + digits[3]) + " Thousand, " + salW;
        else if (size(salary) == 7)
            salW = words(digits[6] * 10 + digits[5]) + " Lakh, " + words(digits[4] * 10 + digits[3]) + " Thousand, " + salW;
        else if (size(salary) == 8)
            salW = words(digits[7]) + "Crore, " + words(digits[6] * 10 + digits[5]) + " Lakh, " + words(digits[4] * 10 + digits[3]) + " Thousand, " + salW;
        else if (size(salary) == 9)
            salW = words(digits[8] * 10 + digits[7]) + "Crore, " + words(digits[6] * 10 + digits[5]) + " Lakh, " + words(digits[4] * 10 + digits[3]) + " Thousand, " + salW;
    }
    else
    {
        if (size(salary) == 1)
            salW = words(digits[0]);
        else
            salW = words(digits[1] * 10 + digits[0]);
    }

    for (int i = id; i > 0; i = i / 10)
    {
        idW = words(i % 10) + " " + idW;
    }
    cout << "Salary: " << "Rs. "<< salW <<" only"<< endl;
    cout << "ID: " << idW << endl;
}