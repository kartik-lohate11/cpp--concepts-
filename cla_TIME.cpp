#include <iostream>
using namespace std;

//  W.A.P to input time(hours||minutes||seconds) by two objects
//  then calculate time and store the final time at third object.
//  Data members should be private.

class Time
{
    int h, m, s;

public:
    int time()
    {
        cout << "enter the hours " << endl;
        cin >> h;
        cout << "enter the min. " << endl;
        cin >> m;
        cout << "enter the sec. " << endl;
        cin >> s;
        return 0;
    }
    friend int total_time(Time &, Time &, Time &);
};
int total_time(Time &x, Time &y, Time &z)
{

    z.h = x.h + y.h;
    z.m = x.m + y.m;
    z.s = x.s + y.s;
    cout << " the total time = " << z.h << " hours || " << z.m << " min || " << z.s << " sec " << endl;

    if (z.s > 60)
    {
        z.m = z.m + z.s / 60;
        z.s = z.s - 60;
        if (z.s > 60)
        {
            z.s = z.s - 60;
        }
    }
    if (z.m > 60)
    {
        z.h = z.h + z.m / 60;
        z.m = z.m - 60;
        if (z.m > 60)
        {
            z.m = z.m - 60;
        }
    }

    cout << " the total final time = " << z.h << " hours || " << z.m << " min || " << z.s << " sec " << endl;

    return 0;
}

int main()
{
    Time t1, t2, t3;
    t1.time();
    t2.time();
    total_time(t1, t2, t3);

    return 0;
}
/*

OUTPUT :-
enter the hours
1
enter the min.
10
enter the sec.
90
enter the hours
1
enter the min.
12
enter the sec.
10
 the total time = 2 hours || 22 min || 100 sec
 the final total time = 2 hours || 23 min || 40 sec

 second times:-
 the total time = 2 hours || 80 min || 12 sec
 the total final time = 3 hours || 20 min || 12 sec

 */
