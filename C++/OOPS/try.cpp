#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output:" << value2 - value1 << endl;

        cout << "Love Tushar" << endl;
    }

    void operator()()
    {
        cout << "I'm a bracket" << this->a << endl;
    }
};

int main()
{

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
    obj2();
    return 0;
}