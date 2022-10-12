#include <iostream>
using namespace std;

// MULTILEVEL INHERITANCE.

class student // base class
{
protected:
  int a = 11;
  // a = 11;
};

class student1 : protected student // drive(1) class drive by base class (singal inheritamce).
{
public:
  int fun()
  {
    cout << " a = " << a;
    return 0;
  }
};

class student3 : public student1 // drive drive(2) class by drive class(1) (multilevel inheritance).
{
public:
  student3()
  {
    cout << "hello a = " << a << endl; // acess by base class.
  }
} s1; // object of student3 class

int main()
{
  student1 a1;
  a1.fun();

  return 0;
}