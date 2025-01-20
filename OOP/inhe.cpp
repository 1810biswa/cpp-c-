#include <iostream>
using namespace std;

class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea contructor called : " << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method" << endl;
    }

    virtual void serve()
    {
        cout << "Serving " << servings << " with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Grean Tea", serve)
    {
        cout << "Green tea constructor called " << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea destructor called " << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "Masala tea constructor called " << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " with spices and milk" << std::endl;
    }

    ~MasalaTea()
    {
        cout << "Masala tea destrctor is called" << endl;
    }
};

int main()
{

    Tea *tea1 = new GreenTea(3);
    Tea *tea2 = new MasalaTea(4);

    tea1->brew();
    tea1->serve();
    
    tea2->brew();
    tea2->serve();
    // helo


    return 0;
}