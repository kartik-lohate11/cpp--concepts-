#include <iostream>
using namespace std;
class a;
class k
{

   int a1;

public:
   int fun3(int b)
   {
      a1 = b;
      return 0;
   }
    friend int fun1(k,a);
};

class a
{

   int a2;

public:
   int fun(int c)
   {
      a2 = c;
      return a2;
   }
  friend int fun1(k,a);
};

 int fun1(k k1,a k2)
 {
    cout<<k1.a1+k2.a2;
    return 0;
 }
int main()
{
    k kar;
    a tik;
    kar.fun3(2);
    tik.fun(3);
    fun1(kar,tik);

   return 0;
}