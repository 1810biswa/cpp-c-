#include <iostream>
#include <string>

using namespace std;

int main()
{

    string teaOrder;
    cout << "Enter tea order: " << endl;
    getline(cin, teaOrder);

    if (teaOrder == "Grean tea")
    {
        cout << "Your teaOrder is placed";
    }else{
        cout << "You have typo error";
    }

    
}