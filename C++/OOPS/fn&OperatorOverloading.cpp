#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello " << endl;
    }
    int sayHello(string name, int n)
    {
        cout << "Hello " + name << endl;
        return n;
    }
    void sayHello(char name)
    {
        cout << 'h' + name << endl;
    }
};

int add(int x, int y, int z = 2, int w = 0)
{
    return x + y + z + w;
}

// Operator Overloading
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
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout << "output:" << value2 - value1 << endl;

        cout << "Love Tushar" << endl;
    }

    void operator()()
    {
        cout << "I'm a bracket" << this->a << endl;
    }
};

int main()
{
    // A obj;
    // obj.sayHello();
    // obj.sayHello("Sumit", 67);
    // cout << "---" << endl;
    // cout << obj.sayHello("Sumit", 67) << endl;
    // obj.sayHello('x'); // ascii h=104,x=110

    // cout << add(10, 20) << "\n";
    // cout << add(10, 20, 30) << "\n";
    // cout << add(10, 20, 30, 40) << "\n";

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
    obj2();
    return 0;
}