#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int option;
    float balance = 10000, amount;

    do
    {
        cout << "==================================" << endl;
        cout << "          ATM SYSTEM              " << endl;
        cout << "==================================" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> option;

        if (option == 1)
        {
            cout << "Current Balance: " << balance << endl;
        }
        else if (option == 2)
        {
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            if (amount > 0)
            {
                balance = balance + amount;
                cout << "Amount Deposited Successfully!" << endl;
                cout << "New Balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid Amount!" << endl;
            }
        }
        else if (option == 3)
        {
            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if (amount <= balance && amount > 0)
            {
                balance = balance - amount;
                cout << "Please Collect Your Cash." << endl;
                cout << "Remaining Balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance or Invalid Amount!" << endl;
            }
        }
        else if (option == 4)
        {
            cout << "Thank You for Using ATM!" << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

        if (option != 4)
        {
            cout << "\nPress any key to continue...";
            getch();
            system("cls");
        }

    } while (option != 4);

    return 0;
}