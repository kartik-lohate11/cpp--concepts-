#include <iostream>
using namespace std;
class student
{
     int a;

public:
     student()
     {
          cout << "const. is calls" << endl;
     }
     ~student()
     {
          cout << "discuter is calls" << endl;
     }
};

int main()
{
     cout << " 1 constructure" << endl;
     student s1, s2;
     {
          cout << " 2 vdis" << endl;
          student s2;
          cout << " 2.1 dis";
     }
     cout << " 3 con." << endl;
     s1;
     return 0;
}