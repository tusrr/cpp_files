#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};
int main()
{

    Dog d;
    d.speak();
    cout << d.age;

    return 0;
}