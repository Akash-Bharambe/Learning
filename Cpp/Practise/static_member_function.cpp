#include <iostream>
using namespace std;

class Math
{
private:
    int n1, n2;

public:
    Math()
    {
        this->n1 = 10;
        this->n2 = 5;
    }
    Math(int n1, int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }
    static int sum(int n1, int n2)
    {
        return n1+ n2;
    }
};

int main()
{
    Math::sum(20, 30);
    Math::sum(20, 30);
    Math m1;
    int res = m1.sum(20,30);
   
    
    cout << "Sum: " << res << endl;

    return 0;
}