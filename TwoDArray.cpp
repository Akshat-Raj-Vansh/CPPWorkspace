#include <iostream>
using namespace std;

void getArray(int *A, int row, int col)
{
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> *((A + i * col) + j);
}

void addArray(int *A, int *B, int *C, int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            *((C + i * col) + j) = *((B + i * col) + j) + *((A + i * col) + j);
}
void showArray(int *A, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *((A + i * col) + j) << " ";
        }
        cout << "\n";
    }
}
int main()
{
    cout << "Enter the size of first array" << endl;
    int row, col;
    cin >> row >> col;
    int M[row][col];
    int N[row][col];
    int Z[row][col];
    getArray((int *)M, row, col);
    getArray((int *)N, row, col);
    addArray((int *)M, (int *)N, (int *)Z, row, col);
    cout<<"First Array :"<<endl;
    showArray((int *)M, row, col);
    cout<<"Second Array :"<<endl;
    showArray((int *)N, row, col);
    cout<<"Sum of both arrays :"<<endl;
    showArray((int *)Z, row, col);
}