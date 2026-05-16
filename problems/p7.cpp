#include<iostream>
using namespace std;

class abc
{
    public:
    int a = 0;
};

int main()
{
    abc ob;
    abc *ptr = &ob;

    cout << ptr->a << endl;
    // cout << (*ptr).a << endl;

    return 0;
}