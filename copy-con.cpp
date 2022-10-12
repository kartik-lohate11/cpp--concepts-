#include <iostream>
using namespace std;
class student
{
     int a;

public:
     student(){}; // default constructure.

     student(int b) // s1. parametrise constructure.
     {
          a = b;
          cout << "hello" << a << endl;
     }
     student(int a1, int a2) // s3 parametrise constructure takes 2 arrguments
     {
          a = a1 + a2;
          cout << a << endl;
     }

     student(student &b1) // s2.copy constructure which takes a address of a object which is wants to copy.
     {
          cout << "copy constructure is calls" << b1.a;
     }
};

int main()
{
     student s1(1), s3(10, 20);
     // student s2(s1);
     student s2 = s3;

     return 0;
}