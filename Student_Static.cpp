#include<iostream>
using namespace std;

// Using STATIC data member and member function and count the number of object.

class Student
{
  char name[10];
  int roll_no;
  int markes;
  static int count;
  public:
  Student()
  {
  count++;
  }
  int getdata()
  {
   cout<<"enter the student name"<<endl;
   cin>>name;
   cout<<"enter the student roll no "<<endl;
   cin>>roll_no;
   cout<<"enter the student markes "<<endl;
   cin>>markes;
   return 0 ;
  }
    static int  count1();
    int putdata();
};
 int  Student :: count1()
 {
   return count;

}
int Student :: count = 0;
int Student :: putdata()
{
 cout<<"student name = "<<name<<endl;
 cout<<"student rollno = "<<roll_no<<endl;
 cout<<"student markes = "<<markes<<endl;
return 0 ;

}
int main()
{
 Student s1,s2;
 
 s1.getdata();
 s2.getdata();
 Student::count1();
 s1.putdata();
 s2.putdata();
 cout<<" the number of object = "<<Student ::count1();
	
    return 0 ;
}
/*
OUTPUT:-
enter the student name
kartik
enter the student roll no 
84
enter the student markes 
99
enter the student name
kartik.k
enter the student roll no 
99
enter the student markes 
89
student name = kartik
student rollno = 84
student markes = 99
student name = kartik.k
student rollno = 99
student markes = 89
 the number of object = 2*/
