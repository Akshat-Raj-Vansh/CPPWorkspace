#include <iostream>
using namespace std;

void getArray(int *A, int size)
{
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < size; i++)
        cin >> A[i];
}
double getAvg(int *A, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += A[i];
    return sum / size;
}

double getSum(int *A, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += A[i];
    return sum ;
}

int getMax(int *A, int size)
{
    cout << "Largest Element: ";
    double max = A[0];
    int flag = 0;
    for (int i = 0; i < size - 1; i++)
        if (A[i] < A[i + 1])
        {
            max = A[i + 1];
            flag = i + 1;
        }
    return flag;
}
int main()
{
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    int A[n];
    getArray(A, n);
    cout << "Sum of elements: ";
    cout << getSum(A, n) << endl;
    cout << "Average of elements: ";
    cout << getAvg(A, n) << endl;
    cout << A[getMax(A, n)] << endl;
}