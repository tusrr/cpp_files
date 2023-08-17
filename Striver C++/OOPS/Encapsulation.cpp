
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int health;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    Student first;
    cout << "All okay";
    int age = first.getAge();
    cout << age;

    return 0;
}