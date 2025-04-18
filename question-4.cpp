#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << "Enter The Size Of Row : ";
    cin >> row;
    cout << "Enter The Size Of Column : ";
    cin >> column;

    int array[row][column];

    int i,j;
    for (i=0; i<row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
        }
    }
    
    int choice,index,sum=0;
    do
    {
        cout << endl << "The Inputed Array Is :- " << endl;
        for (i=0; i<row; i++)
        {
            for (j=0; j<column; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl << "Enter 1 To Perform Sum Of Rows";
        cout << endl << "Enter 2 To Perform Sum Of Column";
        cout << endl << "Enter 0 To Exit Program" << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        cout << endl << "Enter The Index Of Row : ";
        cin >> index;
        
        cout << "Element Of Row Of ["<<index<<"] :- ";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (i == index)
                {
                    cout << array[i][j] << " ";
                    sum += array[i][j];
                }
            }
        }
        cout << endl << "The Sum Of ["<<index<<"] Row Is :- " << sum << endl;
        break;
        
        case 2:
            cout << endl << "Enter The Index Of Column : ";
            cin >> index;

            cout << "Elements Of Column Of ["<<index<<"] :- ";
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < column; j++)
                {
                    if (j == index)
                    {
                        cout << array[i][j] << " ";
                        sum += array[i][j];
                    }
                }
            }
            cout << endl << "The Sum Of ["<<index<<"] index Of Column Is :- " << sum;
            break;
        default:
            break;
        }

    } while (choice != 0);
    
    return 0;
}