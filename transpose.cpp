#include <iostream>
using namespace std;

int main()
{
    int array_A[2][2];
    int i = 0, j = 0;
    int temp = 0;
    int trace = 0;

    // read the matrix values ( original matrix )
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            cout << "enter element " << i << " " << j << " ";
            cin >> array_A[i][j];
        }

    // transpose the matrix values ( the matrix transposed )
    for (j = 0; j < 2; j++)
        for (i = 0; i < 2; i++)
        {
            cout << "element " << j << " " << i << " "
                << array_A[i][j] << endl;
        }
    
    //display the trace
    cout << "Trace is " << array_A[0][0] + array_A[1][1] << endl;

    //display the determinant
    cout << "determinant is " << (array_A[0][0] * array_A[1][1]) - (array_A[0][1] * array_A[1][0]) << endl;


    system("pause");
    return 0;
}
