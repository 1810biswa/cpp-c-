
#include <iostream>
using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0;
    virtual void brewTea() = 0;
    virtual void serveTea() = 0;

    void makeTea()
    {
        prepareIngredients();
        brewTea();
        serveTea();
    }
};

class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready" << endl;
    };

    void brewTea() override
    {
        cout << "Green Tea brewed" << endl;
    };

    void serveTea() override
    {
        cout << "Grean Tea served" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready along with masala" << endl;
    };

    void brewTea() override
    {
        cout << "Masala Tea brewed" << endl;
    };

    void serveTea() override
    {
        cout << "Masala Tea Served" << endl;
    }
};

int main()
{
    Tea *tea;

    GreenTea greenTea;
    MasalaTea masalaTea;

    tea = &greenTea;
    tea->makeTea();

    cout << endl;

    tea = &masalaTea;
    tea->makeTea();

    return 0;
}