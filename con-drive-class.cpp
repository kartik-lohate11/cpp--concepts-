#include <iostream>
using namespace std;

// constructure in drive class cons. in con .

class student
{
  int a;

public:
  int b = 11;
  student(){}
  student(int x)
  {
     cout<<"  x= "<<x<<endl;
  }
  int fun1()
  {
    cout << " b =" << b << endl;
    cin >> b;
    return 0;
  }
};
class student1 : public virtual student
{

public:
  student1(int x ,int y) :student(x)
  {
    cout << " second class";
  }
  int fun()
  {
    fun1();
    cout << " float b = " << b << endl;
    return 0;
  }
};

int main()
{
  student1 s1(100,2);
  student s;

  s1.fun();

  cout << " add of s1 " << &s1 << endl;
  cout << " add of s1 " << &s << endl;

  return 0;
}