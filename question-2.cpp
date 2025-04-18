#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << endl << "Enter The Size Of Row : ";
    cin >> row;
    cout << endl << "Enter The Size Of Column : ";
    cin >> column;

    int array[row][column];

    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
        }
    }

    int max=array[0][0];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }

    cout << endl << "The Largest Element In Array Is : " << max << endl;
    
    return 0;
}