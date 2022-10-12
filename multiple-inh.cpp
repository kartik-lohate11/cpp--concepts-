#include <iostream>
using namespace std;

// MULTIPLE INHERITANCE { SINTAX : CLASS DRIVE_CLASS_NAME : PUBLIC,PRIVATE BASE CLASS_NAMES};
// EX class student2(drive_class) : public student , student1(base_classes).

class student // base(1) class
{
public:
  int a = 10;
  student()
  {
    cout << "first class" << endl;
  }
  int fun()
  {
  cin>>a;
    return 0;
  }
};

class student1 // base class (2)
{

public:
  int a1 = 11;
};

class student2 : public student, student1 // drive class (student2)
{
public:
  student2()
  {
    cout << " a1 = " << a1 << endl; // value by base-class(1)
    cout << "a = " << a;            // value by base-class(2)
  }

} s2;  // object of drive class

int main()
{
  student s1;
  s1.fun();
  s2;

  return 0;
}