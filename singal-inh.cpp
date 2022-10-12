#include <iostream>
using namespace std;

// SINGAL INHERITANCE

class student // BASE CLASS
{
public:
     int a = 11;
};

class student1 // BASE SECOND CLASS
{

public:
     int a1 = 12;
};

class child : public student //  DRIVE CLASS SINGAL INHERITANCE .
{
public:
     int b = 11;
     child()
     {
          cout << " a= " << a;
     }
     child(int b)
     {
          cout << "add = " << b + a;
     }
} c1;

int main()
{
     student s1;
     child c2(10);

     return 0;
}

/* there are THREE types of access specifier:-
1. private
== you can't inherite base private class to another drive class.

2. public
== you can inherite the base class to another drive class and access the data members and
data function of class at main function by using object.

3. protected
== you can inherite the base class to another drive class but you can't access the
 data members and data function of class at main function.
 you can drive class properties to another class.
 */