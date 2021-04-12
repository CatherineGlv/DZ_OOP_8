#include <iostream>
using namespace std

class Ex
{
public:
    double n;
    Ex(const double& n_) : n(n_) 
    {}
    ~Ex() 
    {}
};

class Bar
{
private:
    double y;
public:
    Bar() 
    { 
        y = 0;
    }
    ~Bar() 
    {}
    void set(const double& a)
    {
        if (y + a > 100)
        {
            y = a;

        }
        else throw Ex(a * y);
    }
};

int main()
{
    Bar b;
    int n;
    while (cin >> n && n != 0) 
    {
        try
        {
            b.set(n);
        }
        catch (Ex& err)
        {
            cerr << "Exception: ay " << err.n << endl;
        }
    }
}