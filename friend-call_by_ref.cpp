#include <iostream>
using namespace std;

// FRIEND FUCTTION performs by using call by refrence and swap the two integers.

class k1;
class k
{
  int a;

public:
  int fun(int a1)
  {
    a = a1;
    cout << "a = " << a << endl;
    return 0;
  }

  friend int fun1(k &, k1 &);
};

class k1
{
  int b;

public:
  int fun(int a2)
  {
    b = a2;
    cout << " b = " << b << endl;
    return 0;
  }
  friend int fun1(k &, k1 &);
};

int fun1(k &x, k1 &y)
{
  int tem;
  tem = x.a;
  x.a = y.b;
  y.b = tem;

  cout << "a = " << x.a << " b = " << y.b << endl;
  return 0;
}

int main()
{
  k x1;
  k1 x2;

  x1.fun(2);
  x2.fun(3);

  fun1(x1, x2);
  fun1(x1, x2);

  return 0;
}