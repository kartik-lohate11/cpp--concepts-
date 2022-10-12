#include <iostream>
using namespace std;

// INHERITANCE

class student   // BASE class
{
public:
  int a = 1, b = 2;
  student()
  {
  }
  int fun()
  {
    cout << "enter the no." << endl;
    cin >> a >> b;

    return 0;
  }
};

class student2 : public student  // DRIVED class
{

public:
  int fun2(int x, int y)
  {
    cout << " a " << x << " b  " << y << " = " << x + y << endl;
    return 0;
  }

  int fun3()
  {
    cout << " a= " << a << " b = " << b << endl;
    return 0;
  }
};

int main()
{
  student s1;
  student2 s2;
  
  s1.fun();
  s2.fun2(s1.a, s1.b);
  s2.fun3();

  return 0;
}