#include <iostream>
using namespace std;

class complex
{

  int r, i;

public:
  complex()
  {
    int a;
  }
  complex(int a, int b)
  {
    r = a;
    i = b;
  }

  complex operator+(complex c1)
  {
    complex c;
    c.r = c1.r + r;
    c.i = c1.i + i;

    return c;
  }

  void display();
};

void complex ::display()
{
  cout << " the complex no = " << r << " + " << i << "i";
}

int main()
{
  complex r1(2, 3), r2(12, 5);
  complex r = r1 + r2;
  r.display();

  return 0;
}