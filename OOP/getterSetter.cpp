#include <iostream>
#include <vector>

using namespace std;

class Chai
{

private:
    string teaName;
    int chaiServed;
    vector<string> ingredients;

public:
    Chai()
    {

        teaName = "Unknown Tea";
        chaiServed = 3;
        ingredients = {"water", "tealeaf", "sugar"};

        cout << "Contructor called \n";
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        chaiServed = serve;
        ingredients = ingr;
    }

    string getTeaName()
    {

        cout << "Tea Name: " << teaName << endl;
        return teaName;
    }

    void setTeaName(string name)
    {
        teaName = name;
    }

    int getChaiServed()
    {

        return chaiServed;
    }

    void setChaiServed(int serve)
    {
        chaiServed = serve;
    }

    vector<string> getIngredients()
    {
        return ingredients;
    }

    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
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

    Chai chai;
    
    chai.setTeaName("Ginger tea");
    chai.getTeaName();   // additional called just to see
    

    chai.displayChaiDetails();
  
    return 0;
}