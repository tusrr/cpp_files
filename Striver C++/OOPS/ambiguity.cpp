#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am in A" << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << "I am in B" << endl;
    }
};
class C : public A, public B
{
};

int main()
{

    C c1; // c1 is obj of class C
    c1.A::func();
    c1.B::func();

    return 0;
}