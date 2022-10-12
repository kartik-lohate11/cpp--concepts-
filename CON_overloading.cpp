#include <iostream>
using namespace std;
class student
{
    int a;

public:
    student()
    {
        cout << "i love c++ programming language " << endl;
    }

    student(string a)
    {
        cout << " i love " << a;
    }
};

int main()
{
    int a;
    string s;
    cout << " enter the cho " << endl;
    cout << " 1 for enter the string " << endl
         << " else default arrgument " << endl;
    cin >> a;
    switch (a)
    {
    case 1:
    {
        cout << "enter the string " << endl;
        cin >> s;
        student s1(s);
    }
    break;

    default:
        student o;
    }

    return 0;
}