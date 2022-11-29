#include <iostream>
using namespace std;

class Account
{

    int acc_no;
    char name[10], acc_type;

public:
    char c;
    void get_acc_del()
    {
        cout << "enter the your name :" << endl;
        cin >> name;
        cout << "enter the account number " << endl;
        cin >> acc_no;
        cout << "enter the account type" << endl;
        cin >> acc_type;
        c = acc_type;
    }

    void display()
    {
        cout << " your name = " << name << endl;
        cout << "your account no. = " << acc_no << endl;
    }
};

class current_acc : public Account
{

    int cbal;

public:
    current_acc()
    {
        cbal = 1000;
    }
    void cdisplay()
    {
        cout << " the total amount " << cbal;
    }

    void cdeposit(int a)
    {
        cbal = cbal + a;
    }

    void cwith(int b)
    {
        if (cbal - b >= 1000)
        {
            cbal = cbal - b;
        }
        else
        {
            cout << " you have less amount !!!" << endl;
        }
    }
};
class saving_acc : public Account
{

    int sbal;

public:
    saving_acc()
    {
        sbal = 500;
    }
    void sdisplay()
    {
        cout << " the total amount = " << sbal << endl;
    }

    void sdeposit(int a)
    {
        sbal += a;
    }

    void swith(int b)
    {
        if (sbal - b >= 500)
        {
            sbal -= b;
        }
        else
        {
            cout << "you have a less amount " << endl;
        }
    }
};

int main()
{
    int ch, a = 11, b, d, a1 = 11, a2 = 11;
    char ch1;

    saving_acc s_acc;
    current_acc c_acc;

    cout << "enter the type of account " << endl;
    cout << " S for saving   || C for current " << endl;
    while (a != 0)
    {
        cin >> ch1;
        if (ch1 == 's')
        {
            {
                s_acc.get_acc_del();
                cout << " SAVING ACCOUNT " << endl;
                cout << "enter the your choose" << endl;
                cout << "1. display || 2.deposit || 3. withdrow || 4. exit " << endl;
                while (a1 != 0)
                {
                    cout << "enter the your next choose" << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 1:
                    {
                        s_acc.sdisplay();
                    }
                    break;

                    case 2:
                    {
                        cout << "enter the amount" << endl;
                        cin >> d;
                        s_acc.sdeposit(d);
                    }
                    break;

                    case 3:
                    {
                        cout << "enter the amount" << endl;
                        cin >> d;
                        s_acc.swith(d);
                    }
                    break;

                    case 4:
                    {
                        cout << "exit";
                        s_acc.display();
                        a1 = 0;
                        a = 0;
                    }
                    }
                }
            }

            // current account ";

            if (ch1 == 'c')
            {
                {
                    c_acc.get_acc_del();
                    cout << " current ACCOUNT " << endl;
                    cout << "enter the your choose" << endl;
                    cout << "1. display || 2.deposit || 3. withdrow || 4. exit " << endl;

                    while (a2 != 0)
                    {
                        cout << "enter the your next choose" << endl;
                        cin >> ch;
                        switch (ch)
                        {
                        case 1:
                        {
                            c_acc.cdisplay();
                        }
                        break;

                        case 2:
                        {
                            cout << "enter the amount" << endl;
                            cin >> d;
                            c_acc.cdeposit(d);
                        }
                        break;

                        case 3:
                        {
                            cout << "enter the amount" << endl;
                            cin >> d;
                            c_acc.cwith(d);
                        }
                        break;

                        case 4:
                        {
                            cout << "exit";
                            c_acc.display();
                            a2 = 0;
                            a = 0;
                        }
                        }
                    } // exit account:
                }

                if (ch != 's' && ch != 'c')
                {
                    cout << " invalid " << endl;
                }
            }
        }
    }

    // acc.display();
    cout << " thank for visiting " << endl;

    return 0 ;
}
/*
OUTPUT :-

enter the type of account 
 S for saving   || C for current
s
enter the your name :
kartik
enter the account number 
123
enter the account type
s
 SAVING ACCOUNT 
enter the your chosse
1. display || 2.deposit || 3. withdrow || 4. exit
enter the your next chosse
1
 the total amount = 500
enter the your next chosse
2
enter the amount
500
enter the your next chosse
1
 the total amount = 1000
enter the your next chosse
3
enter the amount
600
you have a less amount 
enter the your next chosse
3
enter the amount
400
enter the your next chosse
1
 the total amount = 600
enter the your next chosse
4
exit your name = kartik
your account no. = 123
 thank for visiting
 */
