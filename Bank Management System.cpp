# Projects

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********Menu**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Whithdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    // Check balance,deposite,whithdraw,show menu
    int option;
    double balance = 1000;

    do
    {
        showMenu();
        cout << "option : ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "Balance is : " << balance << " Rs" << endl;
            break;

        case 2:
            cout << "Deposite amount : ";
            double depositeAmount;
            cin >> depositeAmount;
            balance = balance + depositeAmount;
            break;

        case 3:
            cout << "Whithdraw amount : ";
            double whithdrawAmount;
            cin >> whithdrawAmount;
            if (whithdrawAmount <= balance)
                balance = balance - whithdrawAmount;
            else
                cout << "Not enough money please check the account balance" << endl;
            break;
        }
    } while (option != 4);
    return 0;
}

//             Report for c++ Project
/*                    -->   This Project created by Chauhan Nirav
                      -->   This Name is BankDetail
                      -->   This Project by using only three condition for user
                            - 1. Check balance
                            - 2. Deposite
                            - 3. Whithdraw amount
                      -->   This project are using only one function showMenu() This function are usin print 4 this case

                      **********Step how to using this**********
                        1. check this program Run or not
                        2. program will be run yet for using own work above showing condition
                        3. display screen are showing for printing four option for same like here,

                                **********Menu**********
                                1. Check balance
                                2. Deposite
                                3. Whithdraw
                                4. Exit
                                ************************
                      --> use for 4 option to click option name and enter for only 1 option for three case
                      --> click 1. option to showing bank balance for user
                      --> click 2. option to showing & user enter deposite value
                      --> click 3. option to showing & user enter whithdrawl value if there are whithdrawl amout is big for bank balance
                         to system out the massege is "Not enough money please check the account balance"
                      --> click 4. last option is Exit this program
                      --> Thank You guys Showing this Small Project.
*/
