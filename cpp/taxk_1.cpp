#include <iostream>
#include <string>

using namespace std;

int main()
{

    // int noOfBag;

    // cout << "Enter no. of tea bag : \n";
    // cin >> noOfBag;

    // while (noOfBag > 0)
    // {

    //     cout << "No of Tea bag  : " << noOfBag << endl;

    //     cout << "Enter no. of tea bag left enter(0) to stop: \n";

    //     cin >> noOfBag;

    // }

    // cout << "You have " << noOfBag << "  tea bag left";

    /*
    Write a program that asks the user if they want to add more sugar to their tea.
    Keep asking until they respond with "enough." Use a do-while loop for this.

    */

    string addSugar;

    do
    {
        cout << "You want more Sugar: type(yes  | enough to stop)\n";

        getline(cin, addSugar);



    } while (addSugar != "enough");

    cout << "The customer said enough no need to add";

    return 0;
}