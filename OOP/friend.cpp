#include <iostream>

using namespace std;

class Tea
{

private:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve) {} // contructor

    friend bool compareServe(const Tea &tea1, const Tea &tea2);

    void display() const
    {
        cout << "Here is :  " << teaName << "No. of cup :" << endl;
    }
};

bool compareServe(const Tea &tea1, const Tea &tea2)
{
    cout << (tea1.servings > tea2.servings) << endl; // Just for debugging purpose
    return tea1.servings > tea2.servings;
}

int main()
{

    Tea masalaTea("Masala Tea", 8);
    Tea gingerTea("ginger Tea", 3);

    if (compareServe(masalaTea, gingerTea))
    {
        cout << "Masala tea is having MORE servings" << endl;
    }
    else
    {
        cout << "Masala tea is having LESS servings" << endl;
    }

    return 0;
}