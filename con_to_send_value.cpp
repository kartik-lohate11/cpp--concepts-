#include <iostream>
using namespace std;

// initilizations list in constructure:
// constructure_name(int x,int y ,...):(variabel_name)a(x),b(y)...

class student
{
  int a;

public:
  student(int x, int y) : a(x)
  {
    cout << "the value of a is  = " << a;
  }
  int fun()
  {

    return 0;
  }
};

int main()
{
  student s1(10, 19);

  return 0;
}