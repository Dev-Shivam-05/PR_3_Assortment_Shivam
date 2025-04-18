#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << endl << "Enter The Size Of Array : ";
    cin >> size;

    int array[size];

    int i;
    for (i=0; i<size; i++)
    {
        cout << "Enter The Value Of Array["<<i<<"] : ";
        cin >> array[i];
    }
    cout << endl << "The Negative Element Form Array Is : ";
    for (i=0; i<size; i++)
    {
        if (array[i] < 0)
        {
            cout << array[i] << "  ";
        }
    }
    return 0;
}