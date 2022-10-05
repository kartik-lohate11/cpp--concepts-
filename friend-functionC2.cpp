#include <iostream>
using namespace std;

// PerformS FRIEND FUNCTION and SCOPE RELUCATION .

class kartik
{

    int a, b;
    static int a1;       // static variable
public:
    int fun()
    {
        cout << "hello !";
        return 0;
    }

    friend kartik fun2(kartik k);   // FRIEND FUNCTION which type of class;
    int fun3();
};

kartik fun2(kartik k)
{
    kartik k2;
    cout << "hello kartik!";
    return k2;                 // return object(k2);
}
int kartik ::a1;            // SCOPE RELUCATION ONLY FOR STATIC VARIABLES.

int kartik::fun3()      // SCOPE RELUCATION .
{ 
    cout << "hello kartik lohate " << endl;
    return 0;
}
int main()
{
    kartik k1;
    k1.fun();
    k1.fun3();
    fun2(k1);
    return 0;
}