#include <iostream>
using namespace std;


class classB;

class classA
{
private:
    int a;

public:
    classA()
    {
        this->a = 10;
    }
    classA(int a)
    {
        this->a = a;
    }
    friend void add(classA aobj, classB bobj);
    
};

class classB
{
private:
    int a;

public:
    classB()
    {
        this->a = 10;
    }
     classB(int a)
    {
        this->a = a;
    }
    friend void add(classA aobj, classB bobj);
};


void add(classA aobj, classB bobj)
{
        int result;
        result = aobj.a + bobj.a;
        cout<<"sum: "<<result<<endl;
    }

int main()
{
    classA a(50);
    classB b(20);
    add(a,b);
    return 0;
}