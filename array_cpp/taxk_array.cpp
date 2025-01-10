#include <iostream>

using namespace std;

int totalChaiServed(int chaiServed[], int size)
{

    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + chaiServed[i];
    }
    return total;
}

int main()
{

    int numberOfElement;
    cout << "Enter the number of element : \n";

    cin >> numberOfElement;

    int chaiServe[numberOfElement];

    cout << "Enter " << numberOfElement << "no. of element : \n";

    for (int i = 0; i < numberOfElement; i++)
    {
        cin >> chaiServe[i];
    }


    int total =  totalChaiServed(chaiServe, numberOfElement);
    cout <<"Total Chai Served : "<< total;

    return 0;
}