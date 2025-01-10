#include <iostream>

using namespace std;

int main()
{
    /*     column 0    column 1   column 2   column 3  column 4

    row 0:    10          12        75         18        15

    row 1:    55          34        65         13        23

    row 2:    21          31        53         67        99
    */

    int excelSheetData[3][5] = {
        {10, 12, 75, 18, 15},
        {55, 34, 65, 13, 23},
        {21, 31, 53, 67, 99}};

    for (int row = 0; row < 3; row++)
    {
        cout << "I am at shop : " << row + 1 << endl;

        for (int column = 0; column < 5; column++)
        {
            cout << excelSheetData[row][column] << endl;
        }
    }

    return 0;
}
