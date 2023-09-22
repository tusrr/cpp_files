#include <iostream>
using namespace std;

class Human
{
protected:
    int height;

public:
    void setHeight(int h)
    {
        height = h;
    }
};

class Male : private Human
{
public:
    void printHeight()
    {
        cout << "Height: " << height << " cm" << endl; // Accessing protected member within the derived class
    }
};

int main()
{
    Male m1;
    // m1.height = 180;  // Error: 'int Human::height' is protected within this context
    // m1.setHeight(180); // Error: 'void Human::setHeight(int)' is protected within this context
    m1.printHeight(); // This works because the protected member is accessed within the derived class

    return 0;
}
