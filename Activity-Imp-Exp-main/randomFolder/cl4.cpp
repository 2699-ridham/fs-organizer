#include <iostream>
    using namespace std;
    int main()
    {
        int num = 48;
        int* ptr = &num;
        cout << sizeof(ptr);
        return 0;
    }
