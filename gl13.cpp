#include <iostream>
using namespace std;
                    // просит вести число рядов. просит вести число столбцов. обьединить 
int main()
{
    cout << "Enter number of rows: " << "\n";
    int rows;
    cin >> rows;
    int numbers[rows] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[5]);
    for(int i=0; i < size; i++)
        cout << numbers[i] << endl;
    return 0;
}
// cout << "Enter number of rows: " << "\n";
// int r;
// cin >> r;
// cout << "Enter number of columns: " << "\n";
// int c;
// cin >> r;
// int numbers[rows][columns] 