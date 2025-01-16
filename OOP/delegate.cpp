#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int chaiServed;
    vector<string> ingredients;
    

    // delegating constructor
    
    Chai(string name) : Chai(name, 1, {"Water", "tea leaves"}) {} 
     

     // paramaterize constructor
    Chai(string name, int serve, vector<string> ingr) 
    {

        teaName = name;
        chaiServed = serve;
        ingredients = ingr;

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

    Chai quickChai("Ginger tea");

    quickChai.displayChaiDetails();

    return 0;
}