#include <cstring>
#include <iostream>
#include <string>
using namespace std;
class CPPR5Class
{
public:
    CPPR5Class() :
        data (new char[14])
    {
        strcpy(data, "Hello, World!\nWelcome to Easy Engineering");
    }
    CPPR5Class (const CPPR5Class& original) :
        data (new char[strlen (original.data) + 1])
    {
        strcpy(data, original.data);
    }
    CPPR5Class (CPPR5Class&& original) noexcept :
        data(original.data)
    {
        original.data = nullptr;
    }
    ~CPPR5Class() noexcept
    {
        delete[] data;
    }
    CPPR5Class& operator= (const CPPR5Class& original)
    {
        CPPR5Class tmp(original);
        *this = move(tmp);
        return *this;
    }
    CPPR5Class& operator= (CPPR5Class&& original) noexcept
    {
        if (this == &original)
        {
            return *this;
        }
        delete[] data;
        data = original.data;
        original.data = nullptr;
        return *this;
    }
private:
    friend ostream& operator<< (ostream& os, const CPPR5Class& cPPR5Class)
    {
        os << cPPR5Class.data;
        return os;
    }

    char* data;
};
int main()
{
    const CPPR5Class cPPR5Class;
    cout<<"OMANSH DHAWAN CSE-B 202"<<endl;
    cout << cPPR5Class <<endl;

    return 0;
}
