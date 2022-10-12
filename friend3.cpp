#include <iostream>
using namespace std;
class kartik
{

    public:
    int a1, a2;
  int a,b;
  
    friend int fun(kartik k);

}k1;

 int fun(kartik k)
 {
     int f1=k.a1,f2=k.a2;
 cout<< f1+f2;
     return 0;
 }
int main()
{
    int a, b;

    cout << "enter the two numbers" << endl;
    cin >> k1.a1 >> k1.a2;
    fun(k1);

    return 0;
}