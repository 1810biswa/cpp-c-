#include <iostream>

using namespace std;

int main()
{

    int teaPrice;
    int increaseTeaPrice;
    cout << "Enter the base price";

    cin >> teaPrice;

    increaseTeaPrice = teaPrice * 1.10;

    cout << "increased price is:"<< increaseTeaPrice << endl;
}

/* Modify Tea Prices Create a program where the user inputs a base price for tea.
Use type casting to increase the price by 10% and display the rounded new price using explicit casting.*/