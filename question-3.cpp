#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array's : ";
    cin >> size;

    int array[size][size];

    int i,j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
        }
    }
    cout << endl <<"The Orignal Matrix Is :-" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl <<"The Transpose Matrix Is :-" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
    

    return 0;
}