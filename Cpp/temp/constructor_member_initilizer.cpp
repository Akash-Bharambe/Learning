#include <iostream>
using namespace std;

// CONSTRUCTOR MEMBER INITIALIZER LIST
class Test
{
private:
    int num1, num2, num3;

public:
    Test() : num1(10), num2(20), num3(30) {}

    // Test() //parameterless constructor
    //{
    //   num1=10;
    // num2=20;
    // num3=30;
    //}

    Test(int num1, int num2, int num3)
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }
    void disp()
    {
        cout << " Num 1: " << num1 << " Num2: " << num2 << " Num3: " << num3 << endl;
    }
};
int main(void)
{
    Test t;
    t.disp();
    Test t2(100, 200, 300);
    t2.disp();
    return 0;
}
