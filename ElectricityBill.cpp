#include <iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float bill;

    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Units: ";
    cin >> units;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = units * 15;
    }
    else if (units <= 300)
    {
        bill = units * 20;
    }
    else
    {
        bill = units * 25;
    }

    cout << "\nCustomer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Electricity Bill: Rs. " << bill << endl;

    return 0;
}