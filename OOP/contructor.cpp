#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int chaiServed;
    vector<string> ingredients;

    Chai()
    {

        teaName = "Unknown Tea";
        chaiServed = 3;
        ingredients = {"water", "tealeaf", "sugar"};

        cout << "Contructor called \n";
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << chaiServed << endl;
        cout << "Ingredients: ";
        for (string ingridient : ingredients)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main()
{

  Chai defaultChai;
   
   defaultChai.teaName = "Masala Chai";
   
  defaultChai.displayChaiDetails();
   
    return 0;
}