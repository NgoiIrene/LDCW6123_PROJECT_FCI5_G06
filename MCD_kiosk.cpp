

#include <iostream>
#include <iomanip>
using namespace std;

void welcomemessage()
{
    int selection;
    do
    {
        cout << "-----------------------------------------" << endl;
        cout << "Welcome to McDonald's(MCD) Kiosk!" << endl;
        cout << "You would like to DINE IN or TAKE AWAY?" << endl;
        cout << "1.DINE IN" << endl;
        cout << "2.TAKE AWAY" << endl;
        cout << "Please enter 1 or 2 to continue: " << endl;
        cin >> selection;

        if (selection == 1)
        {
            cout << "---------------- DINE IN ----------------" << endl;
        }
        else if (selection == 2)
        {
            cout << "--------------- TAKE AWAY ---------------" << endl;
        }
        else
        {
            cout << "INVALID NUMBER!PLEASE TRY AGAIN" << endl;
        }

    } while (selection != 1 && selection != 2);
}

int main()
{
    char option;
    const int OptionWidth = 10;
    const int CategoryWidth = 28;
    cout << "-----------------------------------------" << endl;
    cout << "           Menu Categories      " << endl;
    cout << "-----------------------------------------" << endl;
    cout << left << setw(OptionWidth) << "Options" << left << setw(CategoryWidth) << "Food Categories" << endl;
    cout << left << setw(OptionWidth) << "A" << left << setw(CategoryWidth) << "Burgers" << endl;
    cout << left << setw(OptionWidth) << "B" << left << setw(CategoryWidth) << "Chickens & McNuggets" << endl;
    cout << left << setw(OptionWidth) << "C" << left << setw(CategoryWidth) << "Happy Meals" << endl;
    cout << left << setw(OptionWidth) << "D" << left << setw(CategoryWidth) << "Beverages" << endl;
    cout << left << setw(OptionWidth) << "E" << left << setw(CategoryWidth) << "Rice & Porridge" << endl;
    cout << left << setw(OptionWidth) << "F" << left << setw(CategoryWidth) << "Desserts & Sides" << endl;
    cout << endl;
    cout << "Please enter your choice (A to F): ";
    cin >> option;
    cout << endl;

    switch (option)
    {
    case 'A':
        cout << "Go to menu A";
        break;
    case 'B':
        cout << "Go to menu B";
        break;
    case 'C':
        cout << "Go to menu C";
        break;
    case 'D':
        cout << "Go to menu D";
        break;
    case 'E':
        cout << "Go to menu E";
        break;
    case 'F':
        cout << "Go to menu F";
        break;
    default:
        cout << "byebye";
        break;
    }
}